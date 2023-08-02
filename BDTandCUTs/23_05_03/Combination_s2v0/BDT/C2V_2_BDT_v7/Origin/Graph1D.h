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


class Graph1D{
    public:
        bool DoSave;
        TString savefilename;

        bool DoSetXRange;
        bool DoSetYRange;
        bool AddHeader;
        bool ColorReset[100] = {0};
        bool FillReset[100] = {0};
        bool Notaddlegend = false;
        bool DoChangeLegend = false;

        double minX;
        double maxX;
        double minY=0;
        double maxY=0;
        double legendminx = 0;
        double legendmaxx = 0;
        double legendminy = 0;
        double legendmaxy = 0;
        double legendtextsize = 0;


        int totalplotnumber;

        TString filenamex[100];
        TString plotnamex[100];
        TString filenamey[100];
        TString plotnamey[100];
        short   plotcolor[100];

        TString Headername;
        TString Xtitle;
        TString Ytitle;
        TString legendname[100];

        double legendpositionx;
        double legendpositiony;

        Graph1D(const char *TitleX, const char *TitleY, int TotalNumber);
        virtual ~Graph1D();
        virtual void SetInputNamex(const char *Filename, const char *Plotname, const char *Legendname, int NoPlot);
        virtual void SetInputNamey(const char *Filename, const char *Plotname, const char *Legendname, int NoPlot);
        virtual void SetXRange(double min, double max);
        virtual void SetYRange(double min, double max);
        virtual void SetLegend(double xmin = 0.6, double ymin = 0.65, double xmax = 0.75, double ymax = 0.85, double TextSize = 0.04);
        virtual void SetSave(const char *Savefilename);
        virtual void SetColor(int NoPlot, short NoColor);
        virtual void SetFillAtt(int NoPlot);
        virtual void NotAddLegend();
        virtual void DrawFigure();
};

Graph1D::~Graph1D(){
}


Graph1D::Graph1D(const char *TitleX, const char *TitleY, int TotalNumber){
    DoSetXRange = false;
    DoSetYRange = false;
    AddHeader = true;
    DoSave = false;
    Headername = "CMS Internal";
    Xtitle = (TString)TitleX;
    Ytitle = (TString)TitleY;
    totalplotnumber = TotalNumber;
    DoChangeLegend = false;
}

void Graph1D::SetInputNamex(const char *Filename, const char *Plotname, const char *Legendname, int NoPlot){
    if(NoPlot >= 100){
        cout<<"Change head file!!! max plot number "<<100<<endl<<"Plotting 0 ~ "<<100<<"plots"<<endl;
        return;
    }
    filenamex[NoPlot] = (TString)Filename;
    plotnamex[NoPlot] = (TString)Plotname;
    legendname[NoPlot] = (TString)Legendname;
}

void Graph1D::SetInputNamey(const char *Filename, const char *Plotname, const char *Legendname, int NoPlot){
    if(NoPlot >= 100){
        cout<<"Change head file!!! max plot number "<<100<<endl<<"Plotting 0 ~ "<<100<<"plots"<<endl;
        return;
    }
    filenamey[NoPlot] = (TString)Filename;
    plotnamey[NoPlot] = (TString)Plotname;
    legendname[NoPlot] = (TString)Legendname;
}


void Graph1D::SetXRange(double min, double max){
    if(min > max){
        cout<<"setting XRange wrong!!"<<endl;
        return;
    }
    DoSetXRange = true;
    minX = min;
    maxX = max;
}

void Graph1D::SetYRange(double min, double max){
    if(min > max){
        cout<<"setting YRange wrong!!"<<endl;
        return;
    }
    DoSetYRange = true;
    minY = min;
    maxY = max;
}

void Graph1D::SetLegend(double xmin = 0.6, double ymin = 0.65, double xmax = 0.75, double ymax = 0.85, double TextSize = 0.04){
    legendminx = xmin;
    legendminy = ymin;
    legendmaxx = xmax;
    legendmaxy = ymax;
    legendtextsize = TextSize;
    DoChangeLegend = true;
}

void Graph1D::SetSave(const char *Savefilename){
    DoSave = true;
    savefilename = (TString)Savefilename;
}

void Graph1D::SetColor(int NoPlot, short NoColor){
        if(NoPlot >= 100){
            cout<<"Change head file!!! max plot number "<<100<<endl<<"Plotting 0 ~ "<<100<<"plots"<<endl;
            return;
        }
    ColorReset[NoPlot] = true;
    plotcolor[NoPlot] = NoColor;
}

void Graph1D::SetFillAtt(int NoPlot){
    if(NoPlot >= 100){
        cout<<"Change head file!!! max plot number "<<100<<endl<<"Plotting 0 ~ 100 plots"<<endl;
        return;
    }
    FillReset[NoPlot] = true;
}

void Graph1D::NotAddLegend(){
    Notaddlegend = true;
}

