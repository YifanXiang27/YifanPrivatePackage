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
using namespace std;

void GetFromTMVA(){
    TFile *rfile = new TFile("TMVA.root");

    TDirectoryFile *TDdataset = (TDirectoryFile *)rfile->Get("dataset");
    TDirectoryFile *TDMethod_BDT = (TDirectoryFile *)TDdataset->Get("Method_BDT");
    TDirectoryFile *TDBDT = (TDirectoryFile *)TDMethod_BDT->Get("BDT");

    TFile *file = new TFile("TMVA_read.root","RECREATE");

    TH1D *MVA_BDT_S = (TH1D *)TDBDT->Get("MVA_BDT_S");
    TH1D *MVA_BDT_B = (TH1D *)TDBDT->Get("MVA_BDT_B");
    TH1D *MVA_BDT_S_high = (TH1D *)TDBDT->Get("MVA_BDT_S_high");
    TH1D *MVA_BDT_B_high = (TH1D *)TDBDT->Get("MVA_BDT_B_high");
    TH1D *MVA_BDT_effS = (TH1D *)TDBDT->Get("MVA_BDT_effS");
    TH1D *MVA_BDT_effB = (TH1D *)TDBDT->Get("MVA_BDT_effB");
    TH1D *MVA_BDT_effBvsS = (TH1D *)TDBDT->Get("MVA_BDT_effBvsS");
    TH1D *MVA_BDT_rejBvsS = (TH1D *)TDBDT->Get("MVA_BDT_rejBvsS");
    TH1D *MVA_BDT_invBeffvsSeff = (TH1D *)TDBDT->Get("MVA_BDT_invBeffvsSeff");
    TH1D *MVA_BDT_Train_S = (TH1D *)TDBDT->Get("MVA_BDT_Train_S");
    TH1D *MVA_BDT_Train_B = (TH1D *)TDBDT->Get("MVA_BDT_Train_B");
    TH1D *MVA_BDT_trainingEffS = (TH1D *)TDBDT->Get("MVA_BDT_trainingEffS");
    TH1D *MVA_BDT_trainingEffB = (TH1D *)TDBDT->Get("MVA_BDT_trainingEffB");

    TH1D *P_MVA_BDT_S = (TH1D *)MVA_BDT_S->Clone("P_MVA_BDT_S");
    TH1D *P_MVA_BDT_B = (TH1D *)MVA_BDT_B->Clone("P_MVA_BDT_B");
    TH1D *P_MVA_BDT_S_high = (TH1D *)MVA_BDT_S_high->Clone("P_MVA_BDT_S_high");
    TH1D *P_MVA_BDT_B_high = (TH1D *)MVA_BDT_B_high->Clone("P_MVA_BDT_B_high");
    TH1D *P_MVA_BDT_effS = (TH1D *)MVA_BDT_effS->Clone("P_MVA_BDT_effS");
    TH1D *P_MVA_BDT_effB = (TH1D *)MVA_BDT_effB->Clone("P_MVA_BDT_effB");
    TH1D *P_MVA_BDT_effBvsS = (TH1D *)MVA_BDT_effBvsS->Clone("P_MVA_BDT_effBvsS");
    TH1D *P_MVA_BDT_rejBvsS = (TH1D *)MVA_BDT_rejBvsS->Clone("P_MVA_BDT_rejBvsS");
    TH1D *P_MVA_BDT_invBeffvsSeff = (TH1D *)MVA_BDT_invBeffvsSeff->Clone("P_MVA_BDT_invBeffvsSeff");
    TH1D *P_MVA_BDT_Train_S = (TH1D *)MVA_BDT_Train_S->Clone("P_MVA_BDT_Train_S");
    TH1D *P_MVA_BDT_Train_B = (TH1D *)MVA_BDT_Train_B->Clone("P_MVA_BDT_Train_B");
    TH1D *P_MVA_BDT_trainingEffS = (TH1D *)MVA_BDT_trainingEffS->Clone("P_MVA_BDT_trainingEffS");
    TH1D *P_MVA_BDT_trainingEffB = (TH1D *)MVA_BDT_trainingEffB->Clone("P_MVA_BDT_trainingEffB");

    //Calculation over the plots
    double integral;
    TH1D *P_MVA_BDT_cutS = (TH1D *)MVA_BDT_effS->Clone("P_MVA_BDT_cutS");
    P_MVA_BDT_cutS->Scale(6.67774);
    TH1D *P_MVA_BDT_cutB = (TH1D *)MVA_BDT_effB->Clone("P_MVA_BDT_cutB");
    P_MVA_BDT_cutB->Scale(228.965);
    TH1D *P_MVA_BDT_S_scale = (TH1D *)MVA_BDT_S->Clone("P_MVA_BDT_S_scale");
    integral = P_MVA_BDT_S_scale->Integral();
    P_MVA_BDT_S_scale->Scale(6.67774 / integral);
    TH1D *P_MVA_BDT_B_scale = (TH1D *)MVA_BDT_B->Clone("P_MVA_BDT_B_scale");
    integral = P_MVA_BDT_B_scale->Integral();
    P_MVA_BDT_B_scale->Scale(228.965 / integral);
    


    file->cd();
    file->Write();
    file->Close();
}
