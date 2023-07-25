#include "Plot1D.h"

void draw(){
    Plot1D test("testx","testy",2);
    test.SetInputName("TTZ.root","plot_lepton_pt","lepton_pt",0);
    test.SetInputName("TTZ.root","plot_higgs_pt","higgs_pt",1);
    test.SetRebin(100);
    test.SetXRange(0,2000);
    test.AddRatio();
    test.AddpadRange(0,10);
    test.SetSave("./test");
    test.DrawFigure();
}