#include <TCanvas.h>
#include <TF1.h>
#include <THStack.h>
#include <TFile.h>
#include <TH1D.h>
#include <TLegend.h>
#include <TGraph.h>
#include <TROOT.h>
#include <TStyle.h>
#include <iostream>

using namespace std;

class Plot1DStack{
    public:
        bool DoSave;
        TString savefilename;
        bool DoSetXRange;
        bool DoSetYRange;
        bool DoSetAddRange;
        bool AddHeader;
        bool DoSetLogY;
        bool DoInteOutRange;
        bool DoRebin;
        bool DoNorm[100] = {false};
        double plotscale[100] = {0};
        bool ColorReset[100] = {0};
        bool Notaddlegend = false;
        bool DoAddpad = false;
        bool DoAddRatio = false;
        bool DoAddLsig = false;
        bool DoChangePadY = false;
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

        double addpadminY;
        double addpadmaxY;

        int    totalplotnumber;
        int    RebinNumber = 1;

        TString filename[100];
        TString plotname[100];
        int     plottype[100];
        short   plotcolor[100];
        TString Headername;
        TString Addpadname;
        TString Xtitle;
        TString Ytitle;
        TString legendname[100];

        double legendpositionx;
        double legendpositiony;

        
        Plot1DStack(const char *TitleX, const char *TitleY, int TotalNumber);
        virtual ~Plot1DStack();
        virtual void SetInputName(const char *Filename, const char *Plotname, const char *Legendname, int NoPlot,int PlotType);
//        PlotType = 1 : bkg
//        PlotType = 2 : data
        virtual void SetRebin(int rebin);
        virtual void SetXRange(double min, double max);
        virtual void SetYRange(double min, double max);
        virtual void SetLegend(double xmin, double ymin, double xmax, double ymax , double TextSize);
        virtual void AddpadRange(double min, double max);
        virtual void SetSave(const char *Savefilename);
        virtual void SetColor(int NoPlot, short NoColor);
        virtual void AddRatio();
        virtual void SetLogY();
        virtual void AddLsig();
        virtual void InteOutRange();
        virtual void AddYtitle(const char * padYtitle);
        virtual void SetNorm(int NoPlot, double ScalePlot);
        virtual void NotAddLegend();
        virtual void DrawFigure();

};

Plot1DStack::~Plot1DStack(){
}


Plot1DStack::Plot1DStack(const char *TitleX, const char *TitleY, int TotalNumber){
    DoSetXRange = false;
    DoSetYRange = false;
    DoSetLogY = false;
    DoInteOutRange = false;
    DoSetAddRange = false;
    AddHeader = true;
    DoRebin = false;
    DoSave = false;
    DoAddpad = false;
    DoAddRatio = false;
    DoAddLsig = false;
    Headername = "CMS Internal";
    Xtitle = (TString)TitleX;
    Ytitle = (TString)TitleY;
    totalplotnumber = TotalNumber;
    DoChangeLegend = false;
}

void Plot1DStack::SetInputName(const char *Filename, const char *Plotname, const char *Legendname, int NoPlot,int PlotType){
    if(NoPlot >= 100){
        cout<<"Change head file!!! max plot number "<<100<<endl<<"Plotting 0 ~ "<<100<<"plots"<<endl;
        return;
    }
    filename[NoPlot] = (TString)Filename;
    plotname[NoPlot] = (TString)Plotname;
    legendname[NoPlot] = (TString)Legendname;
    plottype[NoPlot] = PlotType;
}

void Plot1DStack::SetRebin(int rebin = -999){
    if(rebin < 0){
        cout<<"rebin number wrong"<<endl;
        return;
    }
    if(rebin == 1){
        cout<<"rebin number = 1"<<endl;
        return;
    }
    RebinNumber = rebin;
    DoRebin = true;
    
}

void Plot1DStack::SetXRange(double min, double max){
    if(min > max){
        cout<<"setting XRange wrong!!"<<endl;
        return;
    }
    DoSetXRange = true;
    minX = min;
    maxX = max;
}