void Graph1D::DrawFigure(){
    Int_t xcanvasrange = 1600;
    Int_t ycanvasrange = 1600;
    TCanvas *c = new TCanvas("c","canvas",xcanvasrange, ycanvasrange);
    gStyle->SetLineWidth(2);

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

    pad1->SetTicks();
    pad1->Draw();
    pad1->cd();

    if(!DoChangeLegend){
        legendminx = 0.6;
        legendmaxx = 0.75;
        legendminy = 0.65;
        legendmaxy = 0.85;
    }
    TLegend *legend = new TLegend(legendminx,legendminy,legendmaxx,legendmaxy);
    if(!DoSetYRange){
        minY = 99999;
        for(int cir1 = 0 ; cir1 < totalplotnumber ; cir1++){
            TFile*file = new TFile(filenamey[cir1]);
            TH1D *A = (TH1D *)file->Get(plotnamey[cir1]);
            TH1D *AClone  = (TH1D *)A->Clone("AClone");

            if(maxY < AClone->GetMaximum())
                maxY = AClone->GetMaximum();
            if(minY < AClone->GetMinimum())
                minY = AClone->GetMinimum();

        }
        for(int cir1 = 0 ; cir1 < totalplotnumber ; cir1++){
            TFile*file = new TFile(filenamex[cir1]);
            TH1D *A = (TH1D *)file->Get(plotnamex[cir1]);
            TH1D *AClone  = (TH1D *)A->Clone("AClone");

            if(maxX < AClone->GetMaximum())
                maxX = AClone->GetMaximum();
            if(minX < AClone->GetMinimum())
                minX = AClone->GetMinimum();

        }
        if(maxY > 0)
            maxY *= 1.1;
        else if(maxY < 0)
            maxY *= 0.9;
        if(minY > 0)
            minY *= 0.9;
        else if(minY < 0)
            minY *= 1.1;
        if(maxX > 0)
            maxX *= 1.1;
        else if(maxX < 0)
            maxX *= 0.9;
        if(minX > 0)
            minX *= 0.9;
        else if(minX < 0)
            minX *= 1.1;
    }

    for(int cir1 = 0 ; cir1 < totalplotnumber; cir1 ++){
        cout<<totalplotnumber<<endl;
        TFile *file_x = new TFile(filenamex[cir1]);
        TFile *file_y = new TFile(filenamey[cir1]);
        TH1D *A_x = (TH1D *)file_x->Get(plotnamex[cir1]);
        TH1D *A_y = (TH1D *)file_y->Get(plotnamey[cir1]);

        TH1D *PlotGet_x = (TH1D *)A_x->Clone("AClone_x");
        TH1D *PlotGet_y = (TH1D *)A_y->Clone("AClone_y");

        int NBinsX = PlotGet_x->GetNbinsX();
        Double_t XaxisValue[10000] = {0};
        Double_t YaxisValue[10000] = {0};

        for(int cir2 = 0 ; cir2 < NBinsX ; cir2 ++){
            XaxisValue[cir2] = PlotGet_x->GetBinContent(cir2+1);
            YaxisValue[cir2] = PlotGet_y->GetBinContent(cir2+1);
            if(cir2 < 10 )cout<<cir2<<"   "<< XaxisValue[cir2]<<"    "<<YaxisValue[cir2]<<endl;
        }

        
        TGraph* AClone = new TGraph(NBinsX,XaxisValue,YaxisValue);

        if(cir1 == 0){
            //AClone->SetStats(0);

            AClone->GetYaxis()->SetTitleFont(73);
            AClone->GetYaxis()->SetTitleSize(50);
            AClone->GetYaxis()->SetTitleOffset(1);
            AClone->GetYaxis()->SetLabelSize(50);
            AClone->GetYaxis()->SetLabelFont(73);
            AClone->GetYaxis()->SetTitle(Ytitle);

            AClone->GetXaxis()->SetTitleSize(50);
            AClone->GetXaxis()->SetTitleFont(73);
            AClone->GetXaxis()->SetTitleOffset(1);
            AClone->GetXaxis()->SetLabelSize(50);
            AClone->GetXaxis()->SetLabelFont(73);

            AClone->GetXaxis()->SetTitle(Xtitle);

            AClone->SetTitle("");
        }
        AClone->SetLineWidth(3);

        AClone->SetMarkerStyle(kFullCircle);
        if(ColorReset[cir1]){
            AClone->SetLineColor(plotcolor[cir1]);
            AClone->SetMarkerColor(plotcolor[cir1]);
        }else{
            AClone->SetLineColor((short)(cir1+1));
            AClone->SetMarkerColor((short)(cir1+1));
        }
        AClone->GetXaxis()->SetRangeUser(minX,maxX);
        AClone->GetYaxis()->SetRangeUser(minY,maxY);

        

//        AClone->SetMarkerSize(1)
        if(cir1 == 0){
            AClone->Draw("PAC");
        }
        else{
            AClone->Draw("PC same");
        }

        //adding fill settings here
        
        if(cir1 == 0){
            if(!Notaddlegend){
                legend->SetFillColor(0);
                legend->SetFillStyle(0);
                legend->SetLineColor(0);
                legend->SetLineWidth(0);
                if(!DoChangeLegend)
                    legendtextsize = 0.04;
                legend->SetTextSize(legendtextsize);
                legend->SetTextFont(72);
                if(AddHeader)
                    legend->SetHeader(Headername);
            }
        }
        if(!Notaddlegend){
            legend->AddEntry(AClone,legendname[cir1],"lpe");
        }
        legend->Draw("same");

    }
    c->Update();
    if(DoSave){
        c->SaveAs((TString)(savefilename+".png"));
        c->SaveAs((TString)(savefilename+".pdf"));
    }
    
}

