#include "Plot2D.h"

void draw_allplot(){
/*
    //draw plot for Hmass vs BDT, for bkg, include initialize, SetInputName, SetSave, DrawFigure
    Plot2D P_Hmass_BDT_bkg_sum("Hmass","BDT");
    P_Hmass_BDT_bkg_sum.SetInputName("PlotResult/allbkg.root","P_Hmass_BDT");
    P_Hmass_BDT_bkg_sum.SetSave("PNGFiles/BDT_Hmass_bkg_sum");
    P_Hmass_BDT_bkg_sum.DrawFigure();

    //draw plot for Hmass vs BDT, for sig, include initialize, SetInputName, SetSave, DrawFigure
    Plot2D P_Hmass_BDT_sig_sum("Hmass","BDT");
    P_Hmass_BDT_sig_sum.SetInputName("PlotResult/allsig.root","P_Hmass_BDT");
    P_Hmass_BDT_sig_sum.SetSave("PNGFiles/BDT_Hmass_sig_sum");
    P_Hmass_BDT_sig_sum.DrawFigure();

    //draw plot for Hscore vs BDT, for bkg, include initialize, SetInputName, SetSave, DrawFigure
    Plot2D P_Hscore_BDT_bkg_sum("Hscore","BDT");
    P_Hscore_BDT_bkg_sum.SetInputName("PlotResult/allbkg.root","P_Hscore_BDT");
    P_Hscore_BDT_bkg_sum.SetSave("PNGFiles/BDT_Hscore_bkg_sum");
    P_Hscore_BDT_bkg_sum.DrawFigure();

    //draw plot for Hscore vs BDT, for sig, include initialize, SetInputName, SetSave, DrawFigure
    Plot2D P_Hscore_BDT_sig_sum("Hscore","BDT");
    P_Hscore_BDT_sig_sum.SetInputName("PlotResult/allsig.root","P_Hscore_BDT");
    P_Hscore_BDT_sig_sum.SetSave("PNGFiles/BDT_Hscore_sig_sum");
    P_Hscore_BDT_sig_sum.DrawFigure();

    //draw plot for Wmass vs BDT, for bkg, include initialize, SetInputName, SetSave, DrawFigure
    Plot2D P_Wmass_BDT_bkg_sum("Wmass","BDT");
    P_Wmass_BDT_bkg_sum.SetInputName("PlotResult/allbkg.root","P_Wmass_BDT");
    P_Wmass_BDT_bkg_sum.SetSave("PNGFiles/BDT_Wmass_bkg_sum");
    P_Wmass_BDT_bkg_sum.DrawFigure();

    //draw plot for Wmass vs BDT, for sig, include initialize, SetInputName, SetSave, DrawFigure
    Plot2D P_Wmass_BDT_sig_sum("Wmass","BDT");
    P_Wmass_BDT_sig_sum.SetInputName("PlotResult/allsig.root","P_Wmass_BDT");
    P_Wmass_BDT_sig_sum.SetSave("PNGFiles/BDT_Wmass_sig_sum");
    P_Wmass_BDT_sig_sum.DrawFigure();

    //draw plot for Wscore vs BDT, for bkg, include initialize, SetInputName, SetSave, DrawFigure
    Plot2D P_Wscore_BDT_bkg_sum("Wscore","BDT");
    P_Wscore_BDT_bkg_sum.SetInputName("PlotResult/allbkg.root","P_Wscore_BDT");
    P_Wscore_BDT_bkg_sum.SetSave("PNGFiles/BDT_Wscore_bkg_sum");
    P_Wscore_BDT_bkg_sum.DrawFigure();

    //draw plot for Wscore vs BDT, for sig, include initialize, SetInputName, SetSave, DrawFigure
    Plot2D P_Wscore_BDT_sig_sum("Wscore","BDT");
    P_Wscore_BDT_sig_sum.SetInputName("PlotResult/allsig.root","P_Wscore_BDT");
    P_Wscore_BDT_sig_sum.SetSave("PNGFiles/BDT_Wscore_sig_sum");
    P_Wscore_BDT_sig_sum.DrawFigure();

    //draw plot for ST vs BDT, for bkg, include initialize, SetInputName, SetSave, DrawFigure
    Plot2D P_ST_BDT_bkg_sum("ST","BDT");
    P_ST_BDT_bkg_sum.SetInputName("PlotResult/allbkg.root","P_ST_BDT");
    P_ST_BDT_bkg_sum.SetSave("PNGFiles/BDT_ST_bkg_sum");
    P_ST_BDT_bkg_sum.DrawFigure();

    //draw plot for ST vs BDT, for sig, include initialize, SetInputName, SetSave, DrawFigure
    Plot2D P_ST_BDT_sig_sum("ST","BDT");
    P_ST_BDT_sig_sum.SetInputName("PlotResult/allsig.root","P_ST_BDT");
    P_ST_BDT_sig_sum.SetSave("PNGFiles/BDT_ST_sig_sum");
    P_ST_BDT_sig_sum.DrawFigure();

    //draw plot for Mlb vs BDT, for bkg, include initialize, SetInputName, SetSave, DrawFigure
    Plot2D P_Mlb_BDT_bkg_sum("Mlb","BDT");
    P_Mlb_BDT_bkg_sum.SetInputName("PlotResult/allbkg.root","P_Mlb_BDT");
    P_Mlb_BDT_bkg_sum.SetSave("PNGFiles/BDT_Mlb_bkg_sum");
    P_Mlb_BDT_bkg_sum.DrawFigure();

    //draw plot for Mlb vs BDT, for sig, include initialize, SetInputName, SetSave, DrawFigure
    Plot2D P_Mlb_BDT_sig_sum("Mlb","BDT");
    P_Mlb_BDT_sig_sum.SetInputName("PlotResult/allsig.root","P_Mlb_BDT");
    P_Mlb_BDT_sig_sum.SetSave("PNGFiles/BDT_Mlb_sig_sum");
    P_Mlb_BDT_sig_sum.DrawFigure();
    */

    //draw plot for Hmass vs BDT, Lsig LSig, include initialize, SetInputName, SetSave, DrawFigure
    Plot2D P_Hmass_BDT_Lsig("Hmass","BDT");
    P_Hmass_BDT_Lsig.SetInputName("PlotResult/LSig.root","P_Hmass_BDT_Lsig");
    P_Hmass_BDT_Lsig.SetSave("PNGFiles/BDT_Hmass_Lsig");
    P_Hmass_BDT_Lsig.DrawFigure();

    //draw plot for Hscore vs BDT, Lsig LSig, include initialize, SetInputName, SetSave, DrawFigure
    Plot2D P_Hscore_BDT_Lsig("Hscore","BDT");
    P_Hscore_BDT_Lsig.SetInputName("PlotResult/LSig.root","P_Hscore_BDT_Lsig");
    P_Hscore_BDT_Lsig.SetSave("PNGFiles/BDT_Hscore_Lsig");
    P_Hscore_BDT_Lsig.DrawFigure();

    //draw plot for Wmass vs BDT, Lsig LSig, include initialize, SetInputName, SetSave, DrawFigure
    Plot2D P_Wmass_BDT_Lsig("Wmass","BDT");
    P_Wmass_BDT_Lsig.SetInputName("PlotResult/LSig.root","P_Wmass_BDT_Lsig");
    P_Wmass_BDT_Lsig.SetSave("PNGFiles/BDT_Wmass_Lsig");
    P_Wmass_BDT_Lsig.DrawFigure();

    //draw plot for Wscore vs BDT, Lsig LSig, include initialize, SetInputName, SetSave, DrawFigure
    Plot2D P_Wscore_BDT_Lsig("Wscore","BDT");
    P_Wscore_BDT_Lsig.SetInputName("PlotResult/LSig.root","P_Wscore_BDT_Lsig");
    P_Wscore_BDT_Lsig.SetSave("PNGFiles/BDT_Wscore_Lsig");
    P_Wscore_BDT_Lsig.DrawFigure();

    //draw plot for ST vs BDT, Lsig LSig, include initialize, SetInputName, SetSave, DrawFigure
    Plot2D P_ST_BDT_Lsig("ST","BDT");
    P_ST_BDT_Lsig.SetInputName("PlotResult/LSig.root","P_ST_BDT_Lsig");
    P_ST_BDT_Lsig.SetSave("PNGFiles/BDT_ST_Lsig");
    P_ST_BDT_Lsig.DrawFigure();

    //draw plot for Mlb vs BDT, Lsig LSig, include initialize, SetInputName, SetSave, DrawFigure
    Plot2D P_Mlb_BDT_Lsig("Mlb","BDT");
    P_Mlb_BDT_Lsig.SetInputName("PlotResult/LSig.root","P_Mlb_BDT_Lsig");
    P_Mlb_BDT_Lsig.SetSave("PNGFiles/BDT_Mlb_Lsig");
    P_Mlb_BDT_Lsig.DrawFigure();

    


}
