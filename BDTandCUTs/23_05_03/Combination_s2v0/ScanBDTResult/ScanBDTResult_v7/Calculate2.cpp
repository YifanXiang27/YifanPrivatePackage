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


void Calculate2(){
    TFile *filesig = TFile::Open("PlotResult/Sig.root");
    TFile *filebkg = TFile::Open("PlotResult/allbkg.root");

    TH3D *P_sig_BDT_HS_WS = (TH3D*)filesig->Get("P_BDT_HS_WS_AB");
    TH3D *P_bkg_BDT_HS_WS = (TH3D*)filebkg->Get("P_BDT_HS_WS_AB");


    TFile *writefile = new TFile("PlotResult/compare.root","RECREATE");
    TH3D *S_sig_BDT_HS_WS = new TH3D("S_sig_BDT_HS_WS","S_sig_BDT_HS_WS",20,0.5,1,30,0.7,1,30,0.7,1);
    TH3D *S_bkg_BDT_HS_WS = new TH3D("S_bkg_BDT_HS_WS","S_bkg_BDT_HS_WS",20,0.5,1,30,0.7,1,30,0.7,1);
    TH3D *P_Lsig_BDT_HS_WS = new TH3D("P_Lsig_BDT_HS_WS","P_Lsig_BDT_HS_WS",20,0.5,1,30,0.7,1,30,0.7,1);
    TH3D *P_Ratio_BDT_HS_WS = new TH3D("P_Ratio_BDT_HS_WS","P_Ratio_BDT_HS_WS",20,0.5,1,30,0.7,1,30,0.7,1);
    int NbinsX = 0;
    int NbinsY = 0;
    int NbinsZ = 0;
    NbinsX = P_sig_BDT_HS_WS->GetXaxis()->GetNbins();
    NbinsY = P_sig_BDT_HS_WS->GetYaxis()->GetNbins();
    NbinsZ = P_sig_BDT_HS_WS->GetZaxis()->GetNbins();

    int MidxXLsig = -999;
    int MidxYLsig = -999;
    int MidxZLsig = -999;

    double MaxLsigs = 0;
    double MaxLsigb = 0;

    double MaxLsig = -999;

    int MidxXRatio = -999;
    int MidxYRatio = -999;
    int MidxZRatio = -999;

    double MaxRatios = 0;
    double MaxRatiob = 0;

    double MaxRatio = -999;

    for(int ii = 0 ; ii < NbinsX ; ii ++){
        for(int jj = 0 ; jj < NbinsY ; jj ++){
            for(int kk = 0 ; kk < NbinsZ ; kk ++){
                double inte_s = 0;
                double inte_b = 0;
                double inte_es = 0;
                double inte_eb = 0;
                for(int xx = ii ; xx < NbinsX ; xx ++){
                    for(int yy = jj ; yy < NbinsY ; yy++){
                        for(int zz = kk ; zz < NbinsZ  ; zz ++){
                            inte_s += P_sig_BDT_HS_WS->GetBinContent(xx+1,yy+1,zz+1);
                            inte_es += P_sig_BDT_HS_WS->GetBinError(xx+1,yy+1,zz+1) * P_sig_BDT_HS_WS->GetBinError(xx+1,yy+1,zz+1);
                            inte_b += P_bkg_BDT_HS_WS->GetBinContent(xx+1,yy+1,zz+1);
                            inte_eb += P_bkg_BDT_HS_WS->GetBinError(xx+1,yy+1,zz+1) * P_bkg_BDT_HS_WS->GetBinError(xx+1,yy+1,zz+1);
                        }
                    }
                }
                S_sig_BDT_HS_WS->SetBinContent(ii+1,jj+1,kk+1,inte_s);
                S_sig_BDT_HS_WS->SetBinError(ii+1,jj+1,kk+1,sqrt(inte_es));
                S_bkg_BDT_HS_WS->SetBinContent(ii+1,jj+1,kk+1,inte_b);
                S_bkg_BDT_HS_WS->SetBinError(ii+1,jj+1,kk+1,sqrt(inte_eb));
            }
        }
    }


    for(int ii = 0 ; ii < NbinsX ; ii ++){
        for(int jj = 0 ; jj < NbinsY ; jj ++){
            for(int kk = 0 ; kk < NbinsZ ; kk ++){
                double s = S_sig_BDT_HS_WS->GetBinContent(ii+1,jj+1,kk+1);
                double se = S_sig_BDT_HS_WS->GetBinError(ii+1,jj+1,kk+1);
                double b = S_bkg_BDT_HS_WS->GetBinContent(ii+1,jj+1,kk+1);
                double be = S_bkg_BDT_HS_WS->GetBinError(ii+1,jj+1,kk+1);
                double inside = (s + b) * TMath::Log((1.0 + s / b)) - s;
                double Lsig = sqrt(2 * inside);
                double Ratio = s / b;
                double ERatio = (se/b) * (se/b) + (s * be / (b*b)) * (s * be / (b*b));
                ERatio = sqrt(ERatio);
                P_Lsig_BDT_HS_WS->SetBinContent(ii+1,jj+1,kk+1,Lsig);
                P_Ratio_BDT_HS_WS->SetBinContent(ii+1,jj+1,kk+1,Ratio);
                P_Ratio_BDT_HS_WS->SetBinError(ii+1,jj+1,kk+1,ERatio);
//                cout<<ii<<"   "<<jj<<"   "<<kk<<"   "<<""   <<s<<"   "<<b<<"   "<<Lsig<<"   "<<Ratio<<endl;

                if(Lsig > MaxLsig && b > 0.5){
                    MaxLsig = Lsig;
                    MidxXLsig = ii;
                    MidxYLsig = jj;
                    MidxZLsig = kk;
                    MaxLsigs = s;
                    MaxLsigb = b;
                }
                if(Ratio > MaxRatio && b > 0.5){
                    MaxRatio = Ratio;
                    MidxXRatio = ii;
                    MidxYRatio = jj;
                    MidxZRatio = kk;
                    MaxRatios = s;
                    MaxRatiob = b;
                }
            }
        }
    }
    cout<<MaxLsig<<"   at :"<<MidxXLsig<<"   "<<MidxYLsig<<"   "<<MidxZLsig<<"   s = "<<MaxLsigs<<"   b = "<<MaxLsigb<<endl;
    cout<<MaxRatio<<"   at :"<<MidxXRatio<<"   "<<MidxYRatio<<"   "<<MidxZRatio<<"   s = "<<MaxRatios<<"   b = "<<MaxRatiob<<endl;
    writefile->cd();
    writefile->Write();
    writefile->Close();

}
