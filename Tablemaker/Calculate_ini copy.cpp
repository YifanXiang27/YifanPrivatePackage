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
void Calculate(){

    ifstream infile;
    infile.open("data.txt");

    string SampleName[NSAMPLE];
    string Cuttag[NCUT];
    double CutNum[NSAMPLE][NCUT] = {0};
    double CutErr[NSAMPLE][NCUT] = {0};

    int Nsample = NSAMPLE;
    int Ncut = NCUT;

    string read;
    double Dread;
    infile>>read;
    int countnum = 0;
    int counterr = 0;
    infile >> SampleName[0];
    int maxlength = 0;
    for(int ncut = 0 ;  ncut < Ncut ; ){
        infile >> read;
        infile >> Dread;
        if(((read.find("number",0)) != string::npos)){
            Cuttag[countnum] = read.substr((read.find("number",0)) + 7);
            if (Cuttag[countnum].length() > maxlength ) maxlength = Cuttag[countnum].length();
            ncut ++;
            countnum ++;
        }
    }

    infile.close();
    infile.open("data.txt");


    countnum = 0;
    counterr = 0;
    infile >> read;
    for(int nsample = 0 ; nsample < Nsample ; nsample ++){
        infile>>SampleName[nsample];
        cout<<nsample<<endl;
        countnum = 0;
        while(infile >> read){
            cout<<"test1    "<<read<<"   "<<nsample<<endl;
            if(read == "SAMPLENAME") {
                break;
            }
            infile >> Dread;
            //cout<<Dread<<endl;
            //cout<<"test1"<<nsample<<endl;
            if(((read.find("number",0)) != string::npos)){
                cout<<"test2"<<nsample<<countnum<<endl;
                CutNum[nsample][countnum] = Dread;
                countnum ++;
            }else if(((read.find("error",0)) != string::npos)){
                cout<<"sample"<<nsample<<endl;
                for(int nncut = 0 ; nncut < Ncut ; nncut ++){
                    //cout<<nsample<<"   "<<nncut<<"   "<<Dread<<"   "<<read.substr(15)<<"   "<<Cuttag[nncut]<<endl;
                    if(read.substr(15) == Cuttag[nncut]){
                        CutErr[nsample][nncut] = Dread;
                        break;
                    }
                }
            }
        }
    }

    ofstream outputfile;
    outputfile.open("linuxtable.txt",ios::out);
    outputfile<<"num  "<<setw(maxlength + 3)<<left<<"Cut Name"<<"   ";
    for(int nsample = 0 ; nsample < Nsample ; nsample ++){
        outputfile<<setw(20)<<SampleName[nsample];
    }
    outputfile<<endl;
    for(int ncut = 0 ; ncut < Ncut ; ncut ++){
        outputfile<<setw(4)<<left<<ncut<<" "<<setw(maxlength + 3)<<left<<Cuttag[ncut]<<"   ";
        for(int nsample = 0 ; nsample < Nsample ; nsample ++){
            outputfile<<setw(8)<<left<<CutNum[nsample][ncut]<<" +- "<<setw(8)<<left<<CutErr[nsample][ncut]<<"    ";
        }
        outputfile<<endl;
    }
    outputfile.close();

    outputfile.open("exceltable.txt",ios::out);
    outputfile<<setw(maxlength + 3)<<left<<"Cut Name"<<" , ";
    for(int nsample = 0 ; nsample < Nsample ; nsample ++){
        outputfile<<setw(21)<<SampleName[nsample]<<", ";
    }
    outputfile<<endl;
    for(int ncut = 0 ; ncut < Ncut ; ncut ++){
        outputfile<<setw(maxlength + 3)<<left<<Cuttag[ncut]<<" , ";
        for(int nsample = 0 ; nsample < Nsample ; nsample ++){
            outputfile<<setw(8)<<left<<CutNum[nsample][ncut]<<" +- "<<setw(8)<<left<<CutErr[nsample][ncut]<<" , ";
        }
        outputfile<<endl;
    }
    outputfile.close();

    outputfile.open("exceltable_detail.txt",ios::out);
    outputfile<<setw(maxlength + 7)<<left<<"Cut Name"<<" , ";
    for(int nsample = 0 ; nsample < Nsample ; nsample ++){
        outputfile<<setw(21)<<SampleName[nsample]<<", ";
    }
    outputfile<<endl;
    for(int ncut = 0 ; ncut < Ncut ; ncut ++){
        outputfile<<"Num "<<setw(maxlength + 3)<<left<<Cuttag[ncut]<<" , ";
        for(int nsample = 0 ; nsample < Nsample ; nsample ++){
            outputfile<<setw(21)<<left<<CutNum[nsample][ncut]<<", ";
        }
        outputfile<<endl;
    }
    for(int ncut = 0 ; ncut < Ncut ; ncut ++){
        outputfile<<"Err "<<setw(maxlength + 3)<<left<<Cuttag[ncut]<<" , ";
        for(int nsample = 0 ; nsample < Nsample ; nsample ++){
            outputfile<<setw(21)<<left<<CutErr[nsample][ncut]<<", ";
        }
        outputfile<<endl;
    }
    outputfile.close();


}
