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
    cout<<"*         CheckList Start                   *"<<endl;
    cout<<"*********************************************"<<endl;


    std::string fileroute(argv[1]);
    ifstream infile;
    ofstream outerrfile;
    ofstream outfile1;
    ofstream outfile2;

    std::string readfilename(argv[2]);
    infile.open(readfilename);
    outerrfile.open("ErrMsgGetlist.txt",ios::out);
    outfile1.open("Output1Getlist.txt",ios::out);
    outfile2.open("Output2Getlist.txt",ios::out);

    string TagName[200];
    int    TagYear[200] = {0};
    int    TagCount = 0;
    string read;
    while(infile>>read){
        string samplename = read;
        if(samplename.find("_TuneCP5") == string::npos){
            outerrfile<<"Sample name not include TuneCP5 : "<<endl;
            outerrfile<<samplename<<endl;
            continue;
        }
        if(samplename.find("MINIGEN") != string::npos){
            continue;
        }
        int position = samplename.find("_TuneCP5");
        std::string tagname = samplename.substr(0,position);
        bool ifduplicatetag = false;
        int  NDTag = -999;
        for(int ii = 0 ; ii < TagCount ; ii ++){
            if(tagname == TagName[ii]) {
                ifduplicatetag = true;
                NDTag = ii;
            }
        }
        if(!ifduplicatetag){
            NDTag = TagCount;
            TagName[NDTag] = tagname;
            TagCount ++;
        }
        if(samplename.find("RunIISummer20UL16NanoAODAPV") != string::npos){
            if((TagYear[NDTag] / 8) == 0){
                TagYear[NDTag] += 8;
                outfile1<<fileroute<<samplename<<"/,"<<tagname<<","<<"2016APV"<<endl;
                outfile2<<tagname<<"   "<<"2016APV"<<endl;
            }
            else
                outerrfile<<"find same tag file for "<<samplename<<endl;
        }
        else if(samplename.find("RunIISummer20UL16") != string::npos){
            if(((TagYear[NDTag]%8)/4) == 0){
                TagYear[NDTag] += 4;
                outfile1<<fileroute<<samplename<<"/,"<<tagname<<","<<"2016"<<endl;
                outfile2<<tagname<<"   "<<"2016"<<endl;
            }
            else
                outerrfile<<"find same tag file for "<<samplename<<endl;
        }
        else if(samplename.find("RunIISummer20UL17") != string::npos){
            if(((TagYear[NDTag]%4)/2) == 0){
                TagYear[NDTag] += 2;
                outfile1<<fileroute<<samplename<<"/,"<<tagname<<",2017"<<endl;
                outfile2<<tagname<<"   2017"<<endl;
            }
            else
                outerrfile<<"find same tag file for "<<samplename<<endl;
        }
        else if(samplename.find("RunIISummer20UL18") != string::npos){
            if(((TagYear[NDTag]%2)/1) == 0){
                TagYear[NDTag] += 1;
                outfile1<<fileroute<<samplename<<"/,"<<tagname<<",2018"<<endl;
                outfile2<<tagname<<"   2018"<<endl;
            }
            else
                outerrfile<<"find same tag file for "<<samplename<<endl;
        }
        else{
            outerrfile<<"cannot find the year"<<samplename<<endl;
        }
    }
    for(int ii = 0 ; ii < TagCount ; ii ++){
        if(TagYear[ii] != 15) outerrfile<<"sample "<<TagName[ii]<<" does not have full year : "<<TagYear[ii]<<endl;
    }

//    int position = samplename.find("_TuneCP5");
//    std::string tagname = samplename.substr(0,position);


    infile.close();
    outerrfile.close();
    outfile1.close();
    outfile2.close();

}
