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

    TFile *filebkg = TFile::Open("PlotResult/allbkg.root");
    TFile *filesig = TFile::Open("PlotResult/allsig.root");

    TH2D *P_Hmass_BDT_bkg_sum = (TH2D*)filebkg->Get("P_Hmass_BDT_sum");
    TH2D *P_Hscore_BDT_bkg_sum = (TH2D*)filebkg->Get("P_Hscore_BDT_sum");
    TH2D *P_Wmass_BDT_bkg_sum = (TH2D*)filebkg->Get("P_Wmass_BDT_sum");
    TH2D *P_Wscore_BDT_bkg_sum = (TH2D*)filebkg->Get("P_Wscore_BDT_sum");
    TH2D *P_ST_BDT_bkg_sum = (TH2D*)filebkg->Get("P_ST_BDT_sum");
    TH2D *P_Mlb_BDT_bkg_sum = (TH2D*)filebkg->Get("P_Mlb_BDT_sum");

    TH2D *P_Hmass_BDT_sig_sum = (TH2D*)filesig->Get("P_Hmass_BDT_sum");
    TH2D *P_Hscore_BDT_sig_sum = (TH2D*)filesig->Get("P_Hscore_BDT_sum");
    TH2D *P_Wmass_BDT_sig_sum = (TH2D*)filesig->Get("P_Wmass_BDT_sum");
    TH2D *P_Wscore_BDT_sig_sum = (TH2D*)filesig->Get("P_Wscore_BDT_sum");
    TH2D *P_ST_BDT_sig_sum = (TH2D*)filesig->Get("P_ST_BDT_sum");
    TH2D *P_Mlb_BDT_sig_sum = (TH2D*)filesig->Get("P_Mlb_BDT_sum");

    TFile *wfile = new TFile("PlotResult/LSig.root","RECREATE");
    //initialize all the 2D histogram for Lsig, remove the bkg tag
    TH2D *P_Hmass_BDT_Lsig;
    TH2D *P_Hscore_BDT_Lsig;
    TH2D *P_Wmass_BDT_Lsig;
    TH2D *P_Wscore_BDT_Lsig;
    TH2D *P_ST_BDT_Lsig;
    TH2D *P_Mlb_BDT_Lsig;

    //define all the 2D histogram for Lsig(by Clone)
    P_Hmass_BDT_Lsig = (TH2D*)P_Hmass_BDT_sig_sum->Clone("P_Hmass_BDT_Lsig");
    P_Hscore_BDT_Lsig = (TH2D*)P_Hscore_BDT_sig_sum->Clone("P_Hscore_BDT_Lsig");
    P_Wmass_BDT_Lsig = (TH2D*)P_Wmass_BDT_sig_sum->Clone("P_Wmass_BDT_Lsig");
    P_Wscore_BDT_Lsig = (TH2D*)P_Wscore_BDT_sig_sum->Clone("P_Wscore_BDT_Lsig");
    P_ST_BDT_Lsig = (TH2D*)P_ST_BDT_sig_sum->Clone("P_ST_BDT_Lsig");
    P_Mlb_BDT_Lsig = (TH2D*)P_Mlb_BDT_sig_sum->Clone("P_Mlb_BDT_Lsig");

    //Calculate Lsig for P_Hmass_BDT_Lsig
    for(int cir1 = 0 ; cir1 < P_Hmass_BDT_Lsig->GetNbinsX() ; cir1++){
        for(int cir2 = 0 ; cir2 < P_Hmass_BDT_Lsig->GetNbinsY() ; cir2++){
            double b = P_Hmass_BDT_bkg_sum->GetBinContent(cir1+1,cir2+1);
            double s = P_Hmass_BDT_sig_sum->GetBinContent(cir1+1,cir2+1);
            double Lsig = 0;
            if(s > 0.0001 && b > 0.0001 && s < 1000){
                double inside = (s + b) * TMath::Log((1.0 + s / b)) - s;
                Lsig = sqrt(2 * inside);
            }
            P_Hmass_BDT_Lsig->SetBinContent(cir1+1,cir2+1,Lsig);
        }
    }

    //Calculate Lsig for P_Hscore_BDT_Lsig
    for(int cir1 = 0 ; cir1 < P_Hscore_BDT_Lsig->GetNbinsX() ; cir1++){
        for(int cir2 = 0 ; cir2 < P_Hscore_BDT_Lsig->GetNbinsY() ; cir2++){
            double b = P_Hscore_BDT_bkg_sum->GetBinContent(cir1+1,cir2+1);
            double s = P_Hscore_BDT_sig_sum->GetBinContent(cir1+1,cir2+1);
            double Lsig = 0;
            if(s > 0.0001 && b > 0.0001 && s < 1000){
                double inside = (s + b) * TMath::Log((1.0 + s / b)) - s;
                Lsig = sqrt(2 * inside);
            }
            P_Hscore_BDT_Lsig->SetBinContent(cir1+1,cir2+1,Lsig);
        }
    }

    //Calculate Lsig for P_Wmass_BDT_Lsig
    for(int cir1 = 0 ; cir1 < P_Wmass_BDT_Lsig->GetNbinsX() ; cir1++){
        for(int cir2 = 0 ; cir2 < P_Wmass_BDT_Lsig->GetNbinsY() ; cir2++){
            double b = P_Wmass_BDT_bkg_sum->GetBinContent(cir1+1,cir2+1);
            double s = P_Wmass_BDT_sig_sum->GetBinContent(cir1+1,cir2+1);
            double Lsig = 0;
            if(s > 0.0001 && b > 0.0001 && s < 1000){
                double inside = (s + b) * TMath::Log((1.0 + s / b)) - s;
                Lsig = sqrt(2 * inside);
            }
            P_Wmass_BDT_Lsig->SetBinContent(cir1+1,cir2+1,Lsig);
        }
    }

    //Calculate Lsig for P_Wscore_BDT_Lsig
    for(int cir1 = 0 ; cir1 < P_Wscore_BDT_Lsig->GetNbinsX() ; cir1++){
        for(int cir2 = 0 ; cir2 < P_Wscore_BDT_Lsig->GetNbinsY() ; cir2++){
            double b = P_Wscore_BDT_bkg_sum->GetBinContent(cir1+1,cir2+1);
            double s = P_Wscore_BDT_sig_sum->GetBinContent(cir1+1,cir2+1);
            double Lsig = 0;
            if(s > 0.0001 && b > 0.0001 && s < 1000){
                double inside = (s + b) * TMath::Log((1.0 + s / b)) - s;
                Lsig = sqrt(2 * inside);
            }
            P_Wscore_BDT_Lsig->SetBinContent(cir1+1,cir2+1,Lsig);
        }
    }

    //Calculate Lsig for P_ST_BDT_Lsig
    for(int cir1 = 0 ; cir1 < P_ST_BDT_Lsig->GetNbinsX() ; cir1++){
        for(int cir2 = 0 ; cir2 < P_ST_BDT_Lsig->GetNbinsY() ; cir2++){
            double b = P_ST_BDT_bkg_sum->GetBinContent(cir1+1,cir2+1);
            double s = P_ST_BDT_sig_sum->GetBinContent(cir1+1,cir2+1);
            double Lsig = 0;
            if(s > 0.0001 && b > 0.0001 && s < 1000){
                double inside = (s + b) * TMath::Log((1.0 + s / b)) - s;
                Lsig = sqrt(2 * inside);
            }
            P_ST_BDT_Lsig->SetBinContent(cir1+1,cir2+1,Lsig);
        }
    }

    //Calculate Lsig for P_Mlb_BDT_Lsig
    for(int cir1 = 0 ; cir1 < P_Mlb_BDT_Lsig->GetNbinsX() ; cir1++){
        for(int cir2 = 0 ; cir2 < P_Mlb_BDT_Lsig->GetNbinsY() ; cir2++){
            double b = P_Mlb_BDT_bkg_sum->GetBinContent(cir1+1,cir2+1);
            double s = P_Mlb_BDT_sig_sum->GetBinContent(cir1+1,cir2+1);
            double Lsig = 0;
            if(s > 0.0001 && b > 0.0001 && s < 1000){
                double inside = (s + b) * TMath::Log((1.0 + s / b)) - s;
                Lsig = sqrt(2 * inside);
            }
            P_Mlb_BDT_Lsig->SetBinContent(cir1+1,cir2+1,Lsig);
        }
    }




    wfile->cd();
    wfile->Write();
    wfile->Close();

}