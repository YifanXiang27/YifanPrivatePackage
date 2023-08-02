/// \file
/// \ingroup tutorial_tmva
/// \notebook -nodraw
/// This macro provides examples for the training and testing of the
/// TMVA classifiers.
///
/// As input data is used a toy-MC sample consisting of four Gaussian-distributed
/// and linearly correlated input variables.
/// The methods to be used can be switched on and off by means of booleans, or
/// via the prompt command, for example:
///
///     root -l ./TMVAClassification.C\(\"Fisher,Likelihood\"\)
///
/// (note that the backslashes are mandatory)
/// If no method given, a default set of classifiers is used.
/// The output file "TMVA.root" can be analysed with the use of dedicated
/// macros (simply say: root -l <macro.C>), which can be conveniently
/// invoked through a GUI that will appear at the end of the run of this macro.
/// Launch the GUI via the command:
///
///     root -l ./TMVAGui.C
///
/// You can also compile and run the example with the following commands
///
///     make
///     ./TMVAClassification <Methods>
///
/// where: `<Methods> = "method1 method2"` are the TMVA classifier names
/// example:
///
///     ./TMVAClassification Fisher LikelihoodPCA BDT
///
/// If no method given, a default set is of classifiers is used
///
/// - Project   : TMVA - a ROOT-integrated toolkit for multivariate data analysis
/// - Package   : TMVA
/// - Root Macro: TMVAClassification
///
/// \macro_output
/// \macro_code
/// \author Andreas Hoecker


#include <cstdlib>
#include <iostream>
#include <map>
#include <string>

#include "TChain.h"
#include "TFile.h"
#include "TTree.h"
#include "TString.h"
#include "TObjString.h"
#include "TSystem.h"
#include "TROOT.h"

#include "TMVA/Factory.h"
#include "TMVA/DataLoader.h"
#include "TMVA/Tools.h"
#include "TMVA/TMVAGui.h"

