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

class Plot1D{
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
        bool DoNorm;
        bool ColorReset[100] = {0};
        bool FillReset[100] = {0};
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
        short   plotcolor[100];
        TString Headername;
        TString Addpadname;
        TString Xtitle;
        TString Ytitle;
        TString legendname[100];

        double legendpositionx;
        double legendpositiony;

        //You must call SetInputName and DrawFigure func for drawing your plots.
        //Note that every func in this package can be called at any place if you don't call "DrawFigure". It will take the last value you input
        //I've written a draw.cpp for example how to use these packages
        //if you need any other funcs, tell me please : )
        
        Plot1D(const char *TitleX, const char *TitleY, int TotalNumber);
        //Setting the Xaxis name, Yaxis name, and total number of input plots
        //if only one plots, TotalNumber = 1
        //
        virtual ~Plot1D();
        virtual void SetInputName(const char *Filename, const char *Plotname, const char *Legendname, int NoPlot);
        //Setting the basic input informaion of the plots: rootfile name, plot name, tags writen on the legend, and the order
        //note : in ratio or Lsig mode, the first plot will be taken to compare with others (Ratio = otherplots / first plots)
        //if only one plots, NoPlot = 0

        virtual void SetRebin(int rebin);
//        virtual void SetRebin(int rebin = -999);
        //Setting the rebin number of the plots. don't need to call it if you don't want to do the rebin

        virtual void SetXRange(double min, double max);
        //Setting the X range of the plots. don't need to call if you don't want to change

        virtual void SetYRange(double min, double max);
        //Setting the Y range of the plots. Don't need to call if you don't want to change

        virtual void SetLegend(double xmin, double ymin, double xmax, double ymax, double TextSize);
//        virtual void SetLegend(double xmin = 0.6, double ymin = 0.65, double xmax = 0.75, double ymax = 0.85, double TextSize = 0.04);
        //Reset the Position and the text size of the Legend. Don't need to call if you don't want to change

        virtual void AddpadRange(double min, double max);
        //if AddRatio or AddLsig is called. And you want to change the Y axis range of the Ratio and Lsig plots, this func might help you

        virtual void SetSave(const char *Savefilename);
        //save the plots to any directory.
        //Note that you don't need to add addition tag to it. for example, SetSave(test) will save test.pdf and test.png to the directory.

        virtual void SetColor(int NoPlot, short NoColor);
        //if you want to change any plot color.

        virtual void AddRatio();
        //add ratio plots below
        
        virtual void SetLogY();
        //set y axis log

        virtual void AddLsig();
        //add Lsig plots below
        
        virtual void InteOutRange();
        //when xaxis is changed, whether or not change the first/last bin of x axis to be the integral of all the out ranged bins. Default: false

        virtual void AddYtitle(const char * padYtitle);
        //the ratio or Lsig title can be changed using this func.

        virtual void SetNorm();
        //whether you want to normalize the plot
        //note that this one will norm every plots to the first plot
        //area(other plots) = area(first plot)

        virtual void SetFillAtt(int NoPlot);
        //if this func is called, it will become a bar plots

        virtual void NotAddLegend();
        //if you don't want to add legend in the plot

        virtual void DrawFigure();
        //Must call ! otherwise you will have nothing!

};

Plot1D::~Plot1D(){
}


