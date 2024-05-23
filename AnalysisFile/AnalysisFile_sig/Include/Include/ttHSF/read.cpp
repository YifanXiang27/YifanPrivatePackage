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
void read(){

    TFile *wfile = new TFile("MuonEff.root","RECREATE");

    double eta_array[5] = {0,0.9,1.2,2.1,2.4};
    double pt_array[8] = {15,20,25,30,40,50,60,120};
    int etabin,ptbin;
    double value;
    ifstream infile;
    string read;

    TH2D *plot_2018_Muon_Eff_LooseID_tracker = new TH2D("plot_2018_Muon_Eff_LooseID_tracker","plot_2018_Muon_Eff_LooseID_tracker",4,eta_array,7,pt_array);
    infile.open("Efficiencies_muon_generalTracks_Z_Run2018_UL_ID.json");
    etabin = -999;
    ptbin = -999;
    while(infile>>read){
        if(read.find("abseta:[")!=string::npos){
            if(read.find("abseta:[0.0,0.9]")!=string::npos) etabin = 1;
            else if(read.find("abseta:[0.9,1.2]")!=string::npos) etabin = 2;
            else if(read.find("abseta:[1.2,2.1]")!=string::npos) etabin = 3;
            else if(read.find("abseta:[2.1,2.4]")!=string::npos) etabin = 4;
            else cout<<"reading eta error : "<<read<<endl;
        }
        if(read.find("pt:[")!=string::npos){
            if(read.find("pt:[15,20]")!=string::npos) ptbin = 1;
            else if(read.find("pt:[20,25]")!=string::npos) ptbin = 2;
            else if(read.find("pt:[25,30]")!=string::npos) ptbin = 3;
            else if(read.find("pt:[30,40]")!=string::npos) ptbin = 4;
            else if(read.find("pt:[40,50]")!=string::npos) ptbin = 5;
            else if(read.find("pt:[50,60]")!=string::npos) ptbin = 6;
            else if(read.find("pt:[60,120]")!=string::npos) ptbin = 7;
            else cout<<"reading pt error : "<<read<<endl;
        }
        if(read.find("value")!=string::npos){
            infile>>value;
            plot_2018_Muon_Eff_LooseID_tracker->SetBinContent(etabin,ptbin,value);
        }
    }
    infile.close();

    TH2D *plot_2017_Muon_Eff_LooseID_tracker = new TH2D("plot_2017_Muon_Eff_LooseID_tracker","plot_2017_Muon_Eff_LooseID_tracker",4,eta_array,7,pt_array);
    infile.open("Efficiencies_muon_generalTracks_Z_Run2017_UL_ID.json");
    etabin = -999;
    ptbin = -999;
    while(infile>>read){
        if(read.find("abseta:[")!=string::npos){
            if(read.find("abseta:[0.0,0.9]")!=string::npos) etabin = 1;
            else if(read.find("abseta:[0.9,1.2]")!=string::npos) etabin = 2;
            else if(read.find("abseta:[1.2,2.1]")!=string::npos) etabin = 3;
            else if(read.find("abseta:[2.1,2.4]")!=string::npos) etabin = 4;
            else cout<<"reading eta error : "<<read<<endl;
        }
        if(read.find("pt:[")!=string::npos){
            if(read.find("pt:[15,20]")!=string::npos) ptbin = 1;
            else if(read.find("pt:[20,25]")!=string::npos) ptbin = 2;
            else if(read.find("pt:[25,30]")!=string::npos) ptbin = 3;
            else if(read.find("pt:[30,40]")!=string::npos) ptbin = 4;
            else if(read.find("pt:[40,50]")!=string::npos) ptbin = 5;
            else if(read.find("pt:[50,60]")!=string::npos) ptbin = 6;
            else if(read.find("pt:[60,120]")!=string::npos) ptbin = 7;
            else cout<<"reading pt error : "<<read<<endl;
        }
        if(read.find("value")!=string::npos){
            infile>>value;
            plot_2017_Muon_Eff_LooseID_tracker->SetBinContent(etabin,ptbin,value);
        }
    }
    infile.close();

    TH2D *plot_2016_Muon_Eff_LooseID_tracker = new TH2D("plot_2016_Muon_Eff_LooseID_tracker","plot_2016_Muon_Eff_LooseID_tracker",4,eta_array,7,pt_array);
    infile.open("Efficiencies_muon_generalTracks_Z_Run2016_UL_ID.json");
    etabin = -999;
    ptbin = -999;
    while(infile>>read){
        if(read.find("abseta:[")!=string::npos){
            if(read.find("abseta:[0.0,0.9]")!=string::npos) etabin = 1;
            else if(read.find("abseta:[0.9,1.2]")!=string::npos) etabin = 2;
            else if(read.find("abseta:[1.2,2.1]")!=string::npos) etabin = 3;
            else if(read.find("abseta:[2.1,2.4]")!=string::npos) etabin = 4;
            else cout<<"reading eta error : "<<read<<endl;
        }
        if(read.find("pt:[")!=string::npos){
            if(read.find("pt:[15,20]")!=string::npos) ptbin = 1;
            else if(read.find("pt:[20,25]")!=string::npos) ptbin = 2;
            else if(read.find("pt:[25,30]")!=string::npos) ptbin = 3;
            else if(read.find("pt:[30,40]")!=string::npos) ptbin = 4;
            else if(read.find("pt:[40,50]")!=string::npos) ptbin = 5;
            else if(read.find("pt:[50,60]")!=string::npos) ptbin = 6;
            else if(read.find("pt:[60,120]")!=string::npos) ptbin = 7;
            else cout<<"reading pt error : "<<read<<endl;
        }
        if(read.find("value")!=string::npos){
            infile>>value;
            plot_2016_Muon_Eff_LooseID_tracker->SetBinContent(etabin,ptbin,value);
        }
    }
    infile.close();

    TH2D *plot_2016HIPM_Muon_Eff_LooseID_tracker = new TH2D("plot_2016HIPM_Muon_Eff_LooseID_tracker","plot_2016HIPM_Muon_Eff_LooseID_tracker",4,eta_array,7,pt_array);
    infile.open("Efficiencies_muon_generalTracks_Z_Run2016_UL_HIPM_ID.json");
    etabin = -999;
    ptbin = -999;
    while(infile>>read){
        if(read.find("abseta:[")!=string::npos){
            if(read.find("abseta:[0.0,0.9]")!=string::npos) etabin = 1;
            else if(read.find("abseta:[0.9,1.2]")!=string::npos) etabin = 2;
            else if(read.find("abseta:[1.2,2.1]")!=string::npos) etabin = 3;
            else if(read.find("abseta:[2.1,2.4]")!=string::npos) etabin = 4;
            else cout<<"reading eta error : "<<read<<endl;
        }
        if(read.find("pt:[")!=string::npos){
            if(read.find("pt:[15,20]")!=string::npos) ptbin = 1;
            else if(read.find("pt:[20,25]")!=string::npos) ptbin = 2;
            else if(read.find("pt:[25,30]")!=string::npos) ptbin = 3;
            else if(read.find("pt:[30,40]")!=string::npos) ptbin = 4;
            else if(read.find("pt:[40,50]")!=string::npos) ptbin = 5;
            else if(read.find("pt:[50,60]")!=string::npos) ptbin = 6;
            else if(read.find("pt:[60,120]")!=string::npos) ptbin = 7;
            else cout<<"reading pt error : "<<read<<endl;
        }
        if(read.find("value")!=string::npos){
            infile>>value;
            plot_2016HIPM_Muon_Eff_LooseID_tracker->SetBinContent(etabin,ptbin,value);
        }
    }
    infile.close();



    wfile->cd();
    wfile->Write();
    wfile->Close();
}