void Plot1DStack::SetYRange(double min, double max){
    if(min > max){
        cout<<"setting YRange wrong!!"<<endl;
        return;
    }
    DoSetYRange = true;
    minY = min; 
    maxY = max;
}

void Plot1DStack::SetLegend(double xmin = 0.6, double ymin = 0.65, double xmax = 0.75, double ymax = 0.85, double TextSize = 0.04){
    legendminx = xmin;
    legendminy = ymin;
    legendmaxx = xmax;
    legendmaxy = ymax;
    legendtextsize = TextSize;
    DoChangeLegend = true;
}

void Plot1DStack::AddpadRange(double min, double max){
    if(min > max){
        cout<<"setting pad Range wrong !!"<<endl;
        return;
    }
    DoSetAddRange = true;
    addpadminY = min;
    addpadmaxY = max;
}

void Plot1DStack::AddYtitle(const char * padYtitle){
    DoChangePadY = true;
    Addpadname = (TString)padYtitle;
}

void Plot1DStack::SetSave(const char *Savefilename){
    DoSave = true;
    savefilename = (TString)Savefilename;
}

void Plot1DStack::SetColor(int NoPlot, short NoColor){
        if(NoPlot >= 100){
            cout<<"Change head file!!! max plot number "<<100<<endl<<"Plotting 0 ~ "<<100<<"plots"<<endl;
            return;
        }
    ColorReset[NoPlot] = true;
    plotcolor[NoPlot] = NoColor;
}

void Plot1DStack::AddRatio(){
    DoAddpad = true;
    DoAddRatio = true;
}

void Plot1DStack::SetLogY(){
    DoSetLogY = true;
}

void Plot1DStack::AddLsig(){
    DoAddpad = true;
    DoAddLsig = true;
}

void Plot1DStack::InteOutRange(){
    DoInteOutRange = true;
}


void Plot1DStack::NotAddLegend(){
    Notaddlegend = true;
}

void Plot1DStack::SetNorm(int NoPlot, double ScalePlot){
    if(ScalePlot != 0){
        DoNorm[NoPlot] = true;
        plotscale[NoPlot] = ScalePlot;
    }
};

