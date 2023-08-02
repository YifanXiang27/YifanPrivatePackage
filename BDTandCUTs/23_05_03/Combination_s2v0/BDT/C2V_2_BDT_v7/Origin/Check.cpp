#include <TH1.h>
#include <TH2.h>
#include <TH3.h>
#include <TChain.h>
#include <TRandom3.h>
#include <TLorentzVector.h>
#include <TROOT.h>
#include <TFile.h>
#include <TMath.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <Math/LorentzVector.h>
#include <Math/Point3D.h>
#include <TBranch.h>
#include <TTree.h>
#include <TBits.h>
#include <iostream>
#include <fstream>
#include <vector>
#include "TMVA/Tools.h"
#include "TMVA/Reader.h"
#include "TMVA/MethodCuts.h"
using namespace std;

void Check(){

    TMVA::Reader *reader = new TMVA::Reader("!Color:!Silent");

    Float_t  Hbbmass;
    Float_t  Hbbtau21;
    Float_t  Hbbscore;
    Float_t  HbbPt;

    Float_t  Wjetmass;
    Float_t  Wjettau21;
    Float_t  Wjetscore;
    Float_t  WjetPt;

    Float_t  Zjetmass;
    Float_t  Zjettau21;
    Float_t  Zjetscore;
    Float_t  ZjetPt;

    Float_t  secfatjetmass;
    Float_t  secfatjettau21;
    Float_t  secfatjetscore;
    Float_t  secfatjetPt;


    Float_t  leptonpt;
    Float_t  VBSMjj;
    Float_t  VBSdetajj;
    Float_t  VBSdphijj;
    Float_t  VBSPtjj;
    Float_t  Mlbminloose;
    Float_t  trans_E;
    Float_t  MET;
    Float_t  weight;

    reader->AddVariable("Hbbmass",&Hbbmass);
    reader->AddVariable("Hbbtau21",&Hbbtau21);
    //reader->AddVariable("secfatjetscore",&secfatjetscore);
    reader->AddVariable("secfatjetmass",&secfatjetmass);
    reader->AddVariable("secfatjettau21",&secfatjettau21);
    //reader->AddVariable("Mlbminloose",&Mlbminloose);
    reader->AddVariable("trans_E",&trans_E);

    reader->BookMVA("BDT","./dataset/weights/TMVAClassification_BDT.weights.xml");

    Double_t mvaValue = reader->EvaluateMVA("BDT");

    TFile *filesig = TFile::Open("../../../ScanUAFResult/Had_allsig.root");
    TTree *sigtrainfChain = (TTree *)filesig->Get("trainEvents");
    TTree *sigtraintree;
    sigtraintree = sigtrainfChain;

    TTree *sigtestfChain = (TTree *)filesig->Get("testEvents");
    TTree *sigtesttree;
    sigtesttree = sigtestfChain;

    TFile *writefile = new TFile("sigBDTresults.root","RECREATE");
    TH1D *P_sig_train_BDT = new TH1D("P_sig_train_BDT","P_sig_train_BDT",1000,0,1);
    TH1D *P_sig_test_BDT = new TH1D("P_sig_test_BDT","P_sig_test_BDT",1000,0,1);
    TH1D *S_sig_train_BDT = new TH1D("S_sig_train_BDT","S_sig_train_BDT",1000,0,1);
    TH1D *S_sig_test_BDT = new TH1D("S_sig_test_BDT","S_sig_test_BDT",1000,0,1);

    P_sig_train_BDT->Sumw2();
    P_sig_test_BDT->Sumw2();
    S_sig_train_BDT->Sumw2();
    S_sig_test_BDT->Sumw2();

    sigtraintree->SetBranchAddress("Hbbmass",&Hbbmass);
    sigtraintree->SetBranchAddress("Hbbscore",&Hbbscore);
    sigtraintree->SetBranchAddress("HbbPt",&HbbPt);
    sigtraintree->SetBranchAddress("Hbbtau21",&Hbbtau21);

    sigtraintree->SetBranchAddress("Wjetmass",&Wjetmass);
    sigtraintree->SetBranchAddress("Wjetscore",&Wjetscore);
    sigtraintree->SetBranchAddress("WjetPt",&WjetPt);
    sigtraintree->SetBranchAddress("Wjettau21",&Wjettau21);

    sigtraintree->SetBranchAddress("Zjetmass",&Zjetmass);
    sigtraintree->SetBranchAddress("Zjetscore",&Zjetscore);
    sigtraintree->SetBranchAddress("ZjetPt",&ZjetPt);
    sigtraintree->SetBranchAddress("Zjettau21",&Zjettau21);

    sigtraintree->SetBranchAddress("secfatjetmass",&secfatjetmass);
    sigtraintree->SetBranchAddress("secfatjetscore",&secfatjetscore);
    sigtraintree->SetBranchAddress("secfatjetPt",&secfatjetPt);
    sigtraintree->SetBranchAddress("secfatjettau21",&secfatjettau21);

    sigtraintree->SetBranchAddress("VBSMjj",&VBSMjj);
    sigtraintree->SetBranchAddress("VBSdetajj",&VBSdetajj);
    sigtraintree->SetBranchAddress("Mlbminloose",&Mlbminloose);
    sigtraintree->SetBranchAddress("trans_E",&trans_E);
    sigtraintree->SetBranchAddress("MET",&MET);
    sigtraintree->SetBranchAddress("weight",&weight);

    sigtesttree->SetBranchAddress("Hbbmass",&Hbbmass);
    sigtesttree->SetBranchAddress("Hbbscore",&Hbbscore);
    sigtesttree->SetBranchAddress("HbbPt",&HbbPt);
    sigtesttree->SetBranchAddress("Hbbtau21",&Hbbtau21);

    sigtesttree->SetBranchAddress("Wjetmass",&Wjetmass);
    sigtesttree->SetBranchAddress("Wjetscore",&Wjetscore);
    sigtesttree->SetBranchAddress("WjetPt",&WjetPt);
    sigtesttree->SetBranchAddress("Wjettau21",&Wjettau21);

    sigtesttree->SetBranchAddress("Zjetmass",&Zjetmass);
    sigtesttree->SetBranchAddress("Zjetscore",&Zjetscore);
    sigtesttree->SetBranchAddress("ZjetPt",&ZjetPt);
    sigtesttree->SetBranchAddress("Zjettau21",&Zjettau21);

    sigtesttree->SetBranchAddress("secfatjetmass",&secfatjetmass);
    sigtesttree->SetBranchAddress("secfatjetscore",&secfatjetscore);
    sigtesttree->SetBranchAddress("secfatjetPt",&secfatjetPt);
    sigtesttree->SetBranchAddress("secfatjettau21",&secfatjettau21);

    sigtesttree->SetBranchAddress("VBSMjj",&VBSMjj);
    sigtesttree->SetBranchAddress("VBSdetajj",&VBSdetajj);
    sigtesttree->SetBranchAddress("Mlbminloose",&Mlbminloose);
    sigtesttree->SetBranchAddress("trans_E",&trans_E);
    sigtesttree->SetBranchAddress("MET",&MET);
    sigtesttree->SetBranchAddress("weight",&weight);

    double WNA_initial = 0; //Weighted Number All
    double WNA_passBDT = 0;
    double WNA_passBF = 0;
    double WNA_passboth = 0;

    double WEA_initial = 0; //Weighted Error All
    double WEA_passBDT = 0;
    double WEA_passBF = 0;
    double WEA_passboth = 0;

    double WNR_initial = 0; //Weighted Number Training
    double WNR_passBDT = 0;
    double WNR_passBF = 0;
    double WNR_passboth = 0;

    double WER_initial = 0; //Weighted Error Training
    double WER_passBDT = 0;
    double WER_passBF = 0;
    double WER_passboth = 0;

    double WNE_initial = 0; //Weighted Number Testing
    double WNE_passBDT = 0;
    double WNE_passBF = 0;
    double WNE_passboth = 0;

    double WEE_initial = 0; //Weighted Error Testing
    double WEE_passBDT = 0;
    double WEE_passBF = 0;
    double WEE_passboth = 0;

    int sigNentries ;
    bool passBF;
    bool passBDT;
    sigNentries = sigtraintree->GetEntries();
    for(int ii  = 0 ; ii < sigNentries ; ii ++){
        sigtraintree->GetEntry(ii,0);
        if(VBSMjj < 500) continue;
        if(fabs(VBSdetajj) < 4) continue;
        if(trans_E > 3000) continue;
        if(trans_E < 1000) continue;
        WNA_initial += weight;
        WEA_initial += weight*weight;
        WNR_initial += weight;
        WER_initial += weight*weight;
        Double_t mvaValue = reader->EvaluateMVA("BDT");
        P_sig_train_BDT->Fill(mvaValue,weight);
    }

    sigNentries = sigtesttree->GetEntries();
    double totaltest = 0;
    for(int ii  = 0 ; ii < sigNentries ; ii ++){
        sigtesttree->GetEntry(ii,0);
        if(VBSMjj < 500) continue;
        if(fabs(VBSdetajj) < 4) continue;
        if(trans_E > 3000) continue;
        if(trans_E < 1000) continue;
        WNA_initial += weight;
        WEA_initial += weight*weight;
        WNE_initial += weight;
        WEE_initial += weight*weight;
        Double_t mvaValue = reader->EvaluateMVA("BDT");
        P_sig_test_BDT->Fill(mvaValue,weight);
    }
    cout<<"initial  events : "<<WNA_initial<<" +- "<<sqrt(WEA_initial)<<endl;
    cout<<"passing BDT     : "<<WNA_passBDT<<" +- "<<sqrt(WEA_passBDT)<<endl;
    cout<<"passing BF      : "<<WNA_passBF<<" +- "<<sqrt(WEA_passBF)<<endl;
    cout<<"passing both    : "<<WNA_passboth<<" +- "<<sqrt(WEA_passboth)<<endl;
    cout<<"training events : "<<WNR_initial<<" +- "<<sqrt(WER_initial)<<endl;
    cout<<"passing BDT     : "<<WNR_passBDT<<" +- "<<sqrt(WER_passBDT)<<endl;
    cout<<"passing BF      : "<<WNR_passBF<<" +- "<<sqrt(WER_passBF)<<endl;
    cout<<"passing both    : "<<WNR_passboth<<" +- "<<sqrt(WER_passboth)<<endl;
    cout<<"testing  events : "<<WNE_initial<<" +- "<<sqrt(WEE_initial)<<endl;
    cout<<"passing BDT     : "<<WNE_passBDT<<" +- "<<sqrt(WEE_passBDT)<<endl;
    cout<<"passing BF      : "<<WNE_passBF<<" +- "<<sqrt(WEE_passBF)<<endl;
    cout<<"passing both    : "<<WNE_passboth<<" +- "<<sqrt(WEE_passboth)<<endl;

    for(int ii = 0 ; ii < 1000 ; ii++){
        double totalweight = 0 ; 
        double totalerror = 0;
        for (int jj = ii ; jj < 1000 ; jj ++){
            totalweight += P_sig_test_BDT->GetBinContent(jj+1);
            totalerror += P_sig_test_BDT->GetBinError(jj+1) * P_sig_test_BDT->GetBinError(jj+1);
        }
        totalerror = sqrt(totalerror);
        S_sig_test_BDT->SetBinContent(ii+1,totalweight);
        S_sig_test_BDT->SetBinError(ii+1,totalerror);
    }
    for(int ii = 0 ; ii < 1000 ; ii++){
        double totalweight = 0 ;
        double totalerror = 0;
        for (int jj = ii ; jj < 1000 ; jj ++){
            totalweight += P_sig_train_BDT->GetBinContent(jj+1);
            totalerror += P_sig_train_BDT->GetBinError(jj+1) * P_sig_train_BDT->GetBinError(jj+1);
        }
        totalerror = sqrt(totalerror);
        S_sig_train_BDT->SetBinContent(ii+1,totalweight);
        S_sig_train_BDT->SetBinError(ii+1,totalerror);
    }
    TH1D *E_sig_train_BDT = (TH1D *)S_sig_train_BDT->Clone("E_sig_train_BDT");
    TH1D *E_sig_test_BDT = (TH1D *)S_sig_test_BDT->Clone("E_sig_test_BDT");

    E_sig_train_BDT->Scale(1/S_sig_train_BDT->GetBinContent(1));
    E_sig_test_BDT->Scale(1/S_sig_test_BDT->GetBinContent(1));


    writefile->cd();
    writefile->Write();
    writefile->Close();
}
