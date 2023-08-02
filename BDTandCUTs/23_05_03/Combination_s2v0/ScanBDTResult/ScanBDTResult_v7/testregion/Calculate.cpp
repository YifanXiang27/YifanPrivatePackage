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

int main(int argc, char** argv){

    ifstream infile;
    infile.open("test.txt");

    ofstream outfile;
    outfile.open("table.txt");

    string read;
    string samplename;
    
    double content1,content2,content3,content4;
    double error1,error2,error3,error4;

    double dcontent1 = 0;
    double dcontent2 = 0;
    double dcontent3 = 0;
    double dcontent4 = 0;
    double derror1 = 0;
    double derror2 = 0;
    double derror3 = 0;
    double derror4 = 0;

    double dep1,dep2,dep3,dep4;

    int count = 0;
    
    while(infile>>read){
        //cout<<read<<endl;
        if (read == "SampleName") {
            count+= 1;
            infile>>samplename;
            continue;
        }
        if (read == "RegionA") {
            infile>>content1;
            infile>>error1;
            continue;
        }
        if (read == "RegionB") {
            infile>>content2;
            infile>>error2;
            continue;
        }
        if (read == "RegionC") {
            infile>>content3;
            infile>>error3;
            continue;
        }
        bool ifcontinue = false;
        if (read == "RegionD") {
            infile>>content4;
            infile>>error4;
            ifcontinue = true;
        }


        //cout<<count<<endl;
        if(count == 1){
            dcontent1 = content1;
            dcontent2 = content2;
            dcontent3 = content3;
            dcontent4 = content4;
            derror1 = error1;
            derror2 = error2;
            derror3 = error3;
            derror4 = error4;
            dep1 = derror1 / dcontent1;
            dep2 = derror2 / dcontent2;
            dep3 = derror3 / dcontent3;
            dep4 = derror4 / dcontent4;
        }
        if(!ifcontinue) continue;
        cout<<"Calculate begin: "<<endl;

        cout<<content3<<" +- "<<error3<<" * "<<content2<<" +- "<<error2<<endl;
        cout<<"---------------------------------------"<<endl;
        cout<<content4<<" +- "<<error4<<endl;


        double ep1 = error1 / content1;
        double ep2 = error2 / content2;
        double ep3 = error3 / content3;
        double ep4 = error4 / content4;

        double terror = ep2 * ep2 + ep3 * ep3 + ep4 * ep4;
        terror = sqrt(terror);

        double value = content2 * content3 / content4;
        terror = value * terror;
        cout<<value<<" +- "<<terror<<endl;
        //cout<<dcontent1<<"    "<<dcontent2<<"   "<<dcontent3<<"   "<<dcontent4<<endl;
        //cout<<derror1<<"    "<<derror2<<"   "<<derror3<<"   "<<derror4<<endl;

        double Terror = ep4*ep4 + dep3*dep3 + dep2*dep2 + 4*dep4 * dep4;
        Terror = sqrt(Terror);

        double Value = content4 * dcontent2 * dcontent3 / (dcontent4 * dcontent4);

        Terror = Terror * Value;

        cout<<Value<<"   "<<Terror<<endl;

        cout<<endl;

        outfile<<setprecision(3)<<samplename<<","<<content1<<" +- "<<error1<<",";
        outfile<<setprecision(3)<<content2<<" +- "<<error2<<",";
        outfile<<setprecision(3)<<content3<<" +- "<<error3<<",";
        outfile<<setprecision(3)<<content4<<" +- "<<error4<<",";
        outfile<<setprecision(3)<<value<<" +- "<<terror<<",";
        outfile<<setprecision(3)<<Value<<" +- "<<Terror<<endl;
        
    }




}
