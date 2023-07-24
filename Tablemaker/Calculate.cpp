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
#include <cmath>
using namespace std;
void Calculate(){

    ifstream infile;
    infile.open("data.txt");

    string SampleName[261];
    string Cuttag[13];
    double CutNum[261][13] = {0};
    double CutErr[261][13] = {0};

    int Nsample = 261;
    int Ncut = 13;
    int Ngroup = 69;


    cout<<69<<" groups"<<endl;

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

    string Groupname[69] ;
    double GroupCutNum[69][13] = {0};
    double GroupCutErr[69][13] = {0};
    infile.open("groupinformation.txt");

    for(int igroup = 0 ; igroup < Ngroup ; igroup++){
        infile>>Groupname[igroup];
        string readsample;
        while(infile>>readsample){
            if(readsample == "END") break;
            for(int nsample = 0 ; nsample < Nsample ; nsample ++){
                if(SampleName[nsample] == readsample){
                    for(int ncut = 0 ; ncut < Ncut ; ncut ++){
                        if(igroup == 2 && ncut == 5) cout<<SampleName[nsample]<<"   "<<CutNum[nsample][ncut]<<"   "<<CutErr[nsample][ncut]<<endl;
                        GroupCutNum[igroup][ncut] += CutNum[nsample][ncut];
                        GroupCutErr[igroup][ncut] += CutErr[nsample][ncut] * CutErr[nsample][ncut];
                    }
                    break;
                }
            }
        }
        for(int ncut = 0 ; ncut < Ncut ; ncut ++){
            GroupCutErr[igroup][ncut] = sqrt(GroupCutErr[igroup][ncut]);
        }
    }
    infile.close();


    cout.precision(4);

    ofstream outputfile;
    outputfile.open("linuxtable.txt",ios::out);
    outputfile<<"num  "<<setw(maxlength + 3)<<left<<"Cut Name"<<"   ";
    for(int nsample = 0 ; nsample < Nsample ; nsample ++){
        outputfile<<setw(24)<<SampleName[nsample];
    }
    outputfile<<endl;
    for(int ncut = 0 ; ncut < Ncut ; ncut ++){
        outputfile<<setw(4)<<left<<ncut<<" "<<setw(maxlength + 3)<<left<<Cuttag[ncut]<<"   ";
        for(int nsample = 0 ; nsample < Nsample ; nsample ++){
            outputfile<<setprecision(5)<<setw(8)<<left<<CutNum[nsample][ncut]<<" +- "<<setw(8)<<left<<CutErr[nsample][ncut]<<"    ";
        }
        outputfile<<endl;
    }
    outputfile.close();

    outputfile.open("exceltable.txt",ios::out);
    outputfile<<"Cut Name"<<",";
    for(int nsample = 0 ; nsample < Nsample ; nsample ++){
        outputfile<<SampleName[nsample]<<",";
    }
    outputfile<<endl;
    for(int ncut = 0 ; ncut < Ncut ; ncut ++){
        outputfile<<Cuttag[ncut]<<",";
        for(int nsample = 0 ; nsample < Nsample ; nsample ++){
            outputfile<<CutNum[nsample][ncut]<<"+-"<<CutErr[nsample][ncut]<<",";
        }
        outputfile<<endl;
    }
    outputfile.close();




    outputfile.open("exceltable_detail.txt",ios::out);
    outputfile<<"Cut Name"<<",";
    for(int nsample = 0 ; nsample < Nsample ; nsample ++){
        outputfile<<SampleName[nsample]<<",";
    }
    outputfile<<endl;
    for(int ncut = 0 ; ncut < Ncut ; ncut ++){
        outputfile<<"Num "<<Cuttag[ncut]<<",";
        for(int nsample = 0 ; nsample < Nsample ; nsample ++){
            outputfile<<CutNum[nsample][ncut]<<",";
        }
        outputfile<<endl;
    }
    for(int ncut = 0 ; ncut < Ncut ; ncut ++){
        outputfile<<"Err "<<Cuttag[ncut]<<",";
        for(int nsample = 0 ; nsample < Nsample ; nsample ++){
            outputfile<<CutErr[nsample][ncut]<<",";
        }
        outputfile<<endl;
    }
    outputfile.close();











    outputfile.open("linuxtable_group.txt",ios::out);
    outputfile<<"num  "<<setw(maxlength + 3)<<left<<"Cut Name"<<"   ";
    for(int ngroup = 0 ; ngroup < Ngroup ; ngroup ++){
        outputfile<<setw(20)<<Groupname[ngroup];
    }
    outputfile<<endl;
    for(int ncut = 0 ; ncut < Ncut ; ncut ++){
        outputfile<<setw(4)<<left<<ncut<<" "<<setw(maxlength + 3)<<left<<Cuttag[ncut]<<"   ";
        for(int ngroup = 0 ; ngroup < Ngroup ; ngroup ++){
            outputfile<<setw(8)<<left<<GroupCutNum[ngroup][ncut]<<" +- "<<setw(8)<<left<<GroupCutErr[ngroup][ncut]<<"    ";
        }
        outputfile<<endl;
    }
    outputfile.close();

    outputfile.open("exceltable_group.txt",ios::out);
    outputfile<<"Cut Name"<<",";
    for(int ngroup = 0 ; ngroup < Ngroup ; ngroup ++){
        outputfile<<Groupname[ngroup]<<",";
    }
    outputfile<<endl;
    for(int ncut = 0 ; ncut < Ncut ; ncut ++){
        outputfile<<Cuttag[ncut]<<",";
        for(int ngroup = 0 ; ngroup < Ngroup ; ngroup ++){
            outputfile<<GroupCutNum[ngroup][ncut]<<" +- "<<GroupCutErr[ngroup][ncut]<<",";
        }
        outputfile<<endl;
    }
    outputfile.close();

    outputfile.open("exceltable_avi.txt",ios::out);
    outputfile<<"Cut Name"<<",";
    for(int ngroup = 0 ; ngroup < Ngroup ; ngroup ++){
        outputfile<<Groupname[ngroup]<<",";
    }
    outputfile<<endl;
    for(int ncut = 0 ; ncut < Ncut ; ncut++){
        outputfile<<Cuttag[ncut]<<",";
        for(int ngroup = 0 ; ngroup < Ngroup ; ngroup++){
            int ncpow = 3;
            int nepow = 2;
            int Cpow = 0;
            int Epow = 0;
            double Ccontent = fabs(GroupCutNum[ngroup][ncut]);
            double Cerror = fabs(GroupCutErr[ngroup][ncut]);
            if(Ccontent != 0){
                while(Ccontent > 10){
                    Ccontent = Ccontent / 10;
                    Cpow += 1;
                }
                while (Ccontent < 1){
                    Ccontent = Ccontent * 10;
                    Cpow -= 1;
                }
            }
            if(Cerror != 0){
                while(Cerror > 10){
                    Cerror = Cerror / 10;
                    Epow += 1;
                }
                while(Cerror < 1){
                    Cerror = Cerror * 10;
                    Epow -= 1;
                }
            }
            int int_content = static_cast<int>(std::round(GroupCutNum[ngroup][ncut] * pow(10.0, (ncpow - Cpow - 1))));
            double int_error = static_cast<int>(std::round(GroupCutErr[ngroup][ncut] * pow(10.0, (nepow - Epow -1))));
            double content = (double)(int_content);
            double error = (double)(int_error);
            content = content / pow(10.0,(ncpow - Cpow -1));
            error = error / pow(10.0,(nepow-Epow-1));
            outputfile<<content<<"+-"<<error<<",";
        }
        outputfile<<endl;
    }
    outputfile.close();

    outputfile.open("exceltable_detail_group.txt",ios::out);
    outputfile<<"Cut Name"<<",";
    for(int ngroup = 0 ; ngroup < Ngroup ; ngroup ++){
        outputfile<<Groupname[ngroup]<<",";
    }
    outputfile<<endl;
    for(int ncut = 0 ; ncut < Ncut ; ncut ++){
        outputfile<<"Num "<<Cuttag[ncut]<<",";
        for(int ngroup = 0 ; ngroup < Ngroup ; ngroup ++){
            outputfile<<GroupCutNum[ngroup][ncut]<<",";
        }
        outputfile<<endl;
    }
    for(int ncut = 0 ; ncut < Ncut ; ncut ++){
        outputfile<<"Err "<<Cuttag[ncut]<<",";
        for(int ngroup = 0 ; ngroup < Ngroup ; ngroup ++){
            outputfile<<GroupCutErr[ngroup][ncut]<<",";
        }
        outputfile<<endl;
    }
    outputfile.close();






    


}
