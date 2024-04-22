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

int main(int argc, char** argv){

    TFile *file = TFile::Open(argv[1]);

    TTree *fChain = (TTree *)file->Get("totalEvents");
    TTree *tree;
    tree = fChain;

    ofstream outfile;
    outfile.open("outputtable.txt",ios::out);
    ofstream outfileread;
    outfileread.open("readdata.txt",ios::out);


    //TMVA::Reader *reader = new TMVA::Reader("!Color:!Silent");

    double weighted_number = 0;
    double weighted_error = 0;
    double weighted_number_A = 0;
    double weighted_error_A = 0;
    double weighted_number_B = 0;
    double weighted_error_B = 0;
    double weighted_number_C = 0;
    double weighted_error_C = 0;
    double weighted_number_D = 0;
    double weighted_error_D = 0;

    TFile *wfile = new TFile(argv[2],"RECREATE");
    //make 2D histogram for drawing
    TTree *totalTree;

    totalTree = new TTree("totalEvents","yifan events");








    TH2D *P_Hmass_BDT;
    TH2D *P_Hscore_BDT;
    TH2D *P_Wmass_BDT;
    TH2D *P_Wscore_BDT;
    TH2D *P_ST_BDT;
    TH2D *P_Mlb_BDT;

    //make 2D histogram for summing
    TH2D *P_Hmass_BDT_sum;
    TH2D *P_Hscore_BDT_sum;
    TH2D *P_Wmass_BDT_sum;
    TH2D *P_Wscore_BDT_sum;
    TH2D *P_ST_BDT_sum;
    TH2D *P_Mlb_BDT_sum;

    //make 2D histogram for Lsig
    TH2D *P_Hmass_BDT_Lsig;
    TH2D *P_Hscore_BDT_Lsig;
    TH2D *P_Wmass_BDT_Lsig;
    TH2D *P_Wscore_BDT_Lsig;
    TH2D *P_ST_BDT_Lsig;
    TH2D *P_Mlb_BDT_Lsig;

    //define all the 2D histogram for drawing
    P_Hmass_BDT = new TH2D("P_Hmass_BDT","P_Hmass_BDT",16,80,160,40,0.4,0.8);
    P_Hscore_BDT = new TH2D("P_Hscore_BDT","P_Hscore_BDT",20,0.5,1,40,0.4,0.8);
    P_Wmass_BDT = new TH2D("P_Wmass_BDT","P_Wmass_BDT",32,0,160,40,0.4,0.8);
    P_Wscore_BDT = new TH2D("P_Wscore_BDT","P_Wscore_BDT",20,0.5,1,40,0.4,0.8);
    P_ST_BDT = new TH2D("P_ST_BDT","P_ST_BDT",10,1000,1500,40,0.4,0.8);
    P_Mlb_BDT = new TH2D("P_Mlb_BDT","P_Mlb_BDT",30,0,300,40,0.4,0.8);

    //define all the 2D histogram for summing
    P_Hmass_BDT_sum = new TH2D("P_Hmass_BDT_sum","P_Hmass_BDT_sum",16,80,160,40,0.4,0.8);
    P_Hscore_BDT_sum = new TH2D("P_Hscore_BDT_sum","P_Hscore_BDT_sum",20,0.5,1,40,0.4,0.8);
    P_Wmass_BDT_sum = new TH2D("P_Wmass_BDT_sum","P_Wmass_BDT_sum",32,0,160,40,0.4,0.8);
    P_Wscore_BDT_sum = new TH2D("P_Wscore_BDT_sum","P_Wscore_BDT_sum",20,0.5,1,40,0.4,0.8);
    P_ST_BDT_sum = new TH2D("P_ST_BDT_sum","P_ST_BDT_sum",10,1000,1500,40,0.4,0.8);
    P_Mlb_BDT_sum = new TH2D("P_Mlb_BDT_sum","P_Mlb_BDT_sum",30,0,300,40,0.4,0.8);



    P_Hmass_BDT->Sumw2();
    P_Hscore_BDT->Sumw2();
    P_Wmass_BDT->Sumw2();
    P_Wscore_BDT->Sumw2();
    P_ST_BDT->Sumw2();
    P_Mlb_BDT->Sumw2();

    P_Hmass_BDT_sum->Sumw2();
    P_Hscore_BDT_sum->Sumw2();
    P_Wmass_BDT_sum->Sumw2();
    P_Wscore_BDT_sum->Sumw2();
    P_ST_BDT_sum->Sumw2();
    P_Mlb_BDT_sum->Sumw2();



    Float_t Hbbscore;
    Float_t Hbbmass;
    Float_t Hbbmsoftdrop;
    Float_t Hbbtau21;
    Float_t Hbbtau32;
    Float_t Hbbtau1;
    Float_t Hbbtau2;
    Float_t Hbbtau3;
    Float_t HbbPt;

    Float_t Wjetscore;
    Float_t Wjetmass;
    Float_t Wjetmsoftdrop;
    Float_t Wjettau21;
    Float_t Wjettau32;
    Float_t Wjettau1;
    Float_t Wjettau2;
    Float_t Wjettau3;
    Float_t WjetPt;

    Float_t Zjetscore;
    Float_t Zjetmass;
    Float_t Zjetmsoftdrop;
    Float_t Zjettau21;
    Float_t Zjettau32;
    Float_t Zjettau1;
    Float_t Zjettau2;
    Float_t Zjettau3;
    Float_t ZjetPt;

    Float_t Mlbminloose;

    Float_t secfatjetscore;
    Float_t secfatjetmass;
    Float_t secfatjetmsoftdrop;
    Float_t secfatjettau21;
    Float_t secfatjettau32;
    Float_t secfatjettau1;
    Float_t secfatjettau2;
    Float_t secfatjettau3;
    Float_t secfatjetPt;

    Float_t leptonpt;
    Float_t VBSMjj;
    Float_t VBSdetajj;
    Float_t VBSdphijj;
    Float_t VBSPtjj;
    Float_t VBSjet1pt;
    Float_t VBSjet1eta;
    Float_t VBSjet1phi;
    Float_t VBSjet2pt;
    Float_t VBSjet2eta;
    Float_t VBSjet2phi;
    Float_t VBSBDTscore;
    Float_t trans_E;
    Float_t MET;
    Float_t weight;

    Float_t divide;




    totalTree->Branch("Hbbscore",&Hbbscore,"&Hbbscore/F");
    totalTree->Branch("Hbbmass",&Hbbmass,"&Hbbmass/F");
    totalTree->Branch("Hbbmsoftdrop",&Hbbmsoftdrop,"&Hbbmsoftdrop/F");
    totalTree->Branch("Hbbtau21",&Hbbtau21,"&Hbbtau21/F");
    totalTree->Branch("Hbbtau32",&Hbbtau32,"&Hbbtau32/F");
    totalTree->Branch("Hbbtau1",&Hbbtau1,"&Hbbtau1/F");
    totalTree->Branch("Hbbtau2",&Hbbtau2,"&Hbbtau2/F");
    totalTree->Branch("Hbbtau3",&Hbbtau3,"&Hbbtau3/F");
    totalTree->Branch("HbbPt",&HbbPt,"&HbbPt/F");

    totalTree->Branch("Wjetscore",&Wjetscore,"&Wjetscore/F");
    totalTree->Branch("Wjetmass",&Wjetmass,"&Wjetmass/F");
    totalTree->Branch("Wjetmsoftdrop",&Wjetmsoftdrop,"&Wjetmsoftdrop/F");
    totalTree->Branch("Wjettau21",&Wjettau21,"&Wjettau21/F");
    totalTree->Branch("Wjettau32",&Wjettau32,"&Wjettau32/F");
    totalTree->Branch("Wjettau1",&Wjettau1,"&Wjettau1/F");
    totalTree->Branch("Wjettau2",&Wjettau2,"&Wjettau2/F");
    totalTree->Branch("Wjettau3",&Wjettau3,"&Wjettau3/F");
    totalTree->Branch("WjetPt",&WjetPt,"&WjetPt/F");

    totalTree->Branch("Zjetscore",&Zjetscore,"&Zjetscore/F");
    totalTree->Branch("Zjetmass",&Zjetmass,"&Zjetmass/F");
    totalTree->Branch("Zjetmsoftdrop",&Zjetmsoftdrop,"&Zjetmsoftdrop/F");
    totalTree->Branch("Zjettau21",&Zjettau21,"&Zjettau21/F");
    totalTree->Branch("Zjettau32",&Zjettau32,"&Zjettau32/F");
    totalTree->Branch("Zjettau1",&Zjettau1,"&Zjettau1/F");
    totalTree->Branch("Zjettau2",&Zjettau2,"&Zjettau2/F");
    totalTree->Branch("Zjettau3",&Zjettau3,"&Zjettau3/F");
    totalTree->Branch("ZjetPt",&ZjetPt,"&ZjetPt/F");

    totalTree->Branch("secfatjetscore",&secfatjetscore,"&secfatjetscore/F");
    totalTree->Branch("secfatjetmass",&secfatjetmass,"&secfatjetmass/F");
    totalTree->Branch("secfatjetmsoftdrop",&secfatjetmsoftdrop,"&secfatjetmsoftdrop/F");
    totalTree->Branch("secfatjettau21",&secfatjettau21,"&secfatjettau21/F");
    totalTree->Branch("secfatjettau32",&secfatjettau32,"&secfatjettau32/F");
    totalTree->Branch("secfatjettau1",&secfatjettau1,"&secfatjettau1/F");
    totalTree->Branch("secfatjettau2",&secfatjettau2,"&secfatjettau2/F");
    totalTree->Branch("secfatjettau3",&secfatjettau3,"&secfatjettau3/F");
    totalTree->Branch("secfatjetPt",&secfatjetPt,"&secfatjetPt/F");

    totalTree->Branch("leptonpt",&leptonpt,"&leptonpt/F");
    totalTree->Branch("VBSMjj",&VBSMjj,"&VBSMjj/F");
    totalTree->Branch("VBSdetajj",&VBSdetajj,"&VBSdetajj/F");
    totalTree->Branch("VBSdphijj",&VBSdphijj,"&VBSdphijj/F");
    totalTree->Branch("VBSPtjj",&VBSPtjj,"&VBSPtjj/F");
    totalTree->Branch("VBSjet1pt",&VBSjet1pt,"&VBSjet1pt/F");
    totalTree->Branch("VBSjet1eta",&VBSjet1eta,"&VBSjet1eta/F");
    totalTree->Branch("VBSjet1phi",&VBSjet1phi,"&VBSjet1phi/F");
    totalTree->Branch("VBSjet2pt",&VBSjet2pt,"&VBSjet2pt/F");
    totalTree->Branch("VBSjet2eta",&VBSjet2eta,"&VBSjet2eta/F");
    totalTree->Branch("VBSjet2phi",&VBSjet2phi,"&VBSjet2phi/F");
    totalTree->Branch("VBSBDTscore",&VBSBDTscore,"&VBSBDTscore/F");
    totalTree->Branch("Mlbminloose",&Mlbminloose,"&Mlbminloose/F");
    totalTree->Branch("trans_E",&trans_E,"&trans_E/F");
    totalTree->Branch("MET",&MET,"&MET/F");
    totalTree->Branch("weight",&weight,"&weight/F");






    tree->SetBranchAddress("Hbbscore",&Hbbscore);
    tree->SetBranchAddress("Hbbmass",&Hbbmass);
    tree->SetBranchAddress("Hbbmsoftdrop",&Hbbmsoftdrop);
    tree->SetBranchAddress("Hbbtau21",&Hbbtau21);
    tree->SetBranchAddress("Hbbtau32",&Hbbtau32);
    tree->SetBranchAddress("Hbbtau1",&Hbbtau1);
    tree->SetBranchAddress("Hbbtau2",&Hbbtau2);
    tree->SetBranchAddress("Hbbtau3",&Hbbtau3);
    tree->SetBranchAddress("HbbPt",&HbbPt);

    tree->SetBranchAddress("Wjetscore",&Wjetscore);
    tree->SetBranchAddress("Wjetmass",&Wjetmass);
    tree->SetBranchAddress("Wjetmsoftdrop",&Wjetmsoftdrop);
    tree->SetBranchAddress("Wjettau21",&Wjettau21);
    tree->SetBranchAddress("Wjettau32",&Wjettau32);
    tree->SetBranchAddress("Wjettau1",&Wjettau1);
    tree->SetBranchAddress("Wjettau2",&Wjettau2);
    tree->SetBranchAddress("Wjettau3",&Wjettau3);
    tree->SetBranchAddress("WjetPt",&WjetPt);

    tree->SetBranchAddress("Zjetscore",&Zjetscore);
    tree->SetBranchAddress("Zjetmass",&Zjetmass);
    tree->SetBranchAddress("Zjetmsoftdrop",&Zjetmsoftdrop);
    tree->SetBranchAddress("Zjettau21",&Zjettau21);
    tree->SetBranchAddress("Zjettau32",&Zjettau32);
    tree->SetBranchAddress("Zjettau1",&Zjettau1);
    tree->SetBranchAddress("Zjettau2",&Zjettau2);
    tree->SetBranchAddress("Zjettau3",&Zjettau3);
    tree->SetBranchAddress("ZjetPt",&ZjetPt);

    tree->SetBranchAddress("Mlbminloose",&Mlbminloose);
    tree->SetBranchAddress("secfatjetscore",&secfatjetscore);
    tree->SetBranchAddress("secfatjetmass",&secfatjetmass);
    tree->SetBranchAddress("secfatjetmsoftdrop",&secfatjetmsoftdrop);
    tree->SetBranchAddress("secfatjettau21",&secfatjettau21);
    tree->SetBranchAddress("secfatjettau32",&secfatjettau32);
    tree->SetBranchAddress("secfatjettau1",&secfatjettau1);
    tree->SetBranchAddress("secfatjettau2",&secfatjettau2);
    tree->SetBranchAddress("secfatjettau3",&secfatjettau3);
    tree->SetBranchAddress("secfatjetPt",&secfatjetPt);

    tree->SetBranchAddress("leptonpt",&leptonpt);
    tree->SetBranchAddress("VBSMjj",&VBSMjj);
    tree->SetBranchAddress("VBSdetajj",&VBSdetajj);
    tree->SetBranchAddress("VBSdphijj",&VBSdphijj);
    tree->SetBranchAddress("VBSPtjj",&VBSPtjj);
    tree->SetBranchAddress("VBSjet1pt",&VBSjet1pt);
    tree->SetBranchAddress("VBSjet1eta",&VBSjet1eta);
    tree->SetBranchAddress("VBSjet1phi",&VBSjet1phi);
    tree->SetBranchAddress("VBSjet2pt",&VBSjet2pt);
    tree->SetBranchAddress("VBSjet2eta",&VBSjet2eta);
    tree->SetBranchAddress("VBSjet2phi",&VBSjet2phi);
    tree->SetBranchAddress("trans_E",&trans_E);
    tree->SetBranchAddress("MET",&MET);
    tree->SetBranchAddress("weight",&weight);
    tree->SetBranchAddress("divide",&divide);
    int Nentries = tree->GetEntries();


    TMVA::Reader *readerAB = new TMVA::Reader("!Color:!Silent");
    readerAB->AddVariable("VBSjet1pt",&VBSjet1pt);
    readerAB->AddVariable("VBSjet1eta",&VBSjet1eta);
    readerAB->AddVariable("VBSjet1phi",&VBSjet1phi);
    readerAB->AddVariable("VBSjet2pt",&VBSjet2pt);
    readerAB->AddVariable("VBSjet2eta",&VBSjet2eta);
    readerAB->AddVariable("VBSjet2phi",&VBSjet2phi);
    readerAB->AddVariable("VBSMjj",&VBSMjj);
    readerAB->AddVariable("VBSdetajj",&VBSdetajj);
    readerAB->BookMVA("BDT","./dataset_AB/weights/TMVAClassification_BDT.weights.xml");

    TMVA::Reader *readerBA = new TMVA::Reader("!Color:!Silent");
    readerBA->AddVariable("VBSjet1pt",&VBSjet1pt);
    readerBA->AddVariable("VBSjet1eta",&VBSjet1eta);
    readerBA->AddVariable("VBSjet1phi",&VBSjet1phi);
    readerBA->AddVariable("VBSjet2pt",&VBSjet2pt);
    readerBA->AddVariable("VBSjet2eta",&VBSjet2eta);
    readerBA->AddVariable("VBSjet2phi",&VBSjet2phi);
    readerBA->AddVariable("VBSMjj",&VBSMjj);
    readerBA->AddVariable("VBSdetajj",&VBSdetajj);
    readerBA->BookMVA("BDT","./dataset_BA/weights/TMVAClassification_BDT.weights.xml");
    //readerBA->BookMVA("BDT","./dataset_AB/weights/TMVAClassification_BDT.weights.xml");


    //Double_t mvaValue = readerAB->EvaluateMVA("BDT");

    for(int ii = 0 ; ii < Nentries ; ii ++){
        tree->GetEntry(ii,0);

        if(trans_E < 1000 ) continue;
        //if(trans_E > 3000 ) continue;

        //get FillHmass from Hbbmass, range 80 to 160
        double FillHmass;
        if(Hbbmass > 160) FillHmass = 159.999;
        else if( Hbbmass<80 ) FillHmass = 80.001;
        else FillHmass = Hbbmass;

        //get FillHscore from Hbbscore, range 0.5 to 1
        double FillHscore;
        if(Hbbscore > 1) FillHscore = 0.999;
        else if( Hbbscore<0.5 ) FillHscore = 0.501;
        else FillHscore = Hbbscore;

        //get FillWmass from Wjetmass, range 0 to 160
        double FillWmass;
        if(Wjetmass > 160) FillWmass = 159.999;
        else if( Wjetmass<0 ) FillWmass = 0.001;
        else FillWmass = Wjetmass;

        //get FillWscore from Wjetscore, range 0.5 to 1
        double FillWscore;
        if(Wjetscore > 1) FillWscore = 0.999;
        else if( Wjetscore<0.5 ) FillWscore = 0.501;
        else FillWscore = Wjetscore;

        //get FillMlb from Mlbminloose, range 0 to 300
        double FillMlb;
        if(Mlbminloose > 300) FillMlb = 299.999;
        else if( Mlbminloose<0 ) FillMlb = 0.001;
        else FillMlb = Mlbminloose;

        //get FillST from trans_E, range 1000 to 1500
        double FillST;
        if(trans_E > 1500) FillST = 1499.999;
        else if(trans_E < 1000) FillST = 1000.001;
        else FillST = trans_E;

        Double_t mvaValue;
        if(divide <= 0.5)
            mvaValue = readerBA->EvaluateMVA("BDT");
        else
            mvaValue = readerAB->EvaluateMVA("BDT");

        VBSBDTscore = mvaValue;




        weighted_number += weight;
        weighted_error += (weight * weight);

        double mvacutvalue;
        if(divide <= 0.5)
            mvacutvalue = .56;//0.56;//BA
        else
            mvacutvalue = .56;//0.792;//AB

        //get FillBDT from mvaValue, range 0.4 to 0.8
        double FillBDT;
        if(mvaValue > 0.8) FillBDT = 0.799;
        else if( mvaValue<0.4 ) FillBDT = 0.401;
        else FillBDT = mvaValue;

        //Fill all 2D Histogram
        P_Hmass_BDT->Fill(FillHmass,FillBDT,weight);
        P_Hscore_BDT->Fill(FillHscore,FillBDT,weight);
        P_Wmass_BDT->Fill(FillWmass,FillBDT,weight);
        P_Wscore_BDT->Fill(FillWscore,FillBDT,weight);
        P_Mlb_BDT->Fill(FillMlb,FillBDT,weight);
        P_ST_BDT->Fill(FillST,FillBDT,weight);

        totalTree->Fill();

        if(VBSMjj > 750 &&  fabs(VBSdetajj ) > 3){
            if(mvaValue < mvacutvalue){
                weighted_number_B += weight;
                weighted_error_B += (weight * weight);   
            }else{
                weighted_number_A += weight;
                weighted_error_A += (weight * weight);   
            }
        }else{
            if(mvaValue < mvacutvalue){
                weighted_number_D += weight;
                weighted_error_D += (weight * weight);   
            }else{
                weighted_number_C += weight;
                weighted_error_C += (weight * weight);   
            }
        }
    }

    //calculate sum plot for P_Hmass_BDT
    for(int cir1 = 0 ; cir1 < P_Hmass_BDT->GetNbinsX() ; cir1 ++){
        for(int cir2 = 0 ; cir2 < P_Hmass_BDT->GetNbinsY() ; cir2 ++){
            double sum = 0;
            double sum_err = 0;
            for(int icir1 = cir1 ; icir1 < P_Hmass_BDT->GetNbinsX() ; icir1 ++){
                for(int icir2 = cir2 ; icir2 < P_Hmass_BDT->GetNbinsY() ; icir2 ++){
                    sum += P_Hmass_BDT->GetBinContent(icir1+1,icir2+1);
                    sum_err += P_Hmass_BDT->GetBinError(icir1+1,icir2+1) * P_Hmass_BDT->GetBinError(icir1+1,icir2+1);
                }
            }
            P_Hmass_BDT_sum->SetBinContent(cir1+1,cir2+1,sum);
            P_Hmass_BDT_sum->SetBinError(cir1+1,cir2+1,sqrt(sum_err));
        }
    }

    //calculate sum plot for P_Hscore_BDT
    for(int cir1 = 0 ; cir1 < P_Hscore_BDT->GetNbinsX() ; cir1 ++){
        for(int cir2 = 0 ; cir2 < P_Hscore_BDT->GetNbinsY() ; cir2 ++){
            double sum = 0;
            double sum_err = 0;
            for(int icir1 = cir1 ; icir1 < P_Hscore_BDT->GetNbinsX() ; icir1 ++){
                for(int icir2 = cir2 ; icir2 < P_Hscore_BDT->GetNbinsY() ; icir2 ++){
                    sum += P_Hscore_BDT->GetBinContent(icir1+1,icir2+1);
                    sum_err += P_Hscore_BDT->GetBinError(icir1+1,icir2+1) * P_Hscore_BDT->GetBinError(icir1+1,icir2+1);
                }
            }
            P_Hscore_BDT_sum->SetBinContent(cir1+1,cir2+1,sum);
            P_Hscore_BDT_sum->SetBinError(cir1+1,cir2+1,sqrt(sum_err));
        }
    }

    //calculate sum plot for P_Wmass_BDT
    for(int cir1 = 0 ; cir1 < P_Wmass_BDT->GetNbinsX() ; cir1 ++){
        for(int cir2 = 0 ; cir2 < P_Wmass_BDT->GetNbinsY() ; cir2 ++){
            double sum = 0;
            double sum_err = 0;
            for(int icir1 = cir1 ; icir1 < P_Wmass_BDT->GetNbinsX() ; icir1 ++){
                for(int icir2 = cir2 ; icir2 < P_Wmass_BDT->GetNbinsY() ; icir2 ++){
                    sum += P_Wmass_BDT->GetBinContent(icir1+1,icir2+1);
                    sum_err += P_Wmass_BDT->GetBinError(icir1+1,icir2+1) * P_Wmass_BDT->GetBinError(icir1+1,icir2+1);
                }
            }
            P_Wmass_BDT_sum->SetBinContent(cir1+1,cir2+1,sum);
            P_Wmass_BDT_sum->SetBinError(cir1+1,cir2+1,sqrt(sum_err));
        }
    }

    //calculate sum plot for P_Wscore_BDT
    for(int cir1 = 0 ; cir1 < P_Wscore_BDT->GetNbinsX() ; cir1 ++){
        for(int cir2 = 0 ; cir2 < P_Wscore_BDT->GetNbinsY() ; cir2 ++){
            double sum = 0;
            double sum_err = 0;
            for(int icir1 = cir1 ; icir1 < P_Wscore_BDT->GetNbinsX() ; icir1 ++){
                for(int icir2 = cir2 ; icir2 < P_Wscore_BDT->GetNbinsY() ; icir2 ++){
                    sum += P_Wscore_BDT->GetBinContent(icir1+1,icir2+1);
                    sum_err += P_Wscore_BDT->GetBinError(icir1+1,icir2+1) * P_Wscore_BDT->GetBinError(icir1+1,icir2+1);
                }
            }
            P_Wscore_BDT_sum->SetBinContent(cir1+1,cir2+1,sum);
            P_Wscore_BDT_sum->SetBinError(cir1+1,cir2+1,sqrt(sum_err));
        }
    }

    //calculate sum plot for P_ST_BDT
    for(int cir1 = 0 ; cir1 < P_ST_BDT->GetNbinsX() ; cir1 ++){
        for(int cir2 = 0 ; cir2 < P_ST_BDT->GetNbinsY() ; cir2 ++){
            double sum = 0;
            double sum_err = 0;
            for(int icir1 = cir1 ; icir1 < P_ST_BDT->GetNbinsX() ; icir1 ++){
                for(int icir2 = cir2 ; icir2 < P_ST_BDT->GetNbinsY() ; icir2 ++){
                    sum += P_ST_BDT->GetBinContent(icir1+1,icir2+1);
                    sum_err += P_ST_BDT->GetBinError(icir1+1,icir2+1) * P_ST_BDT->GetBinError(icir1+1,icir2+1);
                }
            }
            P_ST_BDT_sum->SetBinContent(cir1+1,cir2+1,sum);
            P_ST_BDT_sum->SetBinError(cir1+1,cir2+1,sqrt(sum_err));
        }
    }

    //calculate sum plot for P_Mlb_BDT
    for(int cir1 = 0 ; cir1 < P_Mlb_BDT->GetNbinsX() ; cir1 ++){
        for(int cir2 = 0 ; cir2 < P_Mlb_BDT->GetNbinsY() ; cir2 ++){
            double sum = 0;
            double sum_err = 0;
            for(int icir1 = cir1 ; icir1 < P_Mlb_BDT->GetNbinsX() ; icir1 ++){
                for(int icir2 = cir2 ; icir2 < P_Mlb_BDT->GetNbinsY() ; icir2 ++){
                    sum += P_Mlb_BDT->GetBinContent(icir1+1,icir2+1);
                    sum_err += P_Mlb_BDT->GetBinError(icir1+1,icir2+1) * P_Mlb_BDT->GetBinError(icir1+1,icir2+1);
                }
            }
            P_Mlb_BDT_sum->SetBinContent(cir1+1,cir2+1,sum);
            P_Mlb_BDT_sum->SetBinError(cir1+1,cir2+1,sqrt(sum_err));
        }
    }


    cout<<"total :       "<<weighted_number<<"  "<<sqrt(weighted_error)<<endl;
    double R_DB = sqrt(weighted_error_B) / weighted_number_B;
    double R_DC = sqrt(weighted_error_C) / weighted_number_C;
    double R_DD = sqrt(weighted_error_D) / weighted_number_D;
    double R_DA = sqrt(R_DB * R_DB + R_DC * R_DC + R_DD * R_DD * 4);
    double Pre_A = weighted_number_B * weighted_number_C  / weighted_number_D;
    double A_DA = R_DA * Pre_A;
    cout<<"Difference_RegionA   "<<(Pre_A-weighted_number_A) / weighted_number_A<<"   "<<sqrt(R_DA * R_DA + weighted_error_A / (weighted_number_A * weighted_number_A))  * (Pre_A / weighted_number_A) <<endl;
    cout<<"Predicted_RegionA    "<<Pre_A<<"   "<<A_DA<<endl;
    cout<<"RegionA              "<<weighted_number_A<<"  "<<sqrt(weighted_error_A)<<endl;
    cout<<"RegionB              "<<weighted_number_B<<"  "<<sqrt(weighted_error_B)<<endl;
    cout<<"RegionC              "<<weighted_number_C<<"  "<<sqrt(weighted_error_C)<<endl;
    cout<<"RegionD              "<<weighted_number_D<<"  "<<sqrt(weighted_error_D)<<endl;



    outfile<<setprecision(3)<<(Pre_A-weighted_number_A) / weighted_number_A<<" +- "<<sqrt(R_DA * R_DA + weighted_error_A / (weighted_number_A * weighted_number_A))  * (Pre_A / weighted_number_A) <<endl;
    outfile<<Pre_A<<" +- "<<A_DA<<endl;
    outfile<<weighted_number_A<<" +- "<<sqrt(weighted_error_A)<<endl;
    outfile<<weighted_number_B<<" +- "<<sqrt(weighted_error_B)<<endl;
    outfile<<weighted_number_C<<" +- "<<sqrt(weighted_error_C)<<endl;
    outfile<<weighted_number_D<<" +- "<<sqrt(weighted_error_D)<<endl;

    outfileread<<Pre_A<<endl;

    outfile.close();
    outfileread.close();
    wfile->cd();
    wfile->Write();
    wfile->Close();
    

}
