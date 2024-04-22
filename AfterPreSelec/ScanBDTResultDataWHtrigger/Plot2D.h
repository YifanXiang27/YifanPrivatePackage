#include <TCanvas.h>
#include <TF1.h>
#include <TFile.h>
#include <TH1D.h>
#include <TLegend.h>
#include <TGraph.h>
#include <TROOT.h>
#include <TStyle.h>
#include <iostream>

using namespace std;

class Plot2D{
    public:
        bool DoSave;
        TString savefilename;
        bool DoSetXRange;
        bool DoSetYRange;
        bool DoSetZRange;
        bool DoRebinX;
        bool DoRebinY;
        bool DoSetTitle;

        double minX;
        double maxX;
        double minZ=0;
        double maxZ=0;
        double minY=0;
        double maxY=0;

        int    npow = 3;

        int    RebinNumberX = 1;
        int    RebinNumberY = 1;

        TString filename;
        TString plotname;
        TString Headername;
        TString Xtitle;
        TString Ytitle;
        TString Ptitle;

        //Instructions same as Plot1D
        //but you can only draw 1 plots for 2D plots
        
        Plot2D(const char *TitleX, const char *TitleY);
        virtual ~Plot2D();
        virtual void SetInputName(const char *Filename, const char *Plotname);
        virtual void SetXRebin(int rebin = -999);
        virtual void SetYRebin(int rebin = -999);
        virtual void SetXRange(double min, double max);
        virtual void SetYRange(double min, double max);
        virtual void SetZRange(double min, double max);
        virtual void SetPlotTitle(const char *title);
        virtual void SetSave(const char *Savefilename);
        virtual void DrawFigure();
};

Plot2D::~Plot2D(){
}


Plot2D::Plot2D(const char *TitleX, const char *TitleY){
    DoSave = false;
    DoSetXRange = false;
    DoSetYRange = false;
    DoRebinX = false;
    DoRebinY = false;
    DoSetTitle = false;

    Xtitle = (TString)TitleX;
    Ytitle = (TString)TitleY;
}

void Plot2D::SetInputName(const char *Filename, const char *Plotname){
    filename = (TString)Filename;
    plotname = (TString)Plotname;
}

void Plot2D::SetXRebin(int rebin = -999){
    if(rebin < 0){
        cout<<"rebin number wrong"<<endl;
        return;
    }
    if(rebin == 1){
        cout<<"rebin number = 1"<<endl;
        return;
    }
    RebinNumberX = rebin;
    DoRebinX = true;
    
}

void Plot2D::SetYRebin(int rebin = -999){
    if(rebin < 0){
        cout<<"rebin number wrong"<<endl;
        return;
    }
    if(rebin == 1){
        cout<<"rebin number = 1"<<endl;
        return;
    }
    RebinNumberY = rebin;
    DoRebinY = true;
}

void Plot2D::SetXRange(double min, double max){
    if(min > max){
        cout<<"setting XRange wrong!!"<<endl;
        return;
    }
    DoSetXRange = true;
    minX = min;
    maxX = max;
}

void Plot2D::SetYRange(double min, double max){
    if(min > max){
        cout<<"setting YRange wrong!!"<<endl;
        return;
    }
    DoSetYRange = true;
    minY = min; 
    maxY = max;
}

void Plot2D::SetZRange(double min, double max){
    if(min > max){
        cout<<"setting YRange wrong!!"<<endl;
        return;
    }
    DoSetZRange = true;
    minZ = min;
    maxZ = max;
}

void Plot2D::SetPlotTitle(const char *title){
    DoSetTitle = true;
    Ptitle = (TString)title;
}

void Plot2D::SetSave(const char *Savefilename){
    DoSave = true;
    savefilename = (TString)Savefilename;
}


