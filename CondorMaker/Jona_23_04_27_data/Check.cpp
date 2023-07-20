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
void Check(){
    std::string readfile;
    ifstream infile;
    infile.open("list.txt",ios::in);

    ofstream outfile;
    outfile.open("Check.sh",ios::out);

    string matchgroup[100];
    int   matchexist[100][4] = {0};

    //cout<<regex_match("123",regex("\\d+"))<<endl;
    string year;
    string tag;
    int index  = 0;
    outfile<<"declare -i NDAS"<<endl;
    while(infile>>readfile){
        
        int idx = -1;
        if(regex_match(readfile,regex("(.*)2016APV"))){
            year = "2016APV";
            tag = readfile.substr(0,readfile.length()-7);
            for(int i = 0 ; i < index ; i++){
                if(matchgroup[i] == tag){
                    if(matchexist[i][0] == 1) cout<<"Error! index  2016 APV already exist !" << readfile<<"   "<<tag<<endl;
                    matchexist[i][0] = 1;
                    idx = i;
                }
            }
            if(idx == -1){
                matchgroup[index] = tag;
                matchexist[index][0] = 1;
                index += 1;
            }
        }
        else if(regex_match(readfile,regex("(.*)2016"))){
            year = "2016";
            tag = readfile.substr(0,readfile.length()-4);
            for(int i = 0 ; i < index ; i++){
                if(matchgroup[i] == tag){
                    if(matchexist[i][1] == 1) cout<<"Error! index  2016 already exist !" << readfile<<"   "<<tag<<endl;
                    matchexist[i][1] = 1;
                    idx = i;
                }
            }
            if(idx == -1){
                matchgroup[index] = tag;
                matchexist[index][1] = 1;
                index += 1;
            }
        }
        else if(regex_match(readfile,regex("(.*)2017"))){
            year = "2017";
            tag = readfile.substr(0,readfile.length()-4);
            for(int i = 0 ; i < index ; i++){
                if(matchgroup[i] == tag){
                    if(matchexist[i][2] == 1) cout<<"Error! index  2016 already exist !" << readfile<<"   "<<tag<<endl;
                    matchexist[i][2] = 1;
                    idx = i;
                }
            }
            if(idx == -1){
                matchgroup[index] = tag;
                matchexist[index][2] = 1;
                index += 1;
            }
        }
        else if(regex_match(readfile,regex("(.*)2018"))){
            year = "2018";
            tag = readfile.substr(0,readfile.length()-4);
            for(int i = 0 ; i < index ; i++){
                if(matchgroup[i] == tag){
                    if(matchexist[i][3] == 1) cout<<"Error! index  2016 already exist !" << readfile<<"   "<<tag<<endl;
                    matchexist[i][3] = 1;
                    idx = i;
                }
            }
            if(idx == -1){
                matchgroup[index] = tag;
                matchexist[index][3] = 1;
                index += 1;
            }
        }
        outfile<<"NDAS=$(grep -o 'DAS' initialfiles/"<<readfile<<".txt | wc -l)"<<endl;
        outfile<<"Ntag=$(grep -o '"<<tag<<"' initialfiles/"<<readfile<<".txt | wc -l)"<<endl;
        outfile<<"NTUN=$(grep -o 'TuneCP5' initialfiles/"<<readfile<<".txt | wc -l)"<<endl;
        
        if(year == "2016APV") year = "RunIISummer20UL16NanoAODAPV";
        if(year == "2016")    year = "RunIISummer20UL16NanoAOD";
        if(year == "2017")    year = "RunIISummer20UL17NanoAOD";
        if(year == "2018")    year = "RunIISummer20UL18NanoAOD";
        outfile<<"Nyear=$(grep -o '"<<year<<"' initialfiles/"<<readfile<<".txt | wc -l)"<<endl;

        outfile<<"if [ $NDAS -ne 1 ]"<<endl;
        outfile<<"  then"<<endl;
        outfile<<"    echo \"ERROR! "<<readfile<<" has more than 1 DAS in the file!\""<<endl;
        outfile<<"fi"<<endl;

        outfile<<"if [ $Ntag -ne $NTUN ]"<<endl;
        outfile<<"  then"<<endl;
        outfile<<"    echo \"ERROR! "<<readfile<<" has strage files in the file!\""<<endl;
        outfile<<"fi"<<endl;

        outfile<<"if [ $Ntag -ne $Nyear ]"<<endl;
        outfile<<"  then"<<endl;
        outfile<<"    echo \"ERROR! "<<readfile<<" has strage files in the file!\""<<endl;
        outfile<<"    echo \"ERROR! "<<readfile<<" has $Ntag $Nyear in the file!\""<<endl;
        outfile<<"fi"<<endl;
    }

    for(int i = 0 ; i < index ; i ++){
        for(int j = 0 ; j < 4 ; j ++){
            if(matchexist[i][j] != 1) cout<<matchgroup[index]<<"   "<<j<<endl;
        }
    }


}
