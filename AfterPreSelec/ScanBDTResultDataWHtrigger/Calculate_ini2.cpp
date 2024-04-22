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

    TFile *file = TFile::Open(argv[1]);

    TTree *fChain = (TTree *)file->Get("totalEvents");
    TTree *tree;
    tree = fChain;

    ofstream outfile;
    outfile.open("outputtable.txt",ios::out);
    ofstream outfilereadpre;
    outfilereadpre.open("readpredata.txt",ios::out);
    ofstream outfilereaddiff;
    outfilereaddiff.open("readdiffdata.txt",ios::out);

    //TMVA::Reader *reader = new TMVA::Reader("!Color:!Silent");

    double weighted_number = 0;
    double weighted_error = 0;
    double weighted_number_A = 0;
    double weighted_error_A = 0;
    double weighted_number_B = 0;
    double weighted_error_B = 0;
    double weighted_number_C = 0;
    double weighted_error_C = 0;
    double weighted_number_D = 0;
    double weighted_error_D = 0;
    double weighted_number_passBDT = 0;
    double weighted_error_passBDT = 0;
    double weighted_number_passBF = 0;
    double weighted_error_passBF = 0;
    double weighted_number_passboth = 0;
    double weighted_error_passboth = 0;


    Float_t Hbbscore;
    Float_t Hbbmass;
    Float_t Hbbmsoftdrop;
    Float_t Hbbtau21;
    Float_t Hbbtau32;
    Float_t Hbbtau1;
    Float_t Hbbtau2;
    Float_t Hbbtau3;
    Float_t HbbPt;

    Float_t Wjetscore;
    Float_t Wjetmass;
    Float_t Wjetmsoftdrop;
    Float_t Wjettau21;
    Float_t Wjettau32;
    Float_t Wjettau1;
    Float_t Wjettau2;
    Float_t Wjettau3;
    Float_t WjetPt;

    Float_t Zjetscore;
    Float_t Zjetmass;
    Float_t Zjetmsoftdrop;
    Float_t Zjettau21;
    Float_t Zjettau32;
    Float_t Zjettau1;
    Float_t Zjettau2;
    Float_t Zjettau3;
    Float_t ZjetPt;

    Float_t Mlbminloose;

    Float_t secfatjetscore;
    Float_t secfatjetmass;
    Float_t secfatjetmsoftdrop;
    Float_t secfatjettau21;
    Float_t secfatjettau32;
    Float_t secfatjettau1;
    Float_t secfatjettau2;
    Float_t secfatjettau3;
    Float_t secfatjetPt;

    Float_t leptonpt;
    Float_t VBSMjj;
    Float_t VBSdetajj;
    Float_t VBSdphijj;
    Float_t VBSPtjj;
    Float_t trans_E;
    Float_t MET;
    Float_t weight;

    Float_t divide;

    tree->SetBranchAddress("Hbbscore",&Hbbscore);
    tree->SetBranchAddress("Hbbmass",&Hbbmass);
    tree->SetBranchAddress("Hbbmsoftdrop",&Hbbmsoftdrop);
    tree->SetBranchAddress("Hbbtau21",&Hbbtau21);
    tree->SetBranchAddress("Hbbtau32",&Hbbtau32);
    tree->SetBranchAddress("Hbbtau1",&Hbbtau1);
    tree->SetBranchAddress("Hbbtau2",&Hbbtau2);
    tree->SetBranchAddress("Hbbtau3",&Hbbtau3);
    tree->SetBranchAddress("HbbPt",&HbbPt);

    tree->SetBranchAddress("Wjetscore",&Wjetscore);
    tree->SetBranchAddress("Wjetmass",&Wjetmass);
    tree->SetBranchAddress("Wjetmsoftdrop",&Wjetmsoftdrop);
    tree->SetBranchAddress("Wjettau21",&Wjettau21);
    tree->SetBranchAddress("Wjettau32",&Wjettau32);
    tree->SetBranchAddress("Wjettau1",&Wjettau1);
    tree->SetBranchAddress("Wjettau2",&Wjettau2);
    tree->SetBranchAddress("Wjettau3",&Wjettau3);
    tree->SetBranchAddress("WjetPt",&WjetPt);

    tree->SetBranchAddress("Zjetscore",&Zjetscore);
    tree->SetBranchAddress("Zjetmass",&Zjetmass);
    tree->SetBranchAddress("Zjetmsoftdrop",&Zjetmsoftdrop);
    tree->SetBranchAddress("Zjettau21",&Zjettau21);
    tree->SetBranchAddress("Zjettau32",&Zjettau32);
    tree->SetBranchAddress("Zjettau1",&Zjettau1);
    tree->SetBranchAddress("Zjettau2",&Zjettau2);
    tree->SetBranchAddress("Zjettau3",&Zjettau3);
    tree->SetBranchAddress("ZjetPt",&ZjetPt);

    tree->SetBranchAddress("Mlbminloose",&Mlbminloose);
    tree->SetBranchAddress("secfatjetscore",&secfatjetscore);
    tree->SetBranchAddress("secfatjetmass",&secfatjetmass);
    tree->SetBranchAddress("secfatjetmsoftdrop",&secfatjetmsoftdrop);
    tree->SetBranchAddress("secfatjettau21",&secfatjettau21);
    tree->SetBranchAddress("secfatjettau32",&secfatjettau32);
    tree->SetBranchAddress("secfatjettau1",&secfatjettau1);
    tree->SetBranchAddress("secfatjettau2",&secfatjettau2);
    tree->SetBranchAddress("secfatjettau3",&secfatjettau3);
    tree->SetBranchAddress("secfatjetPt",&secfatjetPt);

    tree->SetBranchAddress("leptonpt",&leptonpt);
    tree->SetBranchAddress("VBSMjj",&VBSMjj);
    tree->SetBranchAddress("VBSdetajj",&VBSdetajj);
    tree->SetBranchAddress("VBSdphijj",&VBSdphijj);
    tree->SetBranchAddress("VBSPtjj",&VBSPtjj);
    tree->SetBranchAddress("trans_E",&trans_E);
    tree->SetBranchAddress("MET",&MET);
    tree->SetBranchAddress("weight",&weight);
    tree->SetBranchAddress("divide",&divide);
    int Nentries = tree->GetEntries();


    TMVA::Reader *readerAB = new TMVA::Reader("!Color:!Silent");
    readerAB->AddVariable("Hbbmass",&Hbbmass);
    readerAB->AddVariable("Hbbtau21",&Hbbtau21);
    readerAB->AddVariable("secfatjetmass",&secfatjetmass);
    readerAB->AddVariable("secfatjettau21",&secfatjettau21);
