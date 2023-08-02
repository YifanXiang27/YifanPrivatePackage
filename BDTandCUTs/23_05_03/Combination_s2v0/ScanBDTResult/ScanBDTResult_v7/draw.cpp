#include "Plot1D.h"

int main(int argc, char **argv){

    double xmin,xmax,nbins;
    if(argc > 5){

        xmin = stod(argv[6]);
        xmax = stod(argv[7]);
        nbins = stoi(argv[5]);
    }

    Plot1D Figure(argv[1],"Number of Events",2);
    Figure.SetInputName("PlotResult/allbkg.root",argv[2],"bkg",0);
    Figure.SetInputName("PlotResult/data.root",argv[3],"data",1);
    Figure.AddRatio();
    Figure.AddpadRange(0.6,1.4);
    Figure.SetSave(argv[4]);
    if(argc > 5){
        cout<<"rearrange the plots: "<<endl;
        if(xmin > -998 && xmax > -998){
            Figure.SetXRange(xmin,xmax);
            cout<<"xmin = "<<xmin<<endl;
            cout<<"xmax = "<<xmax<<endl;
        }
        if(nbins > 0){
            Figure.SetRebin(nbins);
            cout<<"rebin = "<<nbins<<endl;
        }
    }
    Figure.DrawFigure();



}
