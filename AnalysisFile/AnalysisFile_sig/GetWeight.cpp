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

int main(int argc, char**argv){
    ifstream infile;
    infile.open(argv[1]);
    string readfile;
    infile>>readfile;
    const char* C_filename = readfile.c_str();
    TFile *TF = TFile::Open(C_filename);
    TTree *tree = NULL;
    if(!TF)
        TF = new TFile(C_filename);
    tree = (TTree *)TF->Get("Runs");
    if(tree == NULL) return 0;

    Long64_t genEventCount = 0;
    Double_t genEventSumw = 0;
    Double_t genEventSumw2 = 0;
    Long64_t totalEventCount = 0;
    Double_t totalEventSumw = 0;
    Double_t totalEventSumw2 = 0;


    tree->SetBranchAddress("genEventCount",&genEventCount);
    tree->SetBranchAddress("genEventSumw",&genEventSumw);
    tree->SetBranchAddress("genEventSumw2",&genEventSumw2);


    Int_t Nentries = tree->GetEntries();

    for(int ii = 0 ; ii < Nentries ; ii++){
        tree->GetEntry(ii,0);
        totalEventCount += genEventCount;
        totalEventSumw  += genEventSumw;

        totalEventSumw2 += genEventSumw2;
        cout<<genEventCount<<"   "<<genEventSumw<<"   "<<genEventSumw2<<endl;
        
    }
    cout<<"totalEventCount   "<<totalEventCount<<endl;
    cout<<"totalEventSumw   "<<totalEventSumw<<endl;
    cout<<"totalEventSumw2   "<<totalEventSumw2<<endl;
    ofstream outfile;
    outfile.open("xsecinformation.txt",ios::out);
    outfile<<"totalEventCount   "<<totalEventCount<<endl;
    outfile<<"totalEventSumw   "<<totalEventSumw<<endl;
    outfile<<"totalEventSumw2   "<<totalEventSumw2<<endl;
    outfile.close();
}