Plot1D::Plot1D(const char *TitleX, const char *TitleY, int TotalNumber){
    DoSetXRange = false;
    DoSetYRange = false;
    DoSetLogY = false;
    DoInteOutRange = false;
    DoSetAddRange = false;
    AddHeader = true;
    DoRebin = false;
    DoNorm = false;
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

void Plot1D::SetInputName(const char *Filename, const char *Plotname, const char *Legendname, int NoPlot){
    if(NoPlot >= 100){
        cout<<"Change head file!!! max plot number "<<100<<endl<<"Plotting 0 ~ "<<100<<"plots"<<endl;
        return;
    }
    filename[NoPlot] = (TString)Filename;
    plotname[NoPlot] = (TString)Plotname;
    legendname[NoPlot] = (TString)Legendname;
}

void Plot1D::SetRebin(int rebin = -999){
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

void Plot1D::SetXRange(double min, double max){
    if(min > max){
        cout<<"setting XRange wrong!!"<<endl;
        return;
    }
    DoSetXRange = true;
    minX = min;
    maxX = max;
}

void Plot1D::SetYRange(double min, double max){
    if(min > max){
        cout<<"setting YRange wrong!!"<<endl;
        return;
    }
    DoSetYRange = true;
    minY = min; 
    maxY = max;
}

void Plot1D::SetLegend(double xmin = 0.6, double ymin = 0.65, double xmax = 0.75, double ymax = 0.85, double TextSize = 0.04){
    legendminx = xmin;
    legendminy = ymin;
    legendmaxx = xmax;
    legendmaxy = ymax;
    legendtextsize = TextSize;
    DoChangeLegend = true;
}

void Plot1D::AddpadRange(double min, double max){
    if(min > max){
        cout<<"setting pad Range wrong !!"<<endl;
        return;
    }
    DoSetAddRange = true;
    addpadminY = min;
    addpadmaxY = max;
}

void Plot1D::AddYtitle(const char * padYtitle){
    DoChangePadY = true;
    Addpadname = (TString)padYtitle;
}

void Plot1D::SetSave(const char *Savefilename){
    DoSave = true;
    savefilename = (TString)Savefilename;
}

void Plot1D::SetColor(int NoPlot, short NoColor){
        if(NoPlot >= 100){
            cout<<"Change head file!!! max plot number "<<100<<endl<<"Plotting 0 ~ "<<100<<"plots"<<endl;
            return;
        }
    ColorReset[NoPlot] = true;
    plotcolor[NoPlot] = NoColor;
}

void Plot1D::AddRatio(){
    DoAddpad = true;
    DoAddRatio = true;
}

void Plot1D::SetLogY(){
    DoSetLogY = true;
}

void Plot1D::AddLsig(){
    DoAddpad = true;
    DoAddLsig = true;
}

void Plot1D::InteOutRange(){
    DoInteOutRange = true;
}

void Plot1D::SetFillAtt(int NoPlot){
    if(NoPlot >= 100){
        cout<<"Change head file!!! max plot number "<<100<<endl<<"Plotting 0 ~ 100 plots"<<endl;
        return;
    }
    FillReset[NoPlot] = true;
}

void Plot1D::NotAddLegend(){
    Notaddlegend = true;
}

void Plot1D::SetNorm(){
    DoNorm = true;
};

void Plot1D::DrawFigure(){
    Int_t xcanvasrange = 1600;
    Int_t ycanvasrange = 1600;
    
    if(DoAddpad) ycanvasrange = 1600;
    TCanvas *c = new TCanvas("c","canvas",xcanvasrange, ycanvasrange);
    gStyle->SetLineWidth(2);
//    gStyle->SetTextFont(72);

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
        for(int cir1 = 0 ; cir1 < totalplotnumber ; cir1 ++){
            TFile*file = new TFile(filename[cir1]);
            TH1D *A = (TH1D *)file->Get(plotname[cir1]);
            TH1D *AClone  = (TH1D *)A->Clone("AClone");
            if(DoRebin)
                AClone->RebinX(RebinNumber);

            
            if(DoNorm){
                if(cir1 == 0){
                    inte1 = AClone->Integral();
                    //inte1 = AClone->GetBinContent(1);
                }
                else{
                    inte2 = AClone->Integral();
                    //inte2 = AClone->GetBinContent(1);
                    cout<<"Normalize : "<<inte1 / inte2 <<endl;
                    if(inte2 != 0 ){
                        AClone->Scale(inte1 / inte2);
                    }
                    else
                        cout<<"scale factor infinity!!!"<<endl;
                }
            }
            if(maxY < AClone->GetMaximum())
                maxY = AClone->GetMaximum();
//            if(yaxismin > AClone->GetMinimum())
//                yaxismin = AClone->GetMinimum();
        }
        maxY *= 1.1;
        minY = 0;
    }
    //maxY = 50;
//    if(DoSetYRange){
//            AClone->SetMinimum(minY);
//                AClone->SetMaximum(maxY);
//    }

    for(int cir1 = 0 ; cir1 < totalplotnumber ; cir1 ++){
        cout<<"cirr"<<totalplotnumber<<endl;
        cout<<filename[cir1]<<endl;
        cout<<plotname<<endl;
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

        if(DoNorm){
            if(cir1 == 0){
                inte1 = AClone->Integral();
                //inte1 = AClone->GetBinContent(1);
            }
            else{
                inte2 = AClone->Integral();
                //inte2= AClone->GetBinContent(1);
                cout<<"Normalize : "<<inte1 / inte2 <<endl;
                if(inte2 != 0 ){
                    AClone->Scale(inte1 / inte2);
                }
                else
                    cout<<"scale factor infinity!!!"<<endl;
            }
        }


        if(cir1 == 0){
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
        }

        AClone->SetLineWidth(3);

//****************Set Color of Plots************************
        if(ColorReset[cir1]){
            AClone->SetLineColor(plotcolor[cir1]);
//            AClone->SetFillColor(plotcolor[cir1]);
        }
        else{
            AClone->SetLineColor((short)(cir1+1));
//            AClone->SetFillColor((short)(cir1+1));
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

        if(cir1 == 0){
            if(FillReset[cir1])
                AClone->Draw("b hist");
            else
//                AClone->Draw("hist");
                AClone->Draw("c");
        }
        else{
            if(FillReset[cir1])
                AClone->Draw("b hist same");
            else
//                AClone->Draw("hist same");
                AClone->Draw("c same");
        }

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
//            legend->AddEntry(AClone,legendname[cir1],"lpfe");
        }


    }

    legend->Draw("same");

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
                        A_add->GetYaxis()->SetTitle("#frac{num}{den}");
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