//    readerAB->AddVariable("Mlbminloose",&Mlbminloose);
    readerAB->AddVariable("trans_E",&trans_E);
    readerAB->BookMVA("BDT","./dataset_AB/weights/TMVAClassification_BDT.weights.xml");

    TMVA::Reader *readerBA = new TMVA::Reader("!Color:!Silent");
    readerBA->AddVariable("Hbbmass",&Hbbmass);
    readerBA->AddVariable("Hbbtau21",&Hbbtau21);
    readerBA->AddVariable("secfatjetmass",&secfatjetmass);
    readerBA->AddVariable("secfatjettau21",&secfatjettau21);
//    readerBA->AddVariable("Mlbminloose",&Mlbminloose);
    readerBA->AddVariable("trans_E",&trans_E);
    readerBA->BookMVA("BDT","./dataset_BA/weights/TMVAClassification_BDT.weights.xml");
    //readerBA->BookMVA("BDT","./dataset_AB/weights/TMVAClassification_BDT.weights.xml");


    //Double_t mvaValue = readerAB->EvaluateMVA("BDT");

    for(int ii = 0 ; ii < Nentries ; ii ++){
        tree->GetEntry(ii,0);
        if(divide > 0.5) continue;

        if(trans_E < 1000 ) continue;
        if(trans_E > 3000 ) continue;
        Double_t mvaValue;
        if(divide <= 0.5)
            mvaValue = readerBA->EvaluateMVA("BDT");
        else
            mvaValue = readerAB->EvaluateMVA("BDT");

        weighted_number += weight;
        weighted_error += (weight * weight);

        double mvacutvalue;
        mvacutvalue = MVACUTVALUE;
        if(mvaValue > mvacutvalue){
            weighted_number_passBDT += weight;
            weighted_error_passBDT += weight*weight;
        }
        if(trans_E > 1300 && Hbbscore > 0.92 && Wjetscore > 0.85 && Mlbminloose > 230){
            weighted_number_passBF += weight;
            weighted_error_passBF += weight*weight;
            if(mvaValue > mvacutvalue){
                weighted_number_passboth += weight;
                weighted_error_passboth += weight*weight;
            }
        }
        if(VBSMjj > 750 &&  fabs(VBSdetajj ) > 3){
        //if(fabs(VBSdetajj) > 4.3) {
        //if(VBSMjj > 850) {
        //if(fabs(VBSdetajj) > 4){
            if(mvaValue < mvacutvalue){
                weighted_number_B += weight;
                weighted_error_B += (weight * weight);   
            }else{
                weighted_number_A += weight;
                weighted_error_A += (weight * weight);   
            }
        }else{
            if(mvaValue < mvacutvalue){
                weighted_number_D += weight;
                weighted_error_D += (weight * weight);   
            }else{
                weighted_number_C += weight;
                weighted_error_C += (weight * weight);   
            }
        }



        if(VBSMjj >= 2000) VBSMjj = 1995;
        if(fabs(VBSdetajj) >= 10) VBSdetajj = 9.95;
        if(mvaValue <= 0.4) mvaValue = 0.401;
        else if(mvaValue >= 0.65) mvaValue = 0.6499;





    }




    cout<<"total :       "<<weighted_number<<"  "<<sqrt(weighted_error)<<endl;
    double R_DB = sqrt(weighted_error_B) / weighted_number_B;
    double R_DC = sqrt(weighted_error_C) / weighted_number_C;
    double R_DD = sqrt(weighted_error_D) / weighted_number_D;
    double R_DA = sqrt(R_DB * R_DB + R_DC * R_DC + R_DD * R_DD);
    double Pre_A = weighted_number_B * weighted_number_C  / weighted_number_D;
    double A_DA = R_DA * Pre_A;
    cout<<"Difference_RegionA   "<<fabs(Pre_A-weighted_number_A) / weighted_number_A<<"   "<<sqrt(R_DA * R_DA + weighted_error_A / (weighted_number_A * weighted_number_A))  * (Pre_A / weighted_number_A) <<endl;
    cout<<"Predicted_RegionA    "<<Pre_A<<"   "<<A_DA<<endl;
    //cout<<"pass BDT :  "<<weighted_number_passBDT<<"   "<<sqrt(weighted_error_passBDT)<<endl;
    //cout<<"pass BF :  "<<weighted_number_passBF<<"   "<<sqrt(weighted_error_passBF)<<endl;
    //cout<<"pass both :  "<<weighted_number_passboth<<"   "<<sqrt(weighted_error_passboth)<<endl;
    cout<<"RegionA              "<<weighted_number_A<<"  "<<sqrt(weighted_error_A)<<endl;
    cout<<"RegionB              "<<weighted_number_B<<"  "<<sqrt(weighted_error_B)<<endl;
    cout<<"RegionC              "<<weighted_number_C<<"  "<<sqrt(weighted_error_C)<<endl;
    cout<<"RegionD              "<<weighted_number_D<<"  "<<sqrt(weighted_error_D)<<endl;



    outfile<<setprecision(3)<<(Pre_A-weighted_number_A) / weighted_number_A<<" +- "<<sqrt(R_DA * R_DA + weighted_error_A / (weighted_number_A * weighted_number_A))  * (Pre_A / weighted_number_A) <<endl;
    outfile<<Pre_A<<" +- "<<A_DA<<endl;
    outfile<<weighted_number_A<<" +- "<<sqrt(weighted_error_A)<<endl;
    outfile<<weighted_number_B<<" +- "<<sqrt(weighted_error_B)<<endl;
    outfile<<weighted_number_C<<" +- "<<sqrt(weighted_error_C)<<endl;
    outfile<<weighted_number_D<<" +- "<<sqrt(weighted_error_D)<<endl;

    outfilereadpre<<Pre_A<<endl;
    outfilereaddiff<<(Pre_A-weighted_number_A) / weighted_number_A<<endl;

    outfile.close();
    outfilereadpre.close();
    outfilereaddiff.close();

}