int TMVAClassification( TString myMethodList = "" )
{
   // The explicit loading of the shared libTMVA is done in TMVAlogon.C, defined in .rootrc
   // if you use your private .rootrc, or run from a different directory, please copy the
   // corresponding lines from .rootrc

   // Methods to be processed can be given as an argument; use format:
   //
   //     mylinux~> root -l TMVAClassification.C\(\"myMethod1,myMethod2,myMethod3\"\)

   //---------------------------------------------------------------
   // This loads the library
   TMVA::Tools::Instance();

   std::cout << std::endl;
   std::cout << "==> Start TMVAClassification" << std::endl;


   TFile *siginput(0);
   TString fname = "../../../ScanUAFResult/Had_allsig.root";
   if (!gSystem->AccessPathName( fname )) {
      siginput = TFile::Open( fname ); // check if file in local directory exists
   }
   if (!siginput) {
      std::cout << "ERROR: could not open data file" << std::endl;
      exit(1);
   }
   std::cout << "--- TMVAClassification       : Using siginput file: " << siginput->GetName() << std::endl;

   TFile *bkginput(0);
   fname = "../../../ScanUAFResult/Had_allbkg.root";
   if (!gSystem->AccessPathName( fname )) {
      bkginput = TFile::Open( fname ); // check if file in local directory exists
   }
   if (!bkginput) {
      std::cout << "ERROR: could not open data file" << std::endl;
      exit(1);
   }
   std::cout << "--- TMVAClassification       : Using bkginput file: " << bkginput->GetName() << std::endl;



   // Register the training and test trees

   TTree *signalTreeTrain  = (TTree*)siginput->Get("CHANGEORITREEA");
   TTree *backgroundTrain  = (TTree*)bkginput->Get("CHANGEORITREEA");
   TTree *signalTreeTest   = (TTree*)siginput->Get("CHANGEORITREEB");
   TTree *backgroundTest   = (TTree*)bkginput->Get("CHANGEORITREEB");

   std::cout<<"signal has "<<signalTreeTrain->GetEntries()<<"events for training "<<signalTreeTest->GetEntries()<<"events for test"<<std::endl;
   std::cout<<"background has "<<backgroundTrain->GetEntries()<<"events for training "<<backgroundTest->GetEntries()<<"events for test"<<std::endl;

   // Create a ROOT output file where TMVA will store ntuples, histograms, etc.
   TString outfileName( "TMVA.root" );
   TFile* outputFile = TFile::Open( outfileName, "RECREATE" );

   TMVA::Factory *factory = new TMVA::Factory( "TMVAClassification", outputFile,
                                               "!V:!Silent:Color:DrawProgressBar:Transformations=I;D;P;G,D:AnalysisType=Classification" );

   std::cout<<"starting dataloader:" <<std::endl;

   TMVA::DataLoader *dataloader=new TMVA::DataLoader("dataset");
   // If you wish to modify default settings
   // (please check "src/Config.h" to see all available global options)
   //
   //    (TMVA::gConfig().GetVariablePlotting()).fTimesRMS = 8.0;
   //    (TMVA::gConfig().GetIONames()).fWeightFileDir = "myWeightDirectory";

   // Define the input variables that shall be used for the MVA training
   // note that you may also use variable expressions, such as: "3*var1/var2*abs(var3)"
   // [all types of expressions that can also be parsed by TTree::Draw( "expression" )]
   //
   dataloader->AddVariable("Hbbmass",'F');
   dataloader->AddVariable("Hbbtau21",'F');

   //dataloader->AddVariable("secfatjetscore",'F');
   dataloader->AddVariable("secfatjetmass",'F');
   dataloader->AddVariable("secfatjettau21",'F');

   //dataloader->AddVariable("Mlbminloose",'F');

   dataloader->AddVariable("trans_E",'F');

   std::cout<<"end dataloader"<<std::endl;

   dataloader->AddSignalTree    ( signalTreeTrain,1,TMVA::Types::kTraining);
   dataloader->AddBackgroundTree( backgroundTrain,1,TMVA::Types::kTraining);
   dataloader->AddSignalTree    ( signalTreeTest,1,TMVA::Types::kTesting);
   dataloader->AddBackgroundTree( backgroundTest,1,TMVA::Types::kTesting);

   // You can add so-called "Spectator variables", which are not used in the MVA training,
   // but will appear in the final "TestTree" produced by TMVA. This TestTree will contain the
   // input variables, the response values of all trained MVAs, and the spectator variables



   // global event weights per tree (see below for setting event-wise weights)
   Double_t signalWeight     = 1.0;
   Double_t backgroundWeight = 1.0;

   dataloader->SetSignalWeightExpression("fabs(weight)");
   dataloader->SetBackgroundWeightExpression("fabs(weight)");

   std::cout<<"end weight setting"<<std::endl;

   // Set individual event weights (the variables must exist in the original TTree)
   // -  for signal    : `dataloader->SetSignalWeightExpression    ("weight1*weight2");`
   // -  for background: `dataloader->SetBackgroundWeightExpression("weight1*weight2");`

   // Apply additional cuts on the signal and background samples (can be different)
   TCut mycuts = "trans_E > 1000 && trans_E < 3000";// && Hbbmass < 160";// && Wjetscore > 0.9";// && Zjetscore > 0.9"; // for example: TCut mycuts = "abs(var1)<0.5 && abs(var2-0.5)<1";
   TCut mycutb = "trans_E > 1000 && trans_E < 3000";// && Hbbmass < 160";// && Wjetscore > 0.9";// && Zjetscore > 0.9"; // for example: TCut mycutb = "abs(var1)<0.5";

   // Tell the dataloader how to use the training and testing events
   //
   // If no numbers of events are given, half of the events in the tree are used
   // for training, and the other half for testing:
   //
   //    dataloader->PrepareTrainingAndTestTree( mycut, "SplitMode=random:!V" );
   //
   // To also specify the number of testing events, use:
   //
   //    dataloader->PrepareTrainingAndTestTree( mycut,
   //         "NSigTrain=3000:NBkgTrain=3000:NSigTest=3000:NBkgTest=3000:SplitMode=Random:!V" );
   std::cout<<"start preparing"<<std::endl;
   dataloader->PrepareTrainingAndTestTree( mycuts, mycutb,
                                        "nTrain_Signal=0:nTrain_Background=0:SplitMode=Random:NormMode=NumEvents:!V" );
   std::cout<<"end preparing"<<std::endl;


   // ### Book MVA methods
   //
   // Please lookup the various method configuration options in the corresponding cxx files, eg:
   // src/MethoCuts.cxx, etc, or here: http://tmva.sourceforge.net/optionRef.html
   // it is possible to preset ranges in the option string in which the cut optimisation should be done:
   // "...:CutRangeMin[2]=-1:CutRangeMax[2]=1"...", where [2] is the third input variable

   std::cout<<"start bookmethod"<<std::endl;
   factory->BookMethod(dataloader, TMVA::Types::kBDT, "BDT",
           "!H:!V:MaxDepth=CHANGEMAXDEPTH:Ntrees=CHANGENTREES:BoostType=RealAdaBoost:SeparationType=CrossEntropy:nCuts=-1:NodePurityLimit=0.95");
   std::cout<<"end bookmethod"<<std::endl;

   // For an example of the category classifier usage, see: TMVAClassificationCategory
   //
   // --------------------------------------------------------------------------------------------------
   //  Now you can optimize the setting (configuration) of the MVAs using the set of training events
   // STILL EXPERIMENTAL and only implemented for BDT's !
   //
   //     factory->OptimizeAllMethods("SigEffAt001","Scan");
   //     factory->OptimizeAllMethods("ROCIntegral","FitGA");
   //
   // --------------------------------------------------------------------------------------------------

   // Now you can tell the factory to train, test, and evaluate the MVAs
   //
   // Train MVAs using the set of training events
   std::cout<<"starting training "<<std::endl;
   factory->TrainAllMethods();
   std::cout<<"end training"<<std::endl;

   // Evaluate all MVAs using the set of test events
   std::cout<<"starting testing"<<std::endl;
   factory->TestAllMethods();
   std::cout<<"end training"<<std::endl;

   // Evaluate and compare performance of all configured MVAs
   std::cout<<"starting evaluating"<<std::endl;
   factory->EvaluateAllMethods();
   std::cout<<"end evaluating"<<std::endl;

   // --------------------------------------------------------------

   // Save the output
   outputFile->Close();

   std::cout << "==> Wrote root file: " << outputFile->GetName() << std::endl;
   std::cout << "==> TMVAClassification is done!" << std::endl;

   delete factory;
   delete dataloader;
   // Launch the GUI for the root macros
   if (!gROOT->IsBatch()) TMVA::TMVAGui( outfileName );

   return 0;
}

int main( int argc, char** argv )
{
   // Select methods (don't look at this code - not of interest)
   TString methodList;
   for (int i=1; i<argc; i++) {
      TString regMethod(argv[i]);
      if(regMethod=="-b" || regMethod=="--batch") continue;
      if (!methodList.IsNull()) methodList += TString(",");
      methodList += regMethod;
   }
   return TMVAClassification(methodList);
}