void Plot1DStack::DrawFigure(){
    Int_t xcanvasrange = 1600;
    Int_t ycanvasrange = 1600;
    
    if(DoAddpad) ycanvasrange = 1600;
    TCanvas *c = new TCanvas("c","canvas",xcanvasrange, ycanvasrange);
    gStyle->SetLineWidth(2);

    Double_t xpadrangeup = 1.0;
    Double_t xpadrangedn = 0;
    Double_t ypadrangeup = 1.0;
    Double_t ypadrangedn = 0;
    if(DoAddpad) ypadrangedn = 0.3;
    TPad *pad1 = new TPad("pad1","pad1",xpadrangedn,ypadrangedn,xpadrangeup,ypadrangeup);
    pad1->SetTopMargin(0.13);
    pad1->SetLeftMargin(0.15);
    pad1->SetRightMargin(0.13);
    if(DoAddpad)
        pad1->SetBottomMargin(0);
    else
        pad1->SetBottomMargin(0.2);
    pad1->SetGridx();
    pad1->SetGridy();
    if(DoSetLogY)
        pad1->SetLogy();

    pad1->SetTicks();
    pad1->Draw();
    pad1->cd();

    double inte1;
    double inte2;

    if(!DoChangeLegend){
        legendminx = 0.6;
        legendmaxx = 0.75;
        legendminy = 0.65;
        legendmaxy = 0.85;
    }
    TLegend *legend = new TLegend(legendminx,legendminy,legendmaxx,legendmaxy);
    if(!DoSetYRange){
        THStack *A_HStack = new THStack("hs","");
        for(int cir1 = 0 ; cir1 < totalplotnumber ; cir1 ++){
            TFile*file = new TFile(filename[cir1]);
            TH1D *A = (TH1D *)file->Get(plotname[cir1]);
            TH1D *AClone  = (TH1D *)A->Clone("AClone");
            if(DoRebin)
                AClone->RebinX(RebinNumber);
            if(DoNorm[cir1]){
                AClone->Scale(plotscale[cir1]);
            }
            if(plottype[cir1] == 1){
                A_HStack->Add(AClone);
                continue;
            }
            if(maxY < AClone->GetMaximum())
                maxY = AClone->GetMaximum();
        }
        if(maxY < A_HStack->GetMaximum())
            maxY = A_HStack->GetMaximum();
        maxY *= 1.1;
        minY = 0;
    }

    THStack *A_HStack = new THStack("hs","");
    bool ifsetting = false;
    for(int cir1 = 0 ; cir1 < totalplotnumber ; cir1 ++){
        cout<<"cirr"<<totalplotnumber<<endl;
        cout<<filename[cir1]<<endl;
        cout<<plotname<<endl;
        if(plottype[cir1] != 1) continue;
        TFile *file = new TFile(filename[cir1]);
        TH1D *A = (TH1D *)file->Get(plotname[cir1]);
        char name[100];
        int NBinsX = A->GetNbinsX();
        cout<<"Xaxis bins : "<<NBinsX<<endl;
        
        TH1D *AClone = (TH1D *)A->Clone("AClone");

        if(DoRebin){
            if(DoAddLsig){
                cout<<"ERROR !!!!!!    Sum Plot should not do rebin !"<<endl;
                return;
            }
            AClone->RebinX(RebinNumber);
        }

        if(DoNorm[cir1]){
            cout<<"Attention !!!! Scale on HStack plots!!!"<<endl; 
            AClone->Scale(plotscale[cir1]);
        }

        if(DoSetXRange){
            double maxXedgeAClone = AClone->GetBinLowEdge(AClone->GetNbinsX()) + AClone->GetBinWidth(AClone->GetNbinsX());
            int lastbin = 0;
            if(maxXedgeAClone > maxX && DoInteOutRange){
                lastbin = AClone->FindBin(maxX);
                double inte_lastbin = 0;
                double inte_errorlastbin = 0 ;
                for(int kk = lastbin - 1 ; kk < AClone->GetNbinsX() + 1 ; kk ++){
                    inte_lastbin += AClone->GetBinContent(kk);
                    inte_errorlastbin += AClone->GetBinError(kk) * AClone->GetBinError(kk);
                }
                AClone->GetXaxis()->SetRangeUser(AClone->GetBinLowEdge(1),maxX);
                cout<<"HStack set done~!!!!!"<<"   "<<AClone->GetBinLowEdge(1)<<"   "<<maxX<<endl;
                AClone->SetBinContent(lastbin-1, inte_lastbin);
                AClone->SetBinError(lastbin-1,sqrt(inte_errorlastbin));
            }
            double minXedgeAClone = AClone->GetBinLowEdge(1);
            maxXedgeAClone = AClone->GetBinLowEdge(AClone->GetNbinsX()) + AClone->GetBinWidth(AClone->GetNbinsX());
            int firstbin = 0;
            if(minXedgeAClone < minX && DoInteOutRange){
                firstbin = AClone->FindBin(minX);
                double inte_firstbin = 0;
                double inte_errorfirstbin = 0;
                for(int kk = 1 ; kk < firstbin+1 ; kk ++){
                    inte_firstbin += AClone->GetBinContent(kk);
                    inte_errorfirstbin += AClone->GetBinError(kk) * AClone->GetBinError(kk);
                }
                if(maxXedgeAClone > maxX)
                    AClone->GetXaxis()->SetRangeUser(minX,maxX);
                else
                    AClone->GetXaxis()->SetRangeUser(minX,maxXedgeAClone);
                cout<<"set done 2!!!!"<<"   "<<minX<<"    "<<maxXedgeAClone<<endl;
                AClone->SetBinContent(1,inte_firstbin);
                AClone->SetBinError(1,sqrt(inte_errorfirstbin));
            }
            if(!DoInteOutRange){
                AClone->GetXaxis()->SetRangeUser(minX,maxX);
            }
        }

        cout<<"color reset : begin"<<endl;
//****************Set Color of Plots************************
        AClone->SetLineWidth(3);
        if(ColorReset[cir1]){
            AClone->SetLineColor(plotcolor[cir1]);
            AClone->SetFillColor(plotcolor[cir1]);
            AClone->SetMarkerColor(plotcolor[cir1]);
            AClone->SetMarkerStyle(8);
        }
        else{
            AClone->SetLineColor((short)(cir1+1));
            AClone->SetFillColor((short)(cir1+1));
            AClone->SetMarkerColor((short)(cir1+1));
            AClone->SetMarkerStyle(8);
        }
//*********************************************************
        A_HStack->Add(AClone);
        legend->AddEntry(AClone,legendname[cir1],"f");
        if(!ifsetting){
            ifsetting = true;
           
            AClone->SetStats(0);   
            AClone->GetYaxis()->SetTitleFont(73);
            if(DoAddpad){
                AClone->GetYaxis()->SetTitleSize(50);
                AClone->GetYaxis()->SetTitleOffset(2);
                AClone->GetYaxis()->SetLabelSize(50);
            }else{
                AClone->GetYaxis()->SetTitleSize(50);
                AClone->GetYaxis()->SetTitleOffset(2);
                AClone->GetYaxis()->SetLabelSize(50);
            }
            AClone->GetYaxis()->SetLabelFont(73);
            AClone->GetYaxis()->SetTitle(Ytitle);
        
            if(DoAddpad){
                AClone->GetXaxis()->SetTitleSize(70);
                AClone->GetXaxis()->SetTitleFont(73);
                AClone->GetXaxis()->SetTitleOffset(1.3);
                AClone->GetXaxis()->SetLabelSize(50);
                AClone->GetXaxis()->SetLabelFont(73);
            }else{
                AClone->GetXaxis()->SetTitleSize(50);
                AClone->GetXaxis()->SetTitleFont(73);
                AClone->GetXaxis()->SetTitleOffset(1);
                AClone->GetXaxis()->SetLabelSize(50);
                AClone->GetXaxis()->SetLabelFont(73);
            }

            A_HStack->SetHistogram(AClone);
            
        }

    }
    cout<<"HStack set y range begin:"<<endl;
    
    A_HStack->SetMinimum(minY);
    A_HStack->SetMaximum(maxY);
//    A_HStack->SetStats(0);
    cout<<"HStack set attri begin:"<<endl;
    
    cout<<"HStack set atri begin2"<<endl;
/*
    if(DoAddpad){
        A_HStack->GetXaxis()->SetTitleSize(70);
        A_HStack->GetXaxis()->SetTitleFont(73);
        A_HStack->GetXaxis()->SetTitleOffset(1.3);
        A_HStack->GetXaxis()->SetLabelSize(50);
        A_HStack->GetXaxis()->SetLabelFont(73);
    }else{
        A_HStack->GetXaxis()->SetTitleSize(50);
        A_HStack->GetXaxis()->SetTitleFont(73);
        A_HStack->GetXaxis()->SetTitleOffset(1);
        A_HStack->GetXaxis()->SetLabelSize(50);
        A_HStack->GetXaxis()->SetLabelFont(73);
    }*/
    cout<<"set attri ends"<<endl;

    //A_HStack->GetXaxis()->SetTitle(Xtitle);

    //A_HStack->SetTitle("");

    cout<<"HStack draw begin"<<endl;
    //A_HStack->SetLineWidth(3);
    A_HStack->Draw("b hist");
    

    cout<<"HStack draw done"<<endl;


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

    for(int cir1 = 0 ; cir1 < totalplotnumber ; cir1 ++){
        cout<<"cirr"<<totalplotnumber<<endl;
        cout<<filename[cir1]<<endl;
        cout<<plotname<<endl;
        if(plottype[cir1] == 1) continue;
        TFile *file = new TFile(filename[cir1]);
        TH1D *A = (TH1D *)file->Get(plotname[cir1]);
        char name[100];
        int NBinsX = A->GetNbinsX();
        cout<<"Xaxis bins : "<<NBinsX<<endl;

        TH1D *AClone = (TH1D *)A->Clone("AClone");

        if(DoRebin){
            if(DoAddLsig){
                cout<<"ERROR !!!!!!    Sum Plot should not do rebin !"<<endl;
                return;
            }
            AClone->RebinX(RebinNumber);
        }

        if(DoNorm[cir1]){
            AClone->Scale(plotscale[cir1]);
        }


/*        if(cir1 == 0){
            AClone->SetStats(0);

            AClone->GetYaxis()->SetTitleFont(73);
            if(DoAddpad){
                AClone->GetYaxis()->SetTitleSize(50);
                AClone->GetYaxis()->SetTitleOffset(1.5);
                AClone->GetYaxis()->SetLabelSize(50);
            }else{
                AClone->GetYaxis()->SetTitleSize(50);
                AClone->GetYaxis()->SetTitleOffset(1);
                AClone->GetYaxis()->SetLabelSize(50);
            }
            AClone->GetYaxis()->SetLabelFont(73);
            AClone->GetYaxis()->SetTitle(Ytitle);

            if(DoAddpad){
                AClone->GetXaxis()->SetTitleSize(70);
                AClone->GetXaxis()->SetTitleFont(73);
                AClone->GetXaxis()->SetTitleOffset(1.3);
                AClone->GetXaxis()->SetLabelSize(50);
                AClone->GetXaxis()->SetLabelFont(73);
            }else{
                AClone->GetXaxis()->SetTitleSize(50);
                AClone->GetXaxis()->SetTitleFont(73);
                AClone->GetXaxis()->SetTitleOffset(1);
                AClone->GetXaxis()->SetLabelSize(50);
                AClone->GetXaxis()->SetLabelFont(73);
            }

            AClone->GetXaxis()->SetTitle(Xtitle);
//            AClone->SetLineWidth(3);

            AClone->SetTitle("");
        }*/

        AClone->SetLineWidth(3);


//****************Set Color of Plots************************
        if(ColorReset[cir1]){
            AClone->SetLineColor(plotcolor[cir1]);
            AClone->SetFillColor(plotcolor[cir1]);
            AClone->SetMarkerColor(plotcolor[cir1]);
            AClone->SetMarkerStyle(8);
        }
        else{
            AClone->SetLineColor((short)(cir1+1));
            AClone->SetFillColor((short)(cir1+1));
            AClone->SetMarkerColor((short)(cir1+1));
            AClone->SetMarkerStyle(8);
        }

//*******************************ATTENTION*******************************//
        //if(cir1== 0)
            //AClone->SetFillColor((short)(cir1+1));
//*******************************ATTENTION******************************//

        if(DoSetXRange){
            double maxXedgeAClone = AClone->GetBinLowEdge(AClone->GetNbinsX()) + AClone->GetBinWidth(AClone->GetNbinsX());
            int lastbin = 0;
            if(maxXedgeAClone > maxX && DoInteOutRange){
                lastbin = AClone->FindBin(maxX);
                double inte_lastbin = 0;
                double inte_errorlastbin = 0 ;
                for(int kk = lastbin - 1 ; kk < AClone->GetNbinsX() + 1 ; kk ++){
                    inte_lastbin += AClone->GetBinContent(kk);
                    inte_errorlastbin += AClone->GetBinError(kk) * AClone->GetBinError(kk);
                }
                AClone->GetXaxis()->SetRangeUser(AClone->GetBinLowEdge(1),maxX);
                cout<<"set done~!!!!!"<<"   "<<AClone->GetBinLowEdge(1)<<"   "<<maxX<<endl;
                AClone->SetBinContent(lastbin-1, inte_lastbin);
                AClone->SetBinError(lastbin-1,sqrt(inte_errorlastbin));
            }
            double minXedgeAClone = AClone->GetBinLowEdge(1);
            maxXedgeAClone = AClone->GetBinLowEdge(AClone->GetNbinsX()) + AClone->GetBinWidth(AClone->GetNbinsX());
            int firstbin = 0;
            if(minXedgeAClone < minX && DoInteOutRange){
                firstbin = AClone->FindBin(minX);
                double inte_firstbin = 0;
                double inte_errorfirstbin = 0;
                for(int kk = 1 ; kk < firstbin+1 ; kk ++){
                    inte_firstbin += AClone->GetBinContent(kk);
                    inte_errorfirstbin += AClone->GetBinError(kk) * AClone->GetBinError(kk);
                }
                if(maxXedgeAClone > maxX)
                    AClone->GetXaxis()->SetRangeUser(minX,maxX);
                else
                    AClone->GetXaxis()->SetRangeUser(minX,maxXedgeAClone);
                cout<<"set done 2!!!!"<<"   "<<minX<<"    "<<maxXedgeAClone<<endl;
                AClone->SetBinContent(1,inte_firstbin);
                AClone->SetBinError(1,sqrt(inte_errorfirstbin));
            }
            if(!DoInteOutRange){
                AClone->GetXaxis()->SetRangeUser(minX,maxX);
            }
        }

//        if(DoSetYRange){
        AClone->SetMinimum(minY);
        AClone->SetMaximum(maxY);
        
//        }
            //AClone->GetYaxis()->SetRangeUser(minY,maxY);

        if(plottype[cir1] == 2)
            AClone->Draw("c same");
        if(!Notaddlegend){
            if(plottype[cir1] == 2)
                legend->AddEntry(AClone,legendname[cir1],"lpe");
//            legend->AddEntry(AClone,legendname[cir1],"lpfe");
        }


    }

    legend->Draw("same");


    //legend->Draw("same");

    TPad *pad2;
    TH1D *histadd;
    if(DoAddpad){
        c->cd();
        pad2 = new TPad("pad2","pad2",0,0,1,0.3);
        pad2->SetTopMargin(0);
        pad2->SetBottomMargin(0.4);
        pad2->SetLeftMargin(0.15);
        pad2->SetRightMargin(0.13);
        pad2->SetGridx(); // vertical grid
        pad2->SetGridy();
        pad2->Draw();
        pad2->cd();

        TFile*file = new TFile(filename[0]);
        TH1D *A_den = (TH1D *)file->Get(plotname[0]);
        //TH1D *A_add = (TH1D *)A_den->Clone("A_add");
        int NBinsX = A_den->GetNbinsX();
        if(DoRebin)
            A_den->RebinX(RebinNumber);

        
        //if(DoRebin)
            //A_add->RebinX(RebinNumber);

        //cout<<A_den->GetNbinsX()<<"   "<<A_add->GetNbinsX()<<endl;

        for(int cir1 = 1 ; cir1 < totalplotnumber ; cir1 ++){
            if(plottype[cir1] == 1) continue;
            file = new TFile(filename[cir1]);
            TH1D *A_num;
            A_num = (TH1D *)file->Get(plotname[cir1]);
            TH1D *A_add = (TH1D *)A_den->Clone("A_add");
            if(DoRebin)
                A_num->RebinX(RebinNumber);
            double MaxLsig = 0;
            int MaxLsigBin = 0;
            for(int cir2 = 0 ; cir2 < A_num->GetNbinsX() ; cir2 ++){
                if(DoAddRatio){
                    double ratio = 0;
                    double Nnum = 0;
                    double Enum = 0;
                    double Nden = 0;
                    double Eden = 0;
                    double error = 0;
                    Nnum = A_num->GetBinContent(cir2 + 1);
                    Enum = A_num->GetBinError(cir2 + 1);
                    Nden = A_den->GetBinContent(cir2 + 1);
                    Eden = A_den->GetBinError(cir2 + 1);
                    if(abs(Nden) > 0.00001){
                        ratio = Nnum / Nden;
                        error = (Enum / Nden) * (Enum / Nden) +
                                (Nnum * Eden / (Nden * Nden)) * (Nnum * Eden / (Nden * Nden));
                        error = sqrt(error);
                    }else{
                        ratio = 0 ;
                        error = 0 ;
                    }
                    if(cir2 < 20 )   cout<<cir1<<"   "<<ratio<<"   "<<error<<endl;
                    A_add->SetBinContent(cir2 + 1 , ratio);
                    A_add->SetBinError(cir2 + 1 , error);
                }
                if(DoAddLsig){
                    double s = A_den->GetBinContent(cir2 + 1);
                    double b = A_num->GetBinContent(cir2 + 1);
                    double Lsig = 0;
                    if(s > 0.0001 && b > 0.0001 && s < 1000){
                        double inside = (s + b) * TMath::Log((1.0 + s / b)) - s;
                        Lsig = sqrt(2 * inside);
                        if(Lsig > MaxLsig){
                            MaxLsig = Lsig;
                            MaxLsigBin = cir2;
                        }
                    }
                    //cout<<cir2<<"   "<<s<<"   "<<b<<"   "<<Lsig<<endl;
                    A_add->SetBinContent(cir2 + 1 , Lsig);
                    A_add->SetBinError(cir2+1 , 0);
                }
            }
            cout<<"Max Lsig , "<<MaxLsig<<"  ,  "<<MaxLsigBin<<"  ,      "<<A_add->GetXaxis()->GetBinLowEdge(MaxLsigBin + 1)<<"    ,    "<<A_den->GetBinContent(MaxLsigBin + 1)<<"    ,    "<<A_num->GetBinContent(MaxLsigBin + 1)<<"   ,     "<<plotname[0]<<endl;
            if(DoSetAddRange){
                A_add->GetYaxis()->SetRangeUser(addpadminY,addpadmaxY);
            }else{
                A_add->GetYaxis()->SetRangeUser(0.6,1.4);
            }
            A_add->SetStats(0); 
            A_add->SetLineWidth(3);
            if(DoSetXRange)
                A_add->GetXaxis()->SetRangeUser(minX,maxX);
            if(cir1 == 1){
                A_add->GetYaxis()->SetTitleSize(50);
                A_add->GetYaxis()->SetTitleFont(73);
                A_add->GetYaxis()->SetTitleOffset(1.5);
                A_add->GetYaxis()->SetLabelSize(50);
                A_add->GetYaxis()->SetLabelFont(73);
                if(DoChangePadY)
                    A_add->GetYaxis()->SetTitle(Addpadname);
                else{
                    if(DoAddRatio){
                        A_add->GetYaxis()->SetTitle("#frac{data}{MC}");
                    }else if(DoAddLsig){
                        A_add->GetYaxis()->SetTitle("Lsig");
                    }
                }

                A_add->GetXaxis()->SetTitleSize(50);
                A_add->GetXaxis()->SetTitleFont(73);
                A_add->GetXaxis()->SetTitleOffset(2.7);
                A_add->GetXaxis()->SetLabelSize(50);
                A_add->GetXaxis()->SetLabelFont(73);

                A_add->GetXaxis()->SetTitle(Xtitle);
                A_add->GetYaxis()->SetNdivisions(4,2,0,kTRUE);
//            A_add->SetLineWidth(3);
                if(ColorReset[cir1]){
                    A_add->SetLineColor(plotcolor[cir1]);
        //            A_add->SetFillColor(plotcolor[cir1]);
                }
                else{
                    A_add->SetLineColor((short)(cir1+1));
        //            A_add->SetFillColor((short)(cir1+1));
                }

                A_add->SetTitle("");
                cout<<"Check if add Lsig"<<DoAddLsig<<endl;
                if(DoAddLsig){
                    A_add->SetMarkerStyle(kFullCircle);
                    A_add->Draw("P");
                }else{
                    cout<<"here"<<endl;
                    A_add->Draw("E0");
                }
            }else{
                if(ColorReset[cir1]){
                    A_add->SetLineColor(plotcolor[cir1]);
        //            A_add->SetFillColor(plotcolor[cir1]);
                }
                else{
                    A_add->SetLineColor((short)(cir1+1));
        //            A_add->SetFillColor((short)(cir1+1));
                }
                if(DoAddLsig)
                    A_add->Draw("P same");
                else
                    A_add->Draw("same");
            }

        }

        TF1 *TFaddpad;
        if(DoAddRatio) {
            TFaddpad = new TF1("TFaddpad","1",A_den->GetBinLowEdge(0),A_den->GetBinLowEdge(NBinsX));
            TFaddpad->SetLineColor(kRed);
            TFaddpad->SetLineWidth(5);
            TFaddpad->SetLineStyle(10);
            TFaddpad->Draw("same");
        }


    }

    c->Update();
    if(DoSave){
        c->SaveAs((TString)(savefilename+".png"));
//        c->SaveAs((TString)(savefilename+".pdf"));
    }
}

