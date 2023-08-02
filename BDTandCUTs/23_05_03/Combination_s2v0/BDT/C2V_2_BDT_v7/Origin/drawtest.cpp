#include "Graph1D.h"
#include "Plot1D.h"
#include "Plot2D.h"

void drawtest(){
    Plot1D P_BDT_test("BDT","Number of Events",2);
    P_BDT_test.SetInputName("sigBDTresults.root","S_sig_test_BDT","Signal",0);
    P_BDT_test.SetInputName("bkgBDTresults.root","S_bkg_test_BDT","Backgr",1);
    P_BDT_test.AddLsig();
    P_BDT_test.AddpadRange(0,25);
    P_BDT_test.SetSave("PlotResult/BDTtest");
    P_BDT_test.DrawFigure();

    Plot1D P_BDT_D("BDT","Number of Events",4);
    P_BDT_D.SetInputName("sigBDTresults.root","S_sig_test_BDT","test Signal",0);
    P_BDT_D.SetInputName("bkgBDTresults.root","S_bkg_test_BDT","test Backgr",1);
    P_BDT_D.SetInputName("sigBDTresults.root","S_sig_train_BDT","train Signal",2);
    P_BDT_D.SetInputName("bkgBDTresults.root","S_bkg_train_BDT","train Backgr",3);
    P_BDT_D.SetNorm();
    P_BDT_D.SetSave("PlotResult/BDTD");
    P_BDT_D.DrawFigure();
    


    Graph1D G_BDT_overtraining("passing signal efficiency","passing bkg efficiency",2);
    G_BDT_overtraining.SetInputNamex("sigBDTresults.root","E_sig_train_BDT","train",0);
    G_BDT_overtraining.SetInputNamey("bkgBDTresults.root","E_bkg_train_BDT","train",0);
    G_BDT_overtraining.SetInputNamex("sigBDTresults.root","E_sig_test_BDT","test",1);
    G_BDT_overtraining.SetInputNamey("bkgBDTresults.root","E_bkg_test_BDT","test",1);
    G_BDT_overtraining.SetXRange(0.8,1);
    G_BDT_overtraining.SetYRange(0,1);
    G_BDT_overtraining.SetSave("PlotResult/G_BDTresult");
    G_BDT_overtraining.DrawFigure();

    Graph1D G2_BDT_overtraining("passing signal efficiency","passing bkg efficiency",2);
    G2_BDT_overtraining.SetInputNamex("sigBDTresults.root","E_sig_train_BDT","train",0);
    G2_BDT_overtraining.SetInputNamey("bkgBDTresults.root","E_bkg_train_BDT","train",0);
    G2_BDT_overtraining.SetInputNamex("sigBDTresults.root","E_sig_test_BDT","test",1);
    G2_BDT_overtraining.SetInputNamey("bkgBDTresults.root","E_bkg_test_BDT","test",1);
    G2_BDT_overtraining.SetXRange(0,1);
    G2_BDT_overtraining.SetYRange(0,0.2);
    G2_BDT_overtraining.SetSave("PlotResult/G2_BDTresult");
    G2_BDT_overtraining.DrawFigure();

    Graph1D GA_BDT_overtraining("passing signal efficiency","passing bkg efficiency",2);
    GA_BDT_overtraining.SetInputNamex("sigBDTresults.root","E_sig_train_BDT","train",0);
    GA_BDT_overtraining.SetInputNamey("bkgBDTresults.root","E_bkg_train_BDT","train",0);
    GA_BDT_overtraining.SetInputNamex("sigBDTresults.root","E_sig_test_BDT","test",1);
    GA_BDT_overtraining.SetInputNamey("bkgBDTresults.root","E_bkg_test_BDT","test",1);
    GA_BDT_overtraining.SetXRange(0,1);
    GA_BDT_overtraining.SetYRange(0,1);
    GA_BDT_overtraining.SetSave("PlotResult/GA_BDTresult");
    GA_BDT_overtraining.DrawFigure();





}