void Plot2D::DrawFigure(){
    Int_t xcanvasrange = 1600;
    Int_t ycanvasrange = 1600;
    TCanvas *c = new TCanvas("c","canvas",xcanvasrange, ycanvasrange);
    gStyle->SetLineWidth(2);
    gStyle->SetOptTitle(1);
//    gStyle->SetTextFont(72);

    Double_t xpadrangeup = 1.0;
    Double_t xpadrangedn = 0;
    Double_t ypadrangeup = 1.0;
    Double_t ypadrangedn = 0;
    TPad *pad1 = new TPad("pad1","pad1",xpadrangedn,ypadrangedn,xpadrangeup,ypadrangeup);
    pad1->SetTopMargin(0.13);
    pad1->SetLeftMargin(0.15);
    pad1->SetRightMargin(0.13);
    pad1->SetBottomMargin(0.2);
    pad1->SetGridx();
    pad1->SetGridy();
    //pad1->SetLogy();

    pad1->SetTicks();
    pad1->Draw();
    pad1->cd();

    double inte1;
    double inte2;

    TFile *file = new TFile(filename);
    TH2D *A = (TH2D *)file->Get(plotname);
    
    TH2D *AClone = (TH2D *)A->Clone("AClone");
    if(DoRebinX)
        AClone->RebinX(RebinNumberX);
    if(DoRebinY)
        AClone->RebinY(RebinNumberY);

    for(int cir1 = 0 ; cir1 < AClone->GetXaxis()->GetNbins() ; cir1 ++){
        for(int cir2 = 0 ; cir2 < AClone->GetYaxis()->GetNbins() ; cir2 ++){
            double content;
            double error;
            content = AClone->GetBinContent(cir1 + 1, cir2 + 1);
            error = AClone->GetBinError(cir1 + 1 , cir2 + 1);
            int Cpow = 0;
            int Epow = 0;
            double Ccontent = fabs(content);
            double Cerror = fabs(error);
            if(Ccontent != 0){
                while(Ccontent > 10){
                    Ccontent = Ccontent / 10;
                    Cpow = Cpow+1;
                }
                while(Ccontent < 1){
                    Ccontent = Ccontent * 10;
                    Cpow = Cpow - 1;
                }
            }
            if(Cerror != 0 ){
                while(Cerror > 10){
                    Cerror = Cerror / 10;
                    Epow = Epow + 1;
                }
                while(Cerror < 1){
                    Cerror = Cerror * 10;
                    Epow = Epow - 1;
                }
            }
            content = (double)((int)(content * pow(10.0, (npow - Cpow - 1))));
            error = (double)((int)(error * pow(10.0, (npow - Epow -1))));
            content = content / pow(10.0, (npow - Cpow - 1));
            error = error / pow(10.0, (npow - Epow -1));
            AClone->SetBinContent(cir1 + 1 , cir2 + 1 , content);
            AClone->SetBinError(cir1 + 1 , cir2 + 1 , error);
        }
    }


//    gStyle->SetOptStat("n");
    AClone->SetStats(0);
    gStyle->SetOptTitle(1);
    AClone->SetTitle("");
    if(DoSetTitle){
        AClone->SetTitle(Ptitle);
//        AClone->SetTitleFont(73);
        AClone->SetTitleOffset(0);
    }
    

    AClone->GetYaxis()->SetTitleFont(73);
    AClone->GetYaxis()->SetTitleSize(50);
    AClone->GetYaxis()->SetTitleOffset(1.8);
    AClone->GetYaxis()->SetLabelSize(50);
    AClone->GetYaxis()->SetLabelFont(73);
    AClone->GetYaxis()->SetTitle(Ytitle);

    AClone->GetXaxis()->SetTitleSize(50);
    AClone->GetXaxis()->SetTitleFont(73);
    AClone->GetXaxis()->SetTitleOffset(1);
    AClone->GetXaxis()->SetLabelSize(50);
    AClone->GetXaxis()->SetLabelFont(73);
    AClone->GetXaxis()->SetTitle(Xtitle);
//    AClone->SetTitle("");
    AClone->SetLineWidth(3);

    if(DoSetXRange)
        AClone->GetXaxis()->SetRangeUser(minX,maxX);
    if(DoSetYRange)
        AClone->GetYaxis()->SetRangeUser(minY,maxY);

    if(DoSetZRange)
        AClone->GetZaxis()->SetRangeUser(minZ,maxZ);

//    AClone->SetTextSize(0.4);
    AClone->SetMarkerSize(0.5);

    AClone->Draw("COLZTEXT");

    c->Update();
    if(DoSave)
        c->SaveAs((TString)(savefilename+".png"));
        c->SaveAs((TString)(savefilename+".pdf"));
}

