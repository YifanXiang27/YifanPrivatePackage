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
    infile.open(argv[2]);

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
    infile.open(argv[2]);


    countnum = 0;
    counterr = 0;
    infile >> read;
    for(int nsample = 0 ; nsample < Nsample ; nsample ++){
        infile>>SampleName[nsample];
        countnum = 0;
        while(infile >> read){
            if(read == "SAMPLENAME") {
                break;
            }
            infile >> Dread;
            if(((read.find("number",0)) != string::npos)){
                CutNum[nsample][countnum] = Dread;
                countnum ++;
            }else if(((read.find("error",0)) != string::npos)){
                for(int nncut = 0 ; nncut < Ncut ; nncut ++){
                    if(read.substr(15) == Cuttag[nncut]){
                        CutErr[nsample][nncut] = Dread;
                        break;
                    }
                }
            }
        }
    }
    infile.close();

    double GroupCutNum[NCUT] = {0};
    double GroupCutErr[NCUT] = {0};


    for(int nsample = 0 ; nsample < Nsample ; nsample ++){
        for(int ncut = 0 ; ncut < Ncut ; ncut ++){
            GroupCutNum[ncut] += CutNum[nsample][ncut];
            GroupCutErr[ncut] += CutErr[nsample][ncut] * CutErr[nsample][ncut];
        }
    }
    for(int ncut = 0 ; ncut < Ncut ; ncut ++){
        GroupCutErr[ncut] = sqrt(GroupCutErr[ncut]);
    }


    string outputfile(argv[1]);
    string outputfilename = "data_" + outputfile + ".txt";
    ofstream outfile;
    outfile.open(outputfilename,ios::out);
    outfile<<"SAMPLENAME   "<<outputfile<<endl;
    for(int ncut = 0 ; ncut < Ncut ; ncut ++){
        outfile<<"weighted_number_"<<Cuttag[ncut]<<"   "<<GroupCutNum[ncut]<<endl;
    }
    for(int ncut = 0 ; ncut < Ncut ; ncut ++){
        outfile<<"weighted_error_"<<Cuttag[ncut]<<"   "<<GroupCutErr[ncut]<<endl;
    }
    outfile.close();
}
