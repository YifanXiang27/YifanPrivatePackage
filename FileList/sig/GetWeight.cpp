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

int main(int argc, char **argv){

    cout<<"*********************************************"<<endl;
    cout<<"*         GetWeight Start                   *"<<endl;
    cout<<"*********************************************"<<endl;

    ifstream infile;
    infile.open(argv[1]);
    ofstream outfileCpp;
    ofstream outfileBackup;
    outfileCpp.open("CPPFile.txt",ios::out);
    outfileBackup.open("Backupinformaton.txt",ios::out);

    ofstream outwritefilelist;
    std::string FilelistRoute(argv[2]);

    string read;

    Long64_t genEventCount = 0;
    Double_t genEventSumw = 0;
    Double_t genEventSumw2 = 0;
    Long64_t totalEventCount = 0;
    Double_t totalEventSumw = 0;
    Double_t totalEventSumw2 = 0;
    while(infile>>read){
        string name = "";
        string tag = read;
        name += read;
        infile>>read;
        string year = read;
        name += read;
        ifstream infile_list;
        infile_list.open(FilelistRoute + "/Filelist_" + name + ".list");
        outwritefilelist.open("List/Filelist_" + name + ".list");
        cout<<(FilelistRoute + "/Filelist_" + name + ".list")<<endl;
        string readlist;
        totalEventCount = 0;
        totalEventSumw = 0;
        totalEventSumw2 = 0;
        genEventCount = 0;
        genEventSumw = 0;
        genEventSumw2 = 0;
        while(infile_list>>readlist){
            const char *C_readlist = readlist.c_str();
            TFile *Tfile = TFile::Open(C_readlist);
            TTree *tree = NULL;
            if(!Tfile)
                Tfile = new TFile(C_readlist);
            tree = (TTree *)Tfile->Get("Runs");
            if (tree == NULL) {
                cout<<(FilelistRoute + "/Filelist_" + name + ".list")<<endl;
                continue;
            }
            outwritefilelist<<C_readlist<<endl;
            cout<<C_readlist<<endl;
            tree->SetBranchAddress("genEventCount",&genEventCount);
            tree->SetBranchAddress("genEventSumw",&genEventSumw);
            tree->SetBranchAddress("genEventSumw2",&genEventSumw2);
            Int_t Nentries = tree->GetEntries(); 
            for(int ii = 0 ; ii < Nentries ; ii ++){
                tree->GetEntry(ii,0);
                totalEventCount += genEventCount;
                totalEventSumw  += genEventSumw;
                totalEventSumw2 += genEventSumw2;
            }
            Tfile->Close();
            //outwritefilelist.close();
        }
        outwritefilelist.close();
        double lumi;
        if(year == "2016APV" ) lumi = 19.52;
        else if(year == "2016") lumi = 16.81;
        else if(year == "2017") lumi = 41.529;
        else if(year == "2018") lumi = 59.7;
        ifstream inxsecfile;
        inxsecfile.open("crosssection/xsecp1.txt");
        string readxsec;
        bool iffindxsec = false;
        double xsec;
        while(inxsecfile>>readxsec){
            if(tag == readxsec){
                inxsecfile>>xsec;
                iffindxsec = true;
            }else{
                inxsecfile>>readxsec;
            }
        }
        inxsecfile.close();
        if(!iffindxsec){
            inxsecfile.open("crosssection/xsecp2.txt");
            while(inxsecfile>>readxsec){
                string addtag;
                inxsecfile>>addtag;
                string addyear;
                inxsecfile>>addyear;
                if(name.find(readxsec) != string::npos && name.find(addtag) != string::npos && year == addyear){
                    inxsecfile>>xsec;
                    iffindxsec = true;
                }else{
                    inxsecfile>>readxsec;
                }
            }
        }
        if(!iffindxsec){
            cout<<"Error Message: "<<name<<" cannot find the xsec !"<<endl;
            xsec = 0;
        }else{
            double OEWeight = xsec * 1000 * lumi / totalEventSumw ;
            outfileBackup<<name<<" "<<year<<"   "<<"scale = xsec("<<xsec<<") * 1000 / TotalWeight("<<totalEventSumw<<") * lumi("<<lumi<<") = "<<OEWeight<<endl;;
            outfileCpp<<"    if(InputYear == \""<<name<<"\")"<<endl;
            outfileCpp<<"        weight_xsec = "<<OEWeight<<";"<<endl;
        }
    }
    infile.close();
    outfileCpp.close();
    outfileBackup.close();

    cout<<"*********************************************"<<endl;
    cout<<"*         GetWeight End                     *"<<endl;
    cout<<"*********************************************"<<endl;

}
