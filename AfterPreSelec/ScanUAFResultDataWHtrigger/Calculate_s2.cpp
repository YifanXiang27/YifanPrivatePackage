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
//void Calculate(){
int main(int argc,char ** argv){

    ifstream infile;
    infile.open(argv[1]);
    string read;
    TFile *writefile = new TFile(argv[2],"RECREATE");
    TTree *totaltree;
    TTree *traintree;
    TTree *testtree;
    
    TRandom3 *myrandom;
    //myrandom = new TRandom3(142857);
    myrandom = new TRandom3(12);

    string InputYear(argv[3]);





    Float_t  Hbbscore;
    Float_t  Hbbmass;
    Float_t  Hbbmsoftdrop;
    Float_t  Hbbtau21;
    Float_t  Hbbtau32;
    Float_t  Hbbtau1;
    Float_t  Hbbtau2;
    Float_t  Hbbtau3;
    Float_t  HbbPt;

    Float_t  Wjetscore;
    Float_t  Wjetmass;
    Float_t  Wjetmsoftdrop;
    Float_t  Wjettau21;
    Float_t  Wjettau32;
    Float_t  Wjettau1;
    Float_t  Wjettau2;
    Float_t  Wjettau3;
    Float_t  WjetPt;

    Float_t  Zjetscore;
    Float_t  Zjetmass;
    Float_t  Zjetmsoftdrop;
    Float_t  Zjettau21;
    Float_t  Zjettau32;
    Float_t  Zjettau1;
    Float_t  Zjettau2;
    Float_t  Zjettau3;
    Float_t  ZjetPt;

    Float_t  secfatjetscore;
    Float_t  secfatjetmass;
    Float_t  secfatjetmsoftdrop;
    Float_t  secfatjettau21;
    Float_t  secfatjettau32;
    Float_t  secfatjettau1;
    Float_t  secfatjettau2;
    Float_t  secfatjettau3;
    Float_t  secfatjetPt;
    Float_t  n_loose_ak4jet;
    Float_t  n_medium_ak4jet;
    Float_t  leptonpt;
    Float_t  VBSMjj;
    Float_t  VBSdetajj;
    Float_t  VBSdphijj;
    Float_t  VBSPtjj;
    Float_t  Mlbmin;
    Float_t  Mlbminloose;
    Float_t  Mlbminmedium;
    Float_t  trans_E;
    Float_t  MET;
    Float_t  weight;
    Float_t  fabsweight;
    Float_t  divide;

    Int_t    SampleTag;
    stringstream SSSampleTag(argv[4]);
    SSSampleTag>>SampleTag;

    cout<<SampleTag<<endl;


    totaltree = new TTree("totalEvents","yifan events");



    totaltree->Branch("Hbbscore",&Hbbscore,"&Hbbscore/F");
    totaltree->Branch("Hbbmass",&Hbbmass,"&Hbbmass/F");
    totaltree->Branch("Hbbmsoftdrop",&Hbbmsoftdrop,"&Hbbmsoftdrop/F");
    totaltree->Branch("Hbbtau21",&Hbbtau21,"&Hbbtau21/F");
    totaltree->Branch("Hbbtau32",&Hbbtau32,"&Hbbtau32/F");
    totaltree->Branch("Hbbtau1",&Hbbtau1,"&Hbbtau1/F");
    totaltree->Branch("Hbbtau2",&Hbbtau2,"&Hbbtau2/F");
    totaltree->Branch("Hbbtau3",&Hbbtau3,"&Hbbtau3/F");
    totaltree->Branch("HbbPt",&HbbPt,"&HbbPt/F");

    totaltree->Branch("Wjetscore",&Wjetscore,"&Wjetscore/F");
    totaltree->Branch("Wjetmass",&Wjetmass,"&Wjetmass/F");
    totaltree->Branch("Wjetmsoftdrop",&Wjetmsoftdrop,"&Wjetmsoftdrop/F");
    totaltree->Branch("Wjettau21",&Wjettau21,"&Wjettau21/F");
    totaltree->Branch("Wjettau32",&Wjettau32,"&Wjettau32/F");
    totaltree->Branch("Wjettau1",&Wjettau1,"&Wjettau1/F");
    totaltree->Branch("Wjettau2",&Wjettau2,"&Wjettau2/F");
    totaltree->Branch("Wjettau3",&Wjettau3,"&Wjettau3/F");
    totaltree->Branch("WjetPt",&WjetPt,"&WjetPt/F");

    totaltree->Branch("Zjetscore",&Zjetscore,"&Zjetscore/F");
    totaltree->Branch("Zjetmass",&Zjetmass,"&Zjetmass/F");
    totaltree->Branch("Zjetmsoftdrop",&Zjetmsoftdrop,"&Zjetmsoftdrop/F");
    totaltree->Branch("Zjettau21",&Zjettau21,"&Zjettau21/F");
    totaltree->Branch("Zjettau32",&Zjettau32,"&Zjettau32/F");
    totaltree->Branch("Zjettau1",&Zjettau1,"&Zjettau1/F");
    totaltree->Branch("Zjettau2",&Zjettau2,"&Zjettau2/F");
    totaltree->Branch("Zjettau3",&Zjettau3,"&Zjettau3/F");
    totaltree->Branch("ZjetPt",&ZjetPt,"&ZjetPt/F");

    totaltree->Branch("secfatjetscore",&secfatjetscore,"&secfatjetscore/F");
    totaltree->Branch("secfatjetmass",&secfatjetmass,"&secfatjetmass/F");
    totaltree->Branch("secfatjetmsoftdrop",&secfatjetmsoftdrop,"&secfatjetmsoftdrop/F");
    totaltree->Branch("secfatjettau21",&secfatjettau21,"&secfatjettau21/F");
    totaltree->Branch("secfatjettau32",&secfatjettau32,"&secfatjettau32/F");
    totaltree->Branch("secfatjettau1",&secfatjettau1,"&secfatjettau1/F");
    totaltree->Branch("secfatjettau2",&secfatjettau2,"&secfatjettau2/F");
    totaltree->Branch("secfatjettau3",&secfatjettau3,"&secfatjettau3/F");
    totaltree->Branch("secfatjetPt",&secfatjetPt,"&secfatjetPt/F");

    totaltree->Branch("n_loose_ak4jet",&n_loose_ak4jet,"&n_loose_ak4jet/F");
    totaltree->Branch("n_medium_ak4jet",&n_medium_ak4jet,"&n_medium_ak4jet/F");
    totaltree->Branch("leptonpt",&leptonpt,"&leptonpt/F");
    totaltree->Branch("VBSMjj",&VBSMjj,"&VBSMjj/F");
    totaltree->Branch("VBSdetajj",&VBSdetajj,"&VBSdetajj/F");
    totaltree->Branch("VBSdphijj",&VBSdphijj,"&VBSdphijj/F");
    totaltree->Branch("VBSPtjj",&VBSPtjj,"&VBSPtjj/F");
    totaltree->Branch("Mlbmin",&Mlbmin,"&Mlbmin/F");
    totaltree->Branch("Mlbminloose",&Mlbminloose,"&Mlbminloose/F");
    totaltree->Branch("Mlbminmedium",&Mlbminmedium,"&Mlbminmedium/F");
    totaltree->Branch("trans_E",&trans_E,"&trans_E/F");
    totaltree->Branch("MET",&MET,"&MET/F");
    totaltree->Branch("weight",&weight,"&weight/F");
    totaltree->Branch("fabsweight",&fabsweight,"&fabsweight/F");
    totaltree->Branch("divide",&divide,"&divide/F");

    totaltree->Branch("SampleTag",&SampleTag,"SampleTag/I");

    

    traintree = new TTree("trainEvents","yifan events");


    traintree->Branch("Hbbscore",&Hbbscore,"&Hbbscore/F");
    traintree->Branch("Hbbmass",&Hbbmass,"&Hbbmass/F");
    traintree->Branch("Hbbmsoftdrop",&Hbbmsoftdrop,"&Hbbmsoftdrop/F");
    traintree->Branch("Hbbtau21",&Hbbtau21,"&Hbbtau21/F");
    traintree->Branch("Hbbtau32",&Hbbtau32,"&Hbbtau32/F");
    traintree->Branch("Hbbtau1",&Hbbtau1,"&Hbbtau1/F");
    traintree->Branch("Hbbtau2",&Hbbtau2,"&Hbbtau2/F");
    traintree->Branch("Hbbtau3",&Hbbtau3,"&Hbbtau3/F");
    traintree->Branch("HbbPt",&HbbPt,"&HbbPt/F");

    traintree->Branch("Wjetscore",&Wjetscore,"&Wjetscore/F");
    traintree->Branch("Wjetmass",&Wjetmass,"&Wjetmass/F");
    traintree->Branch("Wjetmsoftdrop",&Wjetmsoftdrop,"&Wjetmsoftdrop/F");
    traintree->Branch("Wjettau21",&Wjettau21,"&Wjettau21/F");
    traintree->Branch("Wjettau32",&Wjettau32,"&Wjettau32/F");
    traintree->Branch("Wjettau1",&Wjettau1,"&Wjettau1/F");
    traintree->Branch("Wjettau2",&Wjettau2,"&Wjettau2/F");
    traintree->Branch("Wjettau3",&Wjettau3,"&Wjettau3/F");
    traintree->Branch("WjetPt",&WjetPt,"&WjetPt/F");

    traintree->Branch("Zjetscore",&Zjetscore,"&Zjetscore/F");
    traintree->Branch("Zjetmass",&Zjetmass,"&Zjetmass/F");
    traintree->Branch("Zjetmsoftdrop",&Zjetmsoftdrop,"&Zjetmsoftdrop/F");
    traintree->Branch("Zjettau21",&Zjettau21,"&Zjettau21/F");
    traintree->Branch("Zjettau32",&Zjettau32,"&Zjettau32/F");
    traintree->Branch("Zjettau1",&Zjettau1,"&Zjettau1/F");
    traintree->Branch("Zjettau2",&Zjettau2,"&Zjettau2/F");
    traintree->Branch("Zjettau3",&Zjettau3,"&Zjettau3/F");
    traintree->Branch("ZjetPt",&ZjetPt,"&ZjetPt/F");

    traintree->Branch("secfatjetscore",&secfatjetscore,"&secfatjetscore/F");
    traintree->Branch("secfatjetmass",&secfatjetmass,"&secfatjetmass/F");
    traintree->Branch("secfatjetmsoftdrop",&secfatjetmsoftdrop,"&secfatjetmsoftdrop/F");
    traintree->Branch("secfatjettau21",&secfatjettau21,"&secfatjettau21/F");
    traintree->Branch("secfatjettau32",&secfatjettau32,"&secfatjettau32/F");
    traintree->Branch("secfatjettau1",&secfatjettau1,"&secfatjettau1/F");
    traintree->Branch("secfatjettau2",&secfatjettau2,"&secfatjettau2/F");
    traintree->Branch("secfatjettau3",&secfatjettau3,"&secfatjettau3/F");
    traintree->Branch("secfatjetPt",&secfatjetPt,"&secfatjetPt/F");

    traintree->Branch("n_loose_ak4jet",&n_loose_ak4jet,"&n_loose_ak4jet/F");
    traintree->Branch("n_medium_ak4jet",&n_medium_ak4jet,"&n_medium_ak4jet/F");
    traintree->Branch("leptonpt",&leptonpt,"&leptonpt/F");
    traintree->Branch("VBSMjj",&VBSMjj,"&VBSMjj/F");
    traintree->Branch("VBSdetajj",&VBSdetajj,"&VBSdetajj/F");
    traintree->Branch("VBSdphijj",&VBSdphijj,"&VBSdphijj/F");
    traintree->Branch("VBSPtjj",&VBSPtjj,"&VBSPtjj/F");
    traintree->Branch("Mlbmin",&Mlbmin,"&Mlbmin/F");
    traintree->Branch("Mlbminloose",&Mlbminloose,"&Mlbminloose/F");
    traintree->Branch("Mlbminmedium",&Mlbminmedium,"&Mlbminmedium/F");
    traintree->Branch("trans_E",&trans_E,"&trans_E/F");
    traintree->Branch("MET",&MET,"&MET/F");
    traintree->Branch("weight",&weight,"&weight/F");
    traintree->Branch("fabsweight",&fabsweight,"&fabsweight/F");
    traintree->Branch("SampleTag",&SampleTag,"SampleTag/I");


    testtree = new TTree("testEvents","yifan events");


    testtree->Branch("Hbbscore",&Hbbscore,"&Hbbscore/F");
    testtree->Branch("Hbbmass",&Hbbmass,"&Hbbmass/F");
    testtree->Branch("Hbbmsoftdrop",&Hbbmsoftdrop,"&Hbbmsoftdrop/F");
    testtree->Branch("Hbbtau21",&Hbbtau21,"&Hbbtau21/F");
    testtree->Branch("Hbbtau32",&Hbbtau32,"&Hbbtau32/F");
    testtree->Branch("Hbbtau1",&Hbbtau1,"&Hbbtau1/F");
    testtree->Branch("Hbbtau2",&Hbbtau2,"&Hbbtau2/F");
    testtree->Branch("Hbbtau3",&Hbbtau3,"&Hbbtau3/F");
    testtree->Branch("HbbPt",&HbbPt,"&HbbPt/F");

    testtree->Branch("Wjetscore",&Wjetscore,"&Wjetscore/F");
    testtree->Branch("Wjetmass",&Wjetmass,"&Wjetmass/F");
    testtree->Branch("Wjetmsoftdrop",&Wjetmsoftdrop,"&Wjetmsoftdrop/F");
    testtree->Branch("Wjettau21",&Wjettau21,"&Wjettau21/F");
    testtree->Branch("Wjettau32",&Wjettau32,"&Wjettau32/F");
    testtree->Branch("Wjettau1",&Wjettau1,"&Wjettau1/F");
    testtree->Branch("Wjettau2",&Wjettau2,"&Wjettau2/F");
    testtree->Branch("Wjettau3",&Wjettau3,"&Wjettau3/F");
    testtree->Branch("WjetPt",&WjetPt,"&WjetPt/F");

    testtree->Branch("Zjetscore",&Zjetscore,"&Zjetscore/F");
    testtree->Branch("Zjetmass",&Zjetmass,"&Zjetmass/F");
    testtree->Branch("Zjetmsoftdrop",&Zjetmsoftdrop,"&Zjetmsoftdrop/F");
    testtree->Branch("Zjettau21",&Zjettau21,"&Zjettau21/F");
    testtree->Branch("Zjettau32",&Zjettau32,"&Zjettau32/F");
    testtree->Branch("Zjettau1",&Zjettau1,"&Zjettau1/F");
    testtree->Branch("Zjettau2",&Zjettau2,"&Zjettau2/F");
    testtree->Branch("Zjettau3",&Zjettau3,"&Zjettau3/F");
    testtree->Branch("ZjetPt",&ZjetPt,"&ZjetPt/F");

    testtree->Branch("secfatjetscore",&secfatjetscore,"&secfatjetscore/F");
    testtree->Branch("secfatjetmass",&secfatjetmass,"&secfatjetmass/F");
    testtree->Branch("secfatjetmsoftdrop",&secfatjetmsoftdrop,"&secfatjetmsoftdrop/F");
    testtree->Branch("secfatjettau21",&secfatjettau21,"&secfatjettau21/F");
    testtree->Branch("secfatjettau32",&secfatjettau32,"&secfatjettau32/F");
    testtree->Branch("secfatjettau1",&secfatjettau1,"&secfatjettau1/F");
    testtree->Branch("secfatjettau2",&secfatjettau2,"&secfatjettau2/F");
    testtree->Branch("secfatjettau3",&secfatjettau3,"&secfatjettau3/F");
    testtree->Branch("secfatjetPt",&secfatjetPt,"&secfatjetPt/F");


    testtree->Branch("n_loose_ak4jet",&n_loose_ak4jet,"&n_loose_ak4jet/F");
    testtree->Branch("n_medium_ak4jet",&n_medium_ak4jet,"&n_medium_ak4jet/F");
    testtree->Branch("leptonpt",&leptonpt,"&leptonpt/F");
    testtree->Branch("VBSMjj",&VBSMjj,"&VBSMjj/F");
    testtree->Branch("VBSdetajj",&VBSdetajj,"&VBSdetajj/F");
    testtree->Branch("VBSdphijj",&VBSdphijj,"&VBSdphijj/F");
    testtree->Branch("VBSPtjj",&VBSPtjj,"&VBSPtjj/F");
    testtree->Branch("Mlbmin",&Mlbmin,"&Mlbmin/F");
    testtree->Branch("Mlbminloose",&Mlbminloose,"&Mlbminloose/F");
    testtree->Branch("Mlbminmedium",&Mlbminmedium,"&Mlbminmedium/F");
    testtree->Branch("trans_E",&trans_E,"&trans_E/F");
    testtree->Branch("MET",&MET,"&MET/F");
    testtree->Branch("weight",&weight,"&weight/F");
    testtree->Branch("fabsweight",&fabsweight,"&fabsweight/F");
    testtree->Branch("SampleTag",&SampleTag,"SampleTag/I");

    string dataname = "data_"+InputYear+".txt";
    ofstream writedatafile;
    writedatafile.open(dataname,ios::out);
    Double_t weighted_number[20] = {0};
    Double_t weighted_error[20] = {0};

    while(infile>>read){
        const char *Cfilename = read.c_str();
        TFile *readfile = new TFile(Cfilename);

        if(!readfile)
            cout<<"Error Message: should not see this message!"<<endl;

        TTree * readtotaltree;
        readtotaltree = (TTree *)gDirectory->Get("totalEvents");

        readtotaltree->SetBranchAddress("Hbbscore",&Hbbscore);
        readtotaltree->SetBranchAddress("Hbbmass",&Hbbmass);
        readtotaltree->SetBranchAddress("Hbbmsoftdrop",&Hbbmsoftdrop);
        readtotaltree->SetBranchAddress("Hbbtau21",&Hbbtau21);
        readtotaltree->SetBranchAddress("Hbbtau32",&Hbbtau32);
        readtotaltree->SetBranchAddress("Hbbtau1",&Hbbtau1);
        readtotaltree->SetBranchAddress("Hbbtau2",&Hbbtau2);
        readtotaltree->SetBranchAddress("Hbbtau3",&Hbbtau3);
        readtotaltree->SetBranchAddress("HbbPt",&HbbPt);

        readtotaltree->SetBranchAddress("Wjetscore",&Wjetscore);
        readtotaltree->SetBranchAddress("Wjetmass",&Wjetmass);
        readtotaltree->SetBranchAddress("Wjetmsoftdrop",&Wjetmsoftdrop);
        readtotaltree->SetBranchAddress("Wjettau21",&Wjettau21);
        readtotaltree->SetBranchAddress("Wjettau32",&Wjettau32);
        readtotaltree->SetBranchAddress("Wjettau1",&Wjettau1);
        readtotaltree->SetBranchAddress("Wjettau2",&Wjettau2);
        readtotaltree->SetBranchAddress("Wjettau3",&Wjettau3);
        readtotaltree->SetBranchAddress("WjetPt",&WjetPt);

        readtotaltree->SetBranchAddress("Zjetscore",&Zjetscore);
        readtotaltree->SetBranchAddress("Zjetmass",&Zjetmass);
        readtotaltree->SetBranchAddress("Zjetmsoftdrop",&Zjetmsoftdrop);
        readtotaltree->SetBranchAddress("Zjettau21",&Zjettau21);
        readtotaltree->SetBranchAddress("Zjettau32",&Zjettau32);
        readtotaltree->SetBranchAddress("Zjettau1",&Zjettau1);
        readtotaltree->SetBranchAddress("Zjettau2",&Zjettau2);
        readtotaltree->SetBranchAddress("Zjettau3",&Zjettau3);
        readtotaltree->SetBranchAddress("ZjetPt",&ZjetPt);

        readtotaltree->SetBranchAddress("secfatjetscore",&secfatjetscore);
        readtotaltree->SetBranchAddress("secfatjetmass",&secfatjetmass);
        readtotaltree->SetBranchAddress("secfatjetmsoftdrop",&secfatjetmsoftdrop);
        readtotaltree->SetBranchAddress("secfatjettau21",&secfatjettau21);
        readtotaltree->SetBranchAddress("secfatjettau32",&secfatjettau32);
        readtotaltree->SetBranchAddress("secfatjettau1",&secfatjettau1);
        readtotaltree->SetBranchAddress("secfatjettau2",&secfatjettau2);
        readtotaltree->SetBranchAddress("secfatjettau3",&secfatjettau3);
        readtotaltree->SetBranchAddress("secfatjetPt",&secfatjetPt);

        readtotaltree->SetBranchAddress("n_loose_ak4jet",&n_loose_ak4jet);
        readtotaltree->SetBranchAddress("n_medium_ak4jet",&n_medium_ak4jet);
        readtotaltree->SetBranchAddress("leptonpt",&leptonpt);
        readtotaltree->SetBranchAddress("VBSMjj",&VBSMjj);
        readtotaltree->SetBranchAddress("VBSdetajj",&VBSdetajj);
        readtotaltree->SetBranchAddress("VBSdphijj",&VBSdphijj);
        readtotaltree->SetBranchAddress("VBSPtjj",&VBSPtjj);
        readtotaltree->SetBranchAddress("Mlbmin",&Mlbmin);
        readtotaltree->SetBranchAddress("Mlbminloose",&Mlbminloose);
        readtotaltree->SetBranchAddress("Mlbminmedium",&Mlbminmedium);
        readtotaltree->SetBranchAddress("trans_E",&trans_E);
        readtotaltree->SetBranchAddress("MET",&MET);
        readtotaltree->SetBranchAddress("weight",&weight);
        readtotaltree->SetBranchAddress("fabsweight",&fabsweight);
//        readtotaltree->SetBranchAddress("divide",&divide);


        Int_t Nentries = readtotaltree->GetEntries();
        cout<<"Sample Name : "<<argv[3]<<"    "<<Nentries<<"events"<<endl;
        for(int ii = 0 ; ii < Nentries ; ii++){
            readtotaltree->GetEntry(ii,0);
            //OUTPUTSOURCE
            //if(Hbbmass > 160) continue;
            weighted_number[0] += weight;
            weighted_error[0] += weight*weight;
            if(Hbbmass > 160) continue;
            if(Hbbmass < 70) continue;
            weighted_number[6] += weight;
            weighted_error[6] += weight;
            if(Wjetscore < 0.5) continue;
            if(Wjetmass > 140) continue;
            weighted_number[5] += weight;
            weighted_error[5] += weight*weight;
            if(Hbbscore < 0.5) continue;
            weighted_number[10] += weight;
            weighted_error[10] += weight*weight;
            if(Wjetscore < 0.7) continue;
            weighted_number[11] += weight;
            weighted_error[11] += weight * weight;
            if(Mlbminloose < MLBMINLOOSE) continue;
            weighted_number[12] += weight;
            weighted_error[12] += weight*weight;
            if(trans_E > 3000){
                weighted_number[1] += weight;
                weighted_error[1] += weight*weight;
            }else{
                weighted_number[2] += weight;
                weighted_error[2] += weight*weight;
            }
            if(trans_E > 3000) continue;
            divide = myrandom->Uniform(1);
            totaltree->Fill();
            //divide = myrandom->Uniform(1);
            if(divide <= 0.5) traintree->Fill();
            else testtree->Fill();

            if(trans_E > 3000){
                if(Hbbscore > 0.9 && secfatjetscore > 0.55){
                    weighted_number[3] += weight;
                    weighted_error[3] += weight * weight;
                    if(Hbbscore > 0.95){
                        weighted_number[4] += weight;
                        weighted_error[4] += weight*weight;
                    }
                    if(Hbbmass > 160) continue;
                    if(Hbbmass < 70) continue;
                    weighted_number[7] += weight;
                    weighted_error[7] += weight*weight;
                    if(Wjetmass > 140) continue;
                    weighted_number[8] += weight;
                    weighted_error[8] += weight*weight;
                    if(VBSMjj < 750 ) continue;
                    if(fabs(VBSdetajj) < 3 ) continue;
                    weighted_number[9] += weight;
                    weighted_error[9] += weight*weight;
                }
            }
       
        }



    }
    writedatafile<<"SAMPLENAME     "<<argv[3]<<endl;
    writedatafile<<"weighted_number_begin               "<<weighted_number[0]<<endl;
    writedatafile<<"weighted_number_Hmass               "<<weighted_number[6]<<endl;
    writedatafile<<"weighted_number_Wmass               "<<weighted_number[5]<<endl;
    writedatafile<<"weighted_number_Hbb09               "<<weighted_number[10]<<endl;
    writedatafile<<"weighted_number_Wjet055             "<<weighted_number[11]<<endl;
    writedatafile<<"weighted_number_Mlb230              "<<weighted_number[12]<<endl;
    writedatafile<<"weighted_number_STH3000             "<<weighted_number[1]<<endl;
    writedatafile<<"weighted_number_STL3000             "<<weighted_number[2]<<endl;
    writedatafile<<"weighted_number_ST3000Score09V07    "<<weighted_number[3]<<endl;
    writedatafile<<"weighted_number_ST3000Score095V07   "<<weighted_number[4]<<endl;
    writedatafile<<"weighted_number_HST_Hbbmass100vs160 "<<weighted_number[7]<<endl;
    writedatafile<<"weighted_number_HST_Wjetmass140     "<<weighted_number[8]<<endl;
    writedatafile<<"weighted_number_HST_VBS             "<<weighted_number[9]<<endl;
    
    writedatafile<<"weighted_error_begin                "<<sqrt(weighted_error[0])<<endl;
    writedatafile<<"weighted_error_Hmass                "<<sqrt(weighted_error[6])<<endl;
    writedatafile<<"weighted_error_Wmass                "<<sqrt(weighted_error[5])<<endl;
    writedatafile<<"weighted_error_Hbb09                "<<sqrt(weighted_error[10])<<endl;
    writedatafile<<"weighted_error_Wjet055              "<<sqrt(weighted_error[11])<<endl;
    writedatafile<<"weighted_error_Mlb230               "<<sqrt(weighted_error[12])<<endl;
    writedatafile<<"weighted_error_STH3000              "<<sqrt(weighted_error[1])<<endl;
    writedatafile<<"weighted_error_STL3000              "<<sqrt(weighted_error[2])<<endl;
    writedatafile<<"weighted_error_ST3000Score09V07     "<<sqrt(weighted_error[3])<<endl;
    writedatafile<<"weighted_error_ST3000Score095V07    "<<sqrt(weighted_error[4])<<endl;
    writedatafile<<"weighted_error_HST_Hbbmass100vs160  "<<sqrt(weighted_error[7])<<endl;
    writedatafile<<"weighted_error_HST_Wjetmass140      "<<sqrt(weighted_error[8])<<endl;
    writedatafile<<"weighted_error_HST_VBS              "<<sqrt(weighted_error[9])<<endl;
    writefile->cd();
    writefile->Write();
    cout<<"root file "<<argv[3]<<" save"<<endl;
    writefile->Close();
}
