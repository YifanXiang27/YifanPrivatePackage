#define ANALYSIS_SOURCE
#include "Analysis.h"
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TMath.h"
#include "TH1D.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "TLorentzVector.h"
#include "Math/LorentzVector.h"
#include "Math/Point3D.h"
#include "Math/VectorUtil.h"
#include "TH3F.h"
#include <TRandom3.h>
#include <TMinuit.h>
#include <TApplication.h>
#include "TEnv.h"
#include <TComplex.h>
#include <TGraph.h>
#include <TProfile.h>
#include <TProfile2D.h>
#include <iomanip>
//#include "lepScaleFactor.h"
#include "btagsf/BTagCalibrationStandalone.h"



using namespace std;

void Analysis::Loop(const char* TypeName, const char* yearName){
    //bool isData = false;
    //bool isMC = false;

    TString InputName = TString(TypeName);
    TString InputYear = TString(yearName);
    std::string SInputYear(yearName);
    //if(InputYear == "sig")           isData = true;
    //else if(InputYear == "sigdk20")  isData = true;
    //else if(InputYear == "sigdkm20") isData = true;
    //else if(InputYear == "MC")   isMC = true;
    bool if2016 = ((SInputYear.find("2016",0)) != string::npos);
    bool if2017 = ((SInputYear.find("2017",0)) != string::npos);
    bool if2018 = ((SInputYear.find("2018",0)) != string::npos);
    

    if(fChain == 0) return;
    Int_t Nentries = fChain->GetEntries();

    Double_t weight_xsec = -1;

// @@@@@@@@@@ NEED CHANGE @@@@@@@@@@@@
//
//

    if(InputYear == "DYJetsToLL_M-10to502016APV")
        weight_xsec = 15.6291;
    if(InputYear == "DYJetsToLL_M-10to502016")
        weight_xsec = 15.5099;
    if(InputYear == "DYJetsToLL_M-10to502017")
        weight_xsec = 12.5272;
    if(InputYear == "DYJetsToLL_M-10to502018")
        weight_xsec = 13.0565;
    if(InputYear == "DYJetsToLL_M-502016APV")
        weight_xsec = 1.27124;
    if(InputYear == "DYJetsToLL_M-502016")
        weight_xsec = 1.26368;
    if(InputYear == "DYJetsToLL_M-502017")
        weight_xsec = 2.5023;
    if(InputYear == "DYJetsToLL_M-502018")
        weight_xsec = 3.84504;
    if(InputYear == "EWKWMinus2Jets_WToLNu_M-502016APV")
        weight_xsec = 0.280122;
    if(InputYear == "EWKWMinus2Jets_WToLNu_M-502016")
        weight_xsec = 0.246272;
    if(InputYear == "EWKWMinus2Jets_WToLNu_M-502017")
        weight_xsec = 0.328606;
    if(InputYear == "EWKWMinus2Jets_WToLNu_M-502018")
        weight_xsec = 0.429989;
    if(InputYear == "EWKWPlus2Jets_WToLNu_M-502016APV")
        weight_xsec = 0.35136;
    if(InputYear == "EWKWPlus2Jets_WToLNu_M-502016")
        weight_xsec = 0.325203;
    if(InputYear == "EWKWPlus2Jets_WToLNu_M-502017")
        weight_xsec = 0.454335;
    if(InputYear == "EWKWPlus2Jets_WToLNu_M-502018")
        weight_xsec = 0.523173;
    if(InputYear == "EWKWminus2Jets_WToQQ_dipoleRecoilOn2016APV")
        weight_xsec = 0.041664;
    if(InputYear == "EWKWminus2Jets_WToQQ_dipoleRecoilOn2016")
        weight_xsec = 0.035886;
    if(InputYear == "EWKWminus2Jets_WToQQ_dipoleRecoilOn2017")
        weight_xsec = 0.0562756;
    if(InputYear == "EWKWminus2Jets_WToQQ_dipoleRecoilOn2018")
        weight_xsec = 0.0659761;
    if(InputYear == "EWKWplus2Jets_WToQQ_dipoleRecoilOn2016APV")
        weight_xsec = 0.042136;
    if(InputYear == "EWKWplus2Jets_WToQQ_dipoleRecoilOn2016")
        weight_xsec = 0.035886;
    if(InputYear == "EWKWplus2Jets_WToQQ_dipoleRecoilOn2017")
        weight_xsec = 0.0554309;
    if(InputYear == "EWKWplus2Jets_WToQQ_dipoleRecoilOn2018")
        weight_xsec = 0.0637573;
    if(InputYear == "EWKZ2Jets_ZToLL_M-502016APV")
        weight_xsec = 0.242829;
    if(InputYear == "EWKZ2Jets_ZToLL_M-502016")
        weight_xsec = 0.230813;
    if(InputYear == "EWKZ2Jets_ZToLL_M-502017")
        weight_xsec = 0.446132;
    if(InputYear == "EWKZ2Jets_ZToLL_M-502018")
        weight_xsec = 0.371334;
    if(InputYear == "EWKZ2Jets_ZToNuNu_M-502016APV")
        weight_xsec = 0.144313;
    if(InputYear == "EWKZ2Jets_ZToNuNu_M-502016")
        weight_xsec = 0.120135;
    if(InputYear == "EWKZ2Jets_ZToNuNu_M-502017")
        weight_xsec = 0.149594;
    if(InputYear == "EWKZ2Jets_ZToNuNu_M-502018")
        weight_xsec = 0.215555;
    if(InputYear == "EWKZ2Jets_ZToQQ_dipoleRecoilOn2016APV")
        weight_xsec = 0.0418314;
    if(InputYear == "EWKZ2Jets_ZToQQ_dipoleRecoilOn2016")
        weight_xsec = 0.036396;
    if(InputYear == "EWKZ2Jets_ZToQQ_dipoleRecoilOn2017")
        weight_xsec = 0.0553893;
    if(InputYear == "EWKZ2Jets_ZToQQ_dipoleRecoilOn2018")
        weight_xsec = 0.0637956;
    if(InputYear == "TTTo2L2Nu2016APV")
        weight_xsec = 0.000637235;
    if(InputYear == "TTTo2L2Nu2016")
        weight_xsec = 0.000472642;
    if(InputYear == "TTTo2L2Nu2017")
        weight_xsec = 0.000476439;
    if(InputYear == "TTTo2L2Nu2018")
        weight_xsec = 0.000508988;
    if(InputYear == "TTToHadronic2016APV")
        weight_xsec = 0.000241649;
    if(InputYear == "TTToHadronic2016")
        weight_xsec = 0.000189043;
    if(InputYear == "TTToHadronic2017")
        weight_xsec = 0.000214604;
    if(InputYear == "TTToHadronic2018")
        weight_xsec = 0.000216954;
    if(InputYear == "TTToSemiLeptonic2016APV")
        weight_xsec = 0.000179307;
    if(InputYear == "TTToSemiLeptonic2016")
        weight_xsec = 0.000141024;
    if(InputYear == "TTToSemiLeptonic2017")
        weight_xsec = 0.000145705;
    if(InputYear == "TTToSemiLeptonic2018")
        weight_xsec = 0.00015504;
    if(InputYear == "TTWJetsToLNu2016APV")
        weight_xsec = 0.0041804;
    if(InputYear == "TTWJetsToLNu2016")
        weight_xsec = 0.00308519;
    if(InputYear == "TTWJetsToLNu2017")
        weight_xsec = 0.00354575;
    if(InputYear == "TTWJetsToLNu2018")
        weight_xsec = 0.00348217;
    if(InputYear == "TTWW2016APV")
        weight_xsec = 0.000807482;
    if(InputYear == "TTWW2016")
        weight_xsec = 0.000625615;
    if(InputYear == "TTWW2017")
        weight_xsec = 0.000684217;
    if(InputYear == "TTWW2018")
        weight_xsec = 0.000727278;
    if(InputYear == "TTWZ2016APV")
        weight_xsec = 0.000541541;
    if(InputYear == "TTWZ2016")
        weight_xsec = 0.000410629;
    if(InputYear == "TTWZ2017")
        weight_xsec = 0.000460853;
    if(InputYear == "TTWZ2018")
        weight_xsec = 0.000465612;
    if(InputYear == "TTZToLLNuNu_M-102016APV")
        weight_xsec = 0.00348729;
    if(InputYear == "TTZToLLNuNu_M-102016")
        weight_xsec = 0.00289547;
    if(InputYear == "TTZToLLNuNu_M-102017")
        weight_xsec = 0.0030665;
    if(InputYear == "TTZToLLNuNu_M-102018")
        weight_xsec = 0.00315665;
    if(InputYear == "TTbb_4f_TTTo2L2Nu2016APV")
        weight_xsec = 0.00012262;
    if(InputYear == "TTbb_4f_TTTo2L2Nu2016")
        weight_xsec = 9.32674e-05;
    if(InputYear == "TTbb_4f_TTTo2L2Nu2017")
        weight_xsec = 0.000104273;
    if(InputYear == "TTbb_4f_TTTo2L2Nu2018")
        weight_xsec = 0.000108612;
    if(InputYear == "TTbb_4f_TTToSemiLeptonic2016APV")
        weight_xsec = 0.000211376;
    if(InputYear == "TTbb_4f_TTToSemiLeptonic2016")
        weight_xsec = 0.000168898;
    if(InputYear == "TTbb_4f_TTToSemiLeptonic2017")
        weight_xsec = 0.000167415;
    if(InputYear == "TTbb_4f_TTToSemiLeptonic2018")
        weight_xsec = 0.000158203;
    if(InputYear == "VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2016APV")
        weight_xsec = 0.000193669;
    if(InputYear == "VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2016")
        weight_xsec = 0.000194278;
    if(InputYear == "VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2017")
        weight_xsec = 0.000221399;
    if(InputYear == "VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2018")
        weight_xsec = 0.000318081;
    if(InputYear == "VHToNonbb_M1252016APV")
        weight_xsec = 0.01682;
    if(InputYear == "VHToNonbb_M1252016")
        weight_xsec = 0.0193468;
    if(InputYear == "VHToNonbb_M1252017")
        weight_xsec = 0.018091;
    if(InputYear == "VHToNonbb_M1252018")
        weight_xsec = 0.0187589;
    if(InputYear == "WJetsToLNu_HT-100To2002016APV")
        weight_xsec = 1.1908;
    if(InputYear == "WJetsToLNu_HT-100To2002016")
        weight_xsec = 1.10886;
    if(InputYear == "WJetsToLNu_HT-100To2002017")
        weight_xsec = 1.16881;
    if(InputYear == "WJetsToLNu_HT-100To2002018")
        weight_xsec = 1.55112;
    if(InputYear == "WJetsToLNu_HT-1200To25002016APV")
        weight_xsec = 0.0109394;
    if(InputYear == "WJetsToLNu_HT-1200To25002016")
        weight_xsec = 0.00929078;
    if(InputYear == "WJetsToLNu_HT-1200To25002017")
        weight_xsec = 0.0103383;
    if(InputYear == "WJetsToLNu_HT-1200To25002018")
        weight_xsec = 0.0108959;
    if(InputYear == "WJetsToLNu_HT-200To4002016APV")
        weight_xsec = 0.380737;
    if(InputYear == "WJetsToLNu_HT-200To4002016")
        weight_xsec = 0.380484;
    if(InputYear == "WJetsToLNu_HT-200To4002017")
        weight_xsec = 0.344194;
    if(InputYear == "WJetsToLNu_HT-200To4002018")
        weight_xsec = 0.360594;
    if(InputYear == "WJetsToLNu_HT-2500ToInf2016APV")
        weight_xsec = 0.000581703;
    if(InputYear == "WJetsToLNu_HT-2500ToInf2016")
        weight_xsec = 0.000512308;
    if(InputYear == "WJetsToLNu_HT-2500ToInf2017")
        weight_xsec = 0.000903933;
    if(InputYear == "WJetsToLNu_HT-2500ToInf2018")
        weight_xsec = 0.000726316;
    if(InputYear == "WJetsToLNu_HT-400To6002016APV")
        weight_xsec = 0.374249;
    if(InputYear == "WJetsToLNu_HT-400To6002016")
        weight_xsec = 0.36104;
    if(InputYear == "WJetsToLNu_HT-400To6002017")
        weight_xsec = 0.353684;
    if(InputYear == "WJetsToLNu_HT-400To6002018")
        weight_xsec = 0.378267;
    if(InputYear == "WJetsToLNu_HT-600To8002016APV")
        weight_xsec = 0.0945842;
    if(InputYear == "WJetsToLNu_HT-600To8002016")
        weight_xsec = 0.0821543;
    if(InputYear == "WJetsToLNu_HT-600To8002017")
        weight_xsec = 0.0834916;
    if(InputYear == "WJetsToLNu_HT-600To8002018")
        weight_xsec = 0.0883237;
    if(InputYear == "WJetsToLNu_HT-70To1002016APV")
        weight_xsec = 1.51115;
    if(InputYear == "WJetsToLNu_HT-70To1002016")
        weight_xsec = 1.11022;
    if(InputYear == "WJetsToLNu_HT-70To1002017")
        weight_xsec = 1.22953;
    if(InputYear == "WJetsToLNu_HT-70To1002018")
        weight_xsec = 1.19107;
    if(InputYear == "WJetsToLNu_HT-800To12002016APV")
        weight_xsec = 0.0404996;
    if(InputYear == "WJetsToLNu_HT-800To12002016")
        weight_xsec = 0.0389598;
    if(InputYear == "WJetsToLNu_HT-800To12002017")
        weight_xsec = 0.0409902;
    if(InputYear == "WJetsToLNu_HT-800To12002018")
        weight_xsec = 0.0418681;
    if(InputYear == "WWTo2L2Nu2016APV")
        weight_xsec = 0.00710518;
    if(InputYear == "WWTo2L2Nu2016")
        weight_xsec = 0.00636799;
    if(InputYear == "WWTo2L2Nu2017")
        weight_xsec = 0.00642716;
    if(InputYear == "WWTo2L2Nu2018")
        weight_xsec = 0.00656189;
    if(InputYear == "WWTolnulnu2016APV")
        weight_xsec = 10.0838;
    if(InputYear == "WWTolnulnu2016")
        weight_xsec = 8.68625;
    if(InputYear == "WWTolnulnu2017")
        weight_xsec = 33.0717;
    if(InputYear == "WWTolnulnu2018")
        weight_xsec = 45.852;
    if(InputYear == "WWW_4F2016APV")
        weight_xsec = 0.00363464;
    if(InputYear == "WWW_4F2016")
        weight_xsec = 0.00390494;
    if(InputYear == "WWW_4F2017")
        weight_xsec = 0.00407266;
    if(InputYear == "WWW_4F2018")
        weight_xsec = 0.00583093;
    if(InputYear == "WWZ_4F2016APV")
        weight_xsec = 0.00372044;
    if(InputYear == "WWZ_4F2016")
        weight_xsec = 0.00353674;
    if(InputYear == "WWZ_4F2017")
        weight_xsec = 0.225642;
    if(InputYear == "WWZ_4F2018")
        weight_xsec = 0.0057934;
    if(InputYear == "WZJJ_EWK_InclusivePolarization2016APV")
        weight_xsec = 0.0107987;
    if(InputYear == "WZJJ_EWK_InclusivePolarization2016")
        weight_xsec = 0.0100226;
    if(InputYear == "WZJJ_EWK_InclusivePolarization2017")
        weight_xsec = 0.0226449;
    if(InputYear == "WZJJ_EWK_InclusivePolarization2018")
        weight_xsec = 0.0347331;
    if(InputYear == "WZTo3LNu2016APV")
        weight_xsec = 0.00106073;
    if(InputYear == "WZTo3LNu2016")
        weight_xsec = 0.000842635;
    if(InputYear == "WZTo3LNu2017")
        weight_xsec = 0.00210097;
    if(InputYear == "WZTo3LNu2018")
        weight_xsec = 0.00318055;
    if(InputYear == "WZZ2016APV")
        weight_xsec = 0.00352214;
    if(InputYear == "WZZ2016")
        weight_xsec = 0.00359348;
    if(InputYear == "WZZ2017")
        weight_xsec = 0.00408461;
    if(InputYear == "WZZ2018")
        weight_xsec = 0.00581363;
    if(InputYear == "WminusH_HToBB_WToLNu_M-1252016APV")
        weight_xsec = 0.00209656;
    if(InputYear == "WminusH_HToBB_WToLNu_M-1252016")
        weight_xsec = 0.00207706;
    if(InputYear == "WminusH_HToBB_WToLNu_M-1252017")
        weight_xsec = 0.00242768;
    if(InputYear == "WminusH_HToBB_WToLNu_M-1252018")
        weight_xsec = 0.00339087;
    if(InputYear == "WplusH_HToBB_WToLNu_M-1252016APV")
        weight_xsec = 0.00222174;
    if(InputYear == "WplusH_HToBB_WToLNu_M-1252016")
        weight_xsec = 0.00226259;
    if(InputYear == "WplusH_HToBB_WToLNu_M-1252017")
        weight_xsec = 0.00255594;
    if(InputYear == "WplusH_HToBB_WToLNu_M-1252018")
        weight_xsec = 0.0036796;
    if(InputYear == "ZH_HToBB_ZToLL_M-1252016APV")
        weight_xsec = 0.00241384;
    if(InputYear == "ZH_HToBB_ZToLL_M-1252016")
        weight_xsec = 0.00250719;
    if(InputYear == "ZH_HToBB_ZToLL_M-1252017")
        weight_xsec = 0.00296544;
    if(InputYear == "ZH_HToBB_ZToLL_M-1252018")
        weight_xsec = 0.00402611;
    if(InputYear == "ZZJJTo4L2016APV")
        weight_xsec = 8.63572e-05;
    if(InputYear == "ZZJJTo4L2016")
        weight_xsec = 7.46111e-05;
    if(InputYear == "ZZJJTo4L2017")
        weight_xsec = 9.1802e-05;
    if(InputYear == "ZZJJTo4L2018")
        weight_xsec = 0.000131937;
    if(InputYear == "ZZTo2L2Nu2016APV")
        weight_xsec = 0.000670512;
    if(InputYear == "ZZTo2L2Nu2016")
        weight_xsec = 0.000611274;
    if(InputYear == "ZZTo2L2Nu2017")
        weight_xsec = 0.000588983;
    if(InputYear == "ZZTo2L2Nu2018")
        weight_xsec = 0.000607852;
    if(InputYear == "ZZTo4L_M-1toInf2016APV")
        weight_xsec = 9.02688e-05;
    if(InputYear == "ZZTo4L_M-1toInf2016")
        weight_xsec = 8.40114e-05;
    if(InputYear == "ZZTo4L_M-1toInf2017")
        weight_xsec = 9.03515e-05;
    if(InputYear == "ZZTo4L_M-1toInf2018")
        weight_xsec = 8.44991e-05;
    if(InputYear == "ZZZ2016APV")
        weight_xsec = 0.00348442;
    if(InputYear == "ZZZ2016")
        weight_xsec = 0.00351073;
    if(InputYear == "ZZZ2017")
        weight_xsec = 0.00412841;
    if(InputYear == "ZZZ2018")
        weight_xsec = 0.0057154;
    if(InputYear == "ggZH_HToBB_ZToLL_M-1252016APV")
        weight_xsec = 0.0032155;
    if(InputYear == "ggZH_HToBB_ZToLL_M-1252016")
        weight_xsec = 0.00305625;
    if(InputYear == "ggZH_HToBB_ZToLL_M-1252017")
        weight_xsec = 0.00353689;
    if(InputYear == "ggZH_HToBB_ZToLL_M-1252018")
        weight_xsec = 0.00485784;
    if(InputYear == "ttHToNonbb_M1252016APV")
        weight_xsec = 0.00423661;
    if(InputYear == "ttHToNonbb_M1252016")
        weight_xsec = 0.00321883;
    if(InputYear == "ttHToNonbb_M1252017")
        weight_xsec = 0.00351483;
    if(InputYear == "ttHToNonbb_M1252018")
        weight_xsec = 0.00349592;
    if(InputYear == "ttHTobb_M1252016APV")
        weight_xsec = 0.00107828;
    if(InputYear == "ttHTobb_M1252016")
        weight_xsec = 0.000869231;
    if(InputYear == "ttHTobb_M1252017")
        weight_xsec = 0.00135507;
    if(InputYear == "ttHTobb_M1252018")
        weight_xsec = 0.00157649;







    if(InputYear == "VBSWWH_OS2016")
        weight_xsec = 0.000475387;
    if(InputYear == "VBSWWH_OS2016APV")
        weight_xsec = 0.000552026;
    if(InputYear == "VBSWWH_OS2017")
        weight_xsec = 0.00117444;
    if(InputYear == "VBSWWH_OS2018")
        weight_xsec = 0.00168832;
    if(InputYear == "VBSWWH_SS2016")
        weight_xsec = 0.000256521;
    if(InputYear == "VBSWWH_SS2016APV")
        weight_xsec = 0.000297875;
    if(InputYear == "VBSWWH_SS2017")
        weight_xsec = 0.000633733;
    if(InputYear == "VBSWWH_SS2018")
        weight_xsec = 0.000911022;
    if(InputYear == "VBSWZH2016")
        weight_xsec = 0.00027518;
    if(InputYear == "VBSWZH2016APV")
        weight_xsec = 0.000319542;
    if(InputYear == "VBSWZH2017")
        weight_xsec = 0.00067983;
    if(InputYear == "VBSWZH2018")
        weight_xsec = 0.000977289;
    if(InputYear == "VBSZZH2016")
        weight_xsec = 0.000190289;
    if(InputYear == "VBSZZH2016APV")
        weight_xsec = 0.000220966;
    if(InputYear == "VBSZZH2017")
        weight_xsec = 0.000470108;
    if(InputYear == "VBSZZH2018")
        weight_xsec = 0.000675804;

    if(weight_xsec == -1) weight_xsec = 0;

    if(isData)
        weight_xsec = 1;

    if(isData)
        cout<<"start looping data : "<<Nentries<<" events "<<endl;
    else
        cout<<"start loopoing MC  : "<<Nentries<<" events "<<endl;

    cout<<"weight : "<<weight_xsec<<endl;

    cout<<"Input Year : "<<InputYear<<endl;

    for(int ii = 0 ; ii < Nentries ; ii ++){
        //if(ii%10000 == 0) cout<<ii<<endl;
        
        fChain->GetEntry(ii,0);
        

        //event_number_raw++;
        
        Double_t weight = 1;
        Double_t generatorweight;

        weight *= RGenerator_weight;

        //ADDINGGENERALWEIGHT
        //
        weight *= RL1PreFiringWeight_Nom;

        for(int jj = 0 ; jj < 28 ; jj ++){
            myhists->total_C2Vreweight[jj] = RLHEReweightingWeight[jj];
        }
        myhists->total_C2Vreweight[28] = 1.0;
        for(int jj = 28 ; jj < 36 ; jj ++){
            myhists->total_C2Vreweight[jj+1] = RLHEReweightingWeight[jj];
        }

        event_number_raw+=1;

        if(!isData){
            weight *= P_Pileupreweight->GetBinContent(P_Pileupreweight->FindBin(RPileup_nTrueInt));
        }


        if(isEWK){
            TLorentzVector TEWKq1;
            TLorentzVector TEWKq2;
            TLorentzVector TEWKlep;
            TLorentzVector TEWKnu;
            TEWKq1.SetPtEtaPhiM(RLHEPart_pt[4],RLHEPart_eta[4],RLHEPart_phi[4],RLHEPart_mass[4]);
            TEWKq2.SetPtEtaPhiM(RLHEPart_pt[5],RLHEPart_eta[5],RLHEPart_phi[5],RLHEPart_mass[5]);
            TEWKlep.SetPtEtaPhiM(RLHEPart_pt[2],RLHEPart_eta[2],RLHEPart_phi[2],RLHEPart_mass[2]);
            TEWKnu.SetPtEtaPhiM(RLHEPart_pt[3],RLHEPart_eta[3],RLHEPart_phi[3],RLHEPart_mass[3]);
            int chargequark[7] = {0,-1,2,-1,2,-1,2};
            int EWKpdgq1 = RLHEPart_pdgId[4];
            int EWKpdgq2 = RLHEPart_pdgId[5];
            int EWKsignq1 = (EWKpdgq1 > 0) - (EWKpdgq1 < 0);
            int EWKsignq2 = (EWKpdgq2 > 0) - (EWKpdgq2 < 0);
            double EWKMass_q12 = (TEWKq1 + TEWKq2).M();
            double EWKMass_lnu = (TEWKlep + TEWKnu).M();
            double fabscharge=(fabs((double)(EWKsignq1 * chargequark[abs(EWKpdgq1)] + (EWKsignq2 * chargequark[abs(EWKpdgq2)]))))/3;
            double EWKbjet_pt = -999;
            if(fabscharge ==1){
                if( EWKMass_q12 >= 70 && EWKMass_q12 < 90  && 
                    EWKMass_lnu >= 70 && EWKMass_lnu < 90){
                    continue;
                }
            }
            if(EWKMass_q12 >= 95){
                if( abs(EWKpdgq1) == 5 && abs(EWKpdgq2) == 5){
                    if(TEWKq1.Pt() > TEWKq2.Pt())  EWKbjet_pt = TEWKq1.Pt();
                    else                           EWKbjet_pt = TEWKq2.Pt();
                }else if(abs(EWKpdgq1) == 5){
                    EWKbjet_pt = TEWKq1.Pt();
                }else if(abs(EWKpdgq2) == 5){
                    EWKbjet_pt = TEWKq2.Pt();
                }
            }
            if(EWKbjet_pt > -998){
                double EWKreweight;
                EWKreweight = P_EWKReweight->GetBinContent(P_EWKReweight->FindBin(EWKbjet_pt));
                
                weight = weight * EWKreweight;
            }
        }

        if(isData) weight = 1;

  
        weight = weight * weight_xsec;
        weighted_number_total += weight;
        weighted_error_total += (weight * weight);

        generatorweight = weight;

	//cout<<isData<<endl;

        if(isData){
            bool ifDataGoodRun = false;
            ifstream infile;
            infile.open("./Lib/goodrun.txt",ios::in);
            int goodrun;
            int goodlumimin;
            int goodlumimax;
            while(infile>>goodrun){
                infile>>goodlumimin;
                infile>>goodlumimax;
                if(Rrun == goodrun){
                    if(RluminosityBlock <= goodlumimax && RluminosityBlock >= goodlumimin)  ifDataGoodRun = true;
                }
            }
            infile.close();
            if(!ifDataGoodRun) continue;
        }
        
        if(!RFlag_goodVertices) continue;
        if(isData && (!RFlag_globalSuperTightHalo2016Filter)) continue;
        if(!RFlag_HBHENoiseFilter) continue;
        if(!RFlag_HBHENoiseIsoFilter) continue;
        if(!RFlag_EcalDeadCellTriggerPrimitiveFilter) continue;
        if(!RFlag_BadPFMuonFilter) continue;
        if(!RFlag_eeBadScFilter) continue;
        if(!RFlag_BadPFMuonDzFilter) continue;
        if(yearNumber == 2017 || yearNumber == 2018){
            if(!RFlag_ecalBadCalibFilter) continue; //V2 for not UL samples
        }
        weighted_number_flag += weight;
        weighted_error_flag += weight * weight;

        bool passHLTtrigger = false;

        if(!ifExistHLT_IsoMu22) RHLT_IsoMu22 = false;
        if(!ifExistHLT_IsoTkMu22) RHLT_IsoTkMu22 = false;
        if(!ifExistHLT_IsoMu24) RHLT_IsoMu24 = false;
        if(!ifExistHLT_IsoTkMu24) RHLT_IsoTkMu24 = false;
        if(!ifExistHLT_Ele25_eta2p1_WPTight_Gsf) RHLT_Ele25_eta2p1_WPTight_Gsf = false;
        if(!ifExistHLT_Ele27_eta2p1_WPTight_Gsf) RHLT_Ele27_eta2p1_WPTight_Gsf = false;
        if(!ifExistHLT_Ele35_WPTight_Gsf) RHLT_Ele35_WPTight_Gsf = false;
        if(!ifExistHLT_Ele32_WPTight_Gsf) RHLT_Ele32_WPTight_Gsf = false;
        /*if(SInputYear.find("2016",0) != string::npos){
            if(RHLT_IsoMu22 || RHLT_IsoTkMu22 || RHLT_IsoMu24 || RHLT_IsoTkMu24)  passHLTtrigger = true;
            if(RHLT_Ele25_eta2p1_WPTight_Gsf || RHLT_Ele27_eta2p1_WPTight_Gsf)     passHLTtrigger = true;
        }else if(SInputYear.find("2017",0) != string::npos){
            if(RHLT_IsoMu24 || RHLT_IsoMu27)                                       passHLTtrigger = true;
            if(RHLT_Ele35_WPTight_Gsf || RHLT_Ele32_WPTight_Gsf)                  passHLTtrigger = true;
        }else if(SInputYear.find("2018",0) != string::npos){
            if(RHLT_IsoMu24 || RHLT_IsoMu27)                                       passHLTtrigger = true;
            if(RHLT_Ele35_WPTight_Gsf || RHLT_Ele32_WPTight_Gsf)                  passHLTtrigger = true;
        }else{
            cout<<"ERROR MESSAGE : From HLT Trigger part : should not see this message~"<<endl;
        }*/
        if(SInputYear.find("2016",0) != string::npos){
            if(RHLT_IsoMu24 || RHLT_IsoTkMu24 || RHLT_Ele27_eta2p1_WPTight_Gsf) passHLTtrigger = true;
        }else if(SInputYear.find("2017",0) != string::npos){
            if(RHLT_IsoMu27 || RHLT_Ele32_WPTight_Gsf_L1DoubleEG) passHLTtrigger = true;
        }else if(SInputYear.find("2018",0) != string::npos){
            if(RHLT_IsoMu24 || RHLT_Ele32_WPTight_Gsf) passHLTtrigger = true;
        }else{
            cout<<"ERROR MESSAGE : From HLT Trigger part : should not see this message~"<<endl;
        }

        //if(isData && !passHLTtrigger) continue;
        weighted_number_beforetrigger += weight;
        weighted_error_beforetrigger += weight * weight;


        int Idlep1 = -999;
        int Idlep2 = -999;
        int Idxlep1 = -999;
        int Idxlep2 = -999;
        int Nlooselepton=0;
        int Ntightlepton=0;
        int IdxLeptonJet1=-999;
        int IdxLeptonJet2=-999;

        TLorentzVector LooseLeptons[20];
        int nLooseLeptons = 0;

        TLorentzVector LooseTaus[20];
        int nLooseTaus = 0;

        int LooseLeptonsJetidx[20];


        for(int jj = 0 ; jj < RnElectron ; jj ++){
            if(electronIDVBS(jj,0)){
                Nlooselepton ++;
                LooseLeptons[nLooseLeptons].SetPtEtaPhiM(RElectron_pt[jj],RElectron_eta[jj],RElectron_phi[jj],RElectron_mass[jj]);
                LooseLeptonsJetidx[nLooseLeptons] = RElectron_jetIdx[jj];
                nLooseLeptons++;
                if(nLooseLeptons == 20) {
                    nLooseLeptons = 19;
                    cout<<"ERROR!   VETO LEPTON NUMBER EXCEED !!!"<<endl;
                }
            }else{
                continue;
            }
            if(electronIDVBS(jj,2)){
                if(RElectron_pt[jj] <= 35) continue;
                Ntightlepton ++;
                int idlepton;
                if(RElectron_charge[jj] > 0) idlepton = -11;
                else idlepton = 11;
                if(     Idlep1 == -999){
                    Idxlep1 = jj;
                    IdxLeptonJet1 = RElectron_jetIdx[jj];
                    Idlep1 = idlepton;
                }
                else if(Idlep2 == -999){
                    Idxlep2 = jj;
                    IdxLeptonJet2 = RElectron_jetIdx[jj];
                    Idlep2 = idlepton;
                }
            }
        }

        //cout<<Nlooselepton<<"    "<<Ntightlepton<<"   ";

        for(int jj = 0 ; jj < RnMuon ; jj ++){
            if(muonIDVBS(jj,0)){
                Nlooselepton ++;
                LooseLeptons[nLooseLeptons].SetPtEtaPhiM(RMuon_pt[jj],RMuon_eta[jj],RMuon_phi[jj],RMuon_mass[jj]);
                LooseLeptonsJetidx[nLooseLeptons] = RMuon_jetIdx[jj];
                nLooseLeptons++;
                if(nLooseLeptons == 20) {
                    nLooseLeptons = 19;
                    cout<<"ERROR!   VETO LEPTON NUMBER EXCEED !!!"<<endl;
                }
            }else{
                continue;
            }
            if(muonIDVBS(jj,2)){
                if(RMuon_pt[jj] <= 35) continue;
                Ntightlepton ++;
                int idlepton;
                if(RMuon_charge[jj] > 0) idlepton = -13;
                else idlepton = 13;
                if(     Idlep1 == -999){
                    Idxlep1 = jj;
                    IdxLeptonJet1 = RMuon_jetIdx[jj];
                    Idlep1 = idlepton;
                }
                else if(Idlep2 == -999){
                    Idxlep2 = jj;
                    IdxLeptonJet2 = RMuon_jetIdx[jj];
                    Idlep2 = idlepton;
                }
            }
        }



        //cout<<Nlooselepton<<"    "<<Ntightlepton<<endl;
        if(Nlooselepton != 1) continue;
        if(Ntightlepton != 1) continue;

        TLorentzVector TRlepton1;
        if(abs(Idlep1) == 11)
            TRlepton1.SetPtEtaPhiM(RElectron_pt[Idxlep1],RElectron_eta[Idxlep1],RElectron_phi[Idxlep1],RElectron_mass[Idxlep1]);
        else if(abs(Idlep1) == 13)
            TRlepton1.SetPtEtaPhiM(RMuon_pt[Idxlep1],RMuon_eta[Idxlep1],RMuon_phi[Idxlep1],RMuon_mass[Idxlep1]);
        else{
            cout<<"Should not see this message: in preselection should already require e or mu as leptons"<<endl;
            continue;
        }

        if(abs(Idlep1) == 11 && TRlepton1.Pt() < 40) continue;
        if(abs(Idlep1) == 13 && TRlepton1.Pt() < 40) continue;



        double leptonsf = 1;
        int    leptonsf_year = yearNumber;
        

        if(!isData){
            if(abs(Idlep1) == 11){
                double ElectronEta = fabs(TRlepton1.Eta());
                double ElectronPt = TRlepton1.Pt();
                double ElectronPtReco = TRlepton1.Pt();
                if(ElectronPt >= 120 ) ElectronPt = 119;
                if(ElectronPtReco >= 500) ElectronPtReco = 499;

                double leptoneffTrigcentral = Elec_Eff_Trig->GetBinContent(Elec_Eff_Trig->FindBin(TRlepton1.Eta(),ElectronPtReco));
                double leptonerrTrigcentral = Elec_Eff_Trig->GetBinError(Elec_Eff_Trig->FindBin(TRlepton1.Eta(),ElectronPtReco));

                double leptoneffRecocentral = Elec_Eff_Reco->GetBinContent(Elec_Eff_Reco->FindBin(TRlepton1.Eta(),ElectronPtReco));
                double leptonerrRecocentral = Elec_Eff_Reco->GetBinError(Elec_Eff_Reco->FindBin(TRlepton1.Eta(),ElectronPtReco));

                double leptoneffReco_Loosecentral = Elec_Eff_Reco_Loose->GetBinContent(Elec_Eff_Reco_Loose->FindBin(ElectronEta,ElectronPt));
                double leptonerrReco_Loosecentral = Elec_Eff_Reco_Loose->GetBinError(Elec_Eff_Reco_Loose->FindBin(ElectronEta,ElectronPt));

                double leptoneffIsocentral = Elec_Eff_Iso->GetBinContent(Elec_Eff_Iso->FindBin(ElectronEta,ElectronPt));
                double leptonerrIsocentral = Elec_Eff_Iso->GetBinError(Elec_Eff_Iso->FindBin(ElectronEta,ElectronPt));

                double leptoneffEFTcentral = Elec_Eff_EFT->GetBinContent(Elec_Eff_EFT->FindBin(ElectronEta,ElectronPt));
                double leptonerrEFTcentral = Elec_Eff_EFT->GetBinError(Elec_Eff_EFT->FindBin(ElectronEta,ElectronPt));

                double leptonsfcentral = leptoneffTrigcentral * leptoneffRecocentral * leptoneffReco_Loosecentral * leptoneffIsocentral * leptoneffEFTcentral;

                double leptonsfTrigup = (leptoneffTrigcentral + leptonerrTrigcentral) * leptoneffRecocentral * leptoneffReco_Loosecentral * leptoneffIsocentral * leptoneffEFTcentral;
                double leptonsfRecoup = leptoneffTrigcentral * (leptoneffRecocentral + leptonerrRecocentral) * leptoneffReco_Loosecentral * leptoneffIsocentral * leptoneffEFTcentral;
                double leptonsfReco_Looseup = leptoneffTrigcentral * leptoneffRecocentral * (leptoneffReco_Loosecentral + leptonerrReco_Loosecentral) * leptoneffIsocentral * leptoneffEFTcentral;
                double leptonsfIsoup = leptoneffTrigcentral * leptoneffRecocentral * leptoneffReco_Loosecentral * (leptoneffIsocentral + leptonerrIsocentral) * leptoneffEFTcentral;
                double leptonsfEFTup = leptoneffTrigcentral * leptoneffRecocentral * leptoneffReco_Loosecentral * leptoneffIsocentral * (leptoneffEFTcentral + leptonerrEFTcentral);


                double leptonsfTrigdown = (leptoneffTrigcentral - leptonerrTrigcentral) * leptoneffRecocentral * leptoneffReco_Loosecentral * leptoneffIsocentral * leptoneffEFTcentral;
                double leptonsfRecodown = leptoneffTrigcentral * (leptoneffRecocentral - leptonerrRecocentral) * leptoneffReco_Loosecentral * leptoneffIsocentral * leptoneffEFTcentral;
                double leptonsfReco_Loosedown = leptoneffTrigcentral * leptoneffRecocentral * (leptoneffReco_Loosecentral - leptonerrReco_Loosecentral) * leptoneffIsocentral * leptoneffEFTcentral;
                double leptonsfIsodown = leptoneffTrigcentral * leptoneffRecocentral * leptoneffReco_Loosecentral * (leptoneffIsocentral - leptonerrIsocentral) * leptoneffEFTcentral;
                double leptonsfEFTdown = leptoneffTrigcentral * leptoneffRecocentral * leptoneffReco_Loosecentral * leptoneffIsocentral * (leptoneffEFTcentral - leptonerrEFTcentral);

                leptonsf = leptonsfcentral;
                //ADDINGELECCORRECTIONS
leptonsf = leptonsfIsoup;
            }
            else if(abs(Idlep1) == 13){
                double MuonEta = fabs(TRlepton1.Eta());
                double MuonPt = TRlepton1.Pt();
                double MuonPtReco = TRlepton1.Pt();
                if(MuonPt >= 120 ) MuonPt = 119;
                if(MuonPtReco >= 200) MuonPtReco = 199;

                double leptoneffTrigcentral = Muon_Eff_Trig->GetBinContent(Muon_Eff_Trig->FindBin(TRlepton1.Eta(), MuonPtReco));
                double leptonerrTrigcentral = Muon_Eff_Trig->GetBinError(Muon_Eff_Trig->FindBin(TRlepton1.Eta(), MuonPtReco));

                double leptoneffReco_Loosecentral = Muon_Eff_Reco_Loose->GetBinContent(Muon_Eff_Reco_Loose->FindBin(MuonEta,MuonPt));
                double leptonerrReco_Loosecentral = Muon_Eff_Reco_Loose->GetBinError(Muon_Eff_Reco_Loose->FindBin(MuonEta, MuonPt));
                
                double leptoneffIsocentral = Muon_Eff_Iso->GetBinContent(Muon_Eff_Iso->FindBin(MuonEta,MuonPt));
                double leptonerrIsocentral = Muon_Eff_Iso->GetBinError(Muon_Eff_Iso->FindBin(MuonEta, MuonPt));

                double leptoneffEFTcentral = Muon_Eff_EFT->GetBinContent(Muon_Eff_EFT->FindBin(MuonEta,MuonPt));
                double leptonerrEFTcentral = Muon_Eff_EFT->GetBinError(Muon_Eff_EFT->FindBin(MuonEta, MuonPt));


                double leptonsfcentral = leptoneffTrigcentral * leptoneffReco_Loosecentral * leptoneffIsocentral * leptoneffEFTcentral;

                double leptonsfTrigup = (leptoneffTrigcentral + leptonerrTrigcentral) * leptoneffReco_Loosecentral * leptoneffIsocentral * leptoneffEFTcentral;
                double leptonsfReco_Looseup = leptoneffTrigcentral * (leptoneffReco_Loosecentral + leptonerrReco_Loosecentral) * leptoneffIsocentral * leptoneffEFTcentral;
                double leptonsfIsoup = leptoneffTrigcentral * leptoneffReco_Loosecentral * (leptoneffIsocentral + leptonerrIsocentral) * leptoneffEFTcentral;
                double leptonsfEFTup = leptoneffTrigcentral * leptoneffReco_Loosecentral * leptoneffIsocentral * (leptoneffEFTcentral + leptonerrEFTcentral);

                double leptonsfTrigdown = (leptoneffTrigcentral - leptonerrTrigcentral) * leptoneffReco_Loosecentral * leptoneffIsocentral * leptoneffEFTcentral;
                double leptonsfReco_Loosedown = leptoneffTrigcentral * (leptoneffReco_Loosecentral - leptonerrReco_Loosecentral) * leptoneffIsocentral * leptoneffEFTcentral;
                double leptonsfIsodown = leptoneffTrigcentral * leptoneffReco_Loosecentral * (leptoneffIsocentral - leptonerrIsocentral) * leptoneffEFTcentral;
                double leptonsfEFTdown = leptoneffTrigcentral * leptoneffReco_Loosecentral * leptoneffIsocentral * (leptoneffEFTcentral - leptonerrEFTcentral);

                leptonsf = leptonsfcentral;
                //ADDINGMUONCORRECTIONS
            }
        }

        weighted_number_leptonptcut1 += weight;
        weighted_error_leptonptcut1 += (weight*weight);

        if(!isData) weight = weight * leptonsf;

        weighted_number_leptonptcut2 += weight;
        weighted_error_leptonptcut2 += (weight*weight);


        if(SInputYear.find("2016",0) != string::npos){
            if(RHLT_IsoMu22 || RHLT_IsoTkMu22 || RHLT_IsoMu24 || RHLT_IsoTkMu24){ //pass muon
                myhists->Plot_1lepm_lepton_HLTpass->Fill(TRlepton1.Pt(),weight);
                if(abs(Idlep1) == 11)
                    myhists->Plot_1lepm_elec_HLTpass->Fill(TRlepton1.Pt(),weight);
                else
                    myhists->Plot_1lepm_muon_HLTpass->Fill(TRlepton1.Pt(),weight);
            }
                
            if(RHLT_Ele25_eta2p1_WPTight_Gsf || RHLT_Ele27_eta2p1_WPTight_Gsf){
                myhists->Plot_1lepe_lepton_HLTpass->Fill(TRlepton1.Pt(),weight);
                if(abs(Idlep1) == 11)
                    myhists->Plot_1lepe_elec_HLTpass->Fill(TRlepton1.Pt(),weight);
                else
                    myhists->Plot_1lepe_muon_HLTpass->Fill(TRlepton1.Pt(),weight);
            }
        }else if(SInputYear.find("2017",0) != string::npos){
            if(RHLT_IsoMu24 || RHLT_IsoMu27){
                myhists->Plot_1lepm_lepton_HLTpass->Fill(TRlepton1.Pt(),weight);
                if(abs(Idlep1) == 11)
                    myhists->Plot_1lepm_elec_HLTpass->Fill(TRlepton1.Pt(),weight);
                else
                    myhists->Plot_1lepm_muon_HLTpass->Fill(TRlepton1.Pt(),weight);
            }
            if(RHLT_Ele35_WPTight_Gsf || RHLT_Ele32_WPTight_Gsf){
                myhists->Plot_1lepe_lepton_HLTpass->Fill(TRlepton1.Pt(),weight);
                if(abs(Idlep1) == 11)
                    myhists->Plot_1lepe_elec_HLTpass->Fill(TRlepton1.Pt(),weight);
                else
                    myhists->Plot_1lepe_muon_HLTpass->Fill(TRlepton1.Pt(),weight);
            }
        }else if(SInputYear.find("2018",0) != string::npos){
            if(RHLT_IsoMu24 || RHLT_IsoMu27){
                myhists->Plot_1lepm_lepton_HLTpass->Fill(TRlepton1.Pt(),weight);
                if(abs(Idlep1) == 11)
                    myhists->Plot_1lepm_elec_HLTpass->Fill(TRlepton1.Pt(),weight);
                else
                    myhists->Plot_1lepm_muon_HLTpass->Fill(TRlepton1.Pt(),weight);
            }
            if(RHLT_Ele35_WPTight_Gsf || RHLT_Ele32_WPTight_Gsf){
                myhists->Plot_1lepe_lepton_HLTpass->Fill(TRlepton1.Pt(),weight);
                if(abs(Idlep1) == 11)
                    myhists->Plot_1lepe_elec_HLTpass->Fill(TRlepton1.Pt(),weight);
                else
                    myhists->Plot_1lepe_muon_HLTpass->Fill(TRlepton1.Pt(),weight);
            }
        }else{
            cout<<"ERROR MESSAGE : From HLT Trigger part : should not see this message~"<<endl;
        }



        
        myhists->Plot_lepton_HLTtotal->Fill(TRlepton1.Pt(),weight);
        myhists->Plot_raw_lepton_HLTtotal->Fill(TRlepton1.Pt(),1.0);
        if(abs(Idlep1) == 11){
            myhists->Plot_elec_HLTtotal->Fill(TRlepton1.Pt(),weight);
            myhists->Plot_raw_elec_HLTtotal->Fill(TRlepton1.Pt(),1.0);
        }
        else{
            myhists->Plot_muon_HLTtotal->Fill(TRlepton1.Pt(),weight);
            myhists->Plot_raw_muon_HLTtotal->Fill(TRlepton1.Pt(),1.0);
        }
        if(!passHLTtrigger) continue;

        myhists->Plot_lepton_HLTpass->Fill(TRlepton1.Pt(),weight);
        if(abs(Idlep1) == 11)
            myhists->Plot_elec_HLTpass->Fill(TRlepton1.Pt(),weight);
        else
            myhists->Plot_muon_HLTpass->Fill(TRlepton1.Pt(),weight);
        weighted_number_leptonptcut0 += weight;
        weighted_error_leptonptcut0 += weight * weight;

        //************************************************************************
        //*****************H to bb Selection**************************************
        //************************************************************************
        //One ak8 fat jet selection
        double highestak8score_Hbb = -1;
        int    idx_highesthbb = 0;


        for(int jj = 0 ; jj < RnFatJet ; jj ++){
            TLorentzVector TFatJet;
            //ADDINGAK8JETJECCORRECTIONS
            TFatJet.SetPtEtaPhiM(RFatJet_pt[jj],RFatJet_eta[jj],RFatJet_phi[jj],RFatJet_particleNet_mass[jj]);
            if(RFatJet_pt[jj] <= 250) continue;
            if(TFatJet.DeltaR(TRlepton1) < 0.8) continue;
            if(RFatJet_mass[jj] <= 50) continue;
            if(fabs(RFatJet_eta[jj]) > 2.5) continue;
            if(RFatJet_msoftdrop[jj] <= 40) continue;
            if(RFatJet_jetId[jj] <= 0) continue;
//            Hbbscore = RFatJet_particleNetMD_Xbb[jj];
//            HbbscoreMD = RFatJet_particleNetMD_Xbb[jj] / (RFatJet_particleNetMD_Xbb[jj] + RFatJet_particleNetMD_QCD[jj]);
//            Hbbmass = RFatJet_particleNet_mass[jj];
//            Hbbmsoftdrop = RFatJet_msoftdrop[jj];
//            Hbbtau21 = RFatJet_tau2[jj] / RFatJet_tau1[jj];
//            Hbbtau32 = RFatJet_tau3[jj] / RFatJet_tau2[jj];
//            Hbbtau1 = RFatJet_tau1[jj];
//            Hbbtau2 = RFatJet_tau2[jj];
//            Hbbtau3 = RFatJet_tau3[jj];
            double Hbbscore = RFatJet_particleNetMD_Xbb[jj] / (RFatJet_particleNetMD_Xbb[jj] + RFatJet_particleNetMD_QCD[jj]);
            if(Hbbscore > highestak8score_Hbb){
                highestak8score_Hbb = Hbbscore;
                idx_highesthbb = jj;
            }
        }

        //if(highestak8score_Hbb < 0.8 ) continue;
        if(highestak8score_Hbb < 0) continue;
        weighted_number_fatbtag_t += weight;
        weighted_error_fatbtag_t += (weight*weight);

        TLorentzVector TTHiggs;
        TTHiggs.SetPtEtaPhiM(RFatJet_pt[idx_highesthbb],RFatJet_eta[idx_highesthbb],RFatJet_phi[idx_highesthbb],RFatJet_particleNet_mass[idx_highesthbb]);

        //TTHiggs = TTBjet1 + TTBjet2;

        
        //************************************************************************
        //*****************W/Z jet   Selection************************************
        //************************************************************************
        //One ak8 fat jet selection
        double highestak8score_Wjet = -1;
        double highestak8score_Zjet = -1;
        int    idx_highestwjet = 0;
        int    idx_highestzjet = 0;

        for(int jj = 0 ; jj < RnFatJet ; jj ++){
            TLorentzVector TFatJet;
            //ADDINGAK8JETJECCORRECTIONS
            TFatJet.SetPtEtaPhiM(RFatJet_pt[jj],RFatJet_eta[jj],RFatJet_phi[jj],RFatJet_particleNet_mass[jj]);
            if(RFatJet_pt[jj] <= 250) continue;
            if(TFatJet.DeltaR(TRlepton1) < 0.8) continue;
            if(TFatJet.DeltaR(TTHiggs) < 0.8) continue;
            if(RFatJet_mass[jj] <= 50) continue;
            if(fabs(RFatJet_eta[jj]) > 2.5) continue;
            if(RFatJet_msoftdrop[jj] <= 40) continue;
            if(RFatJet_jetId[jj] <= 0) continue;
//            double Wjetscore = RFatJet_particleNet_WvsQCD[jj];
//            double Zjetscore = RFatJet_particleNet_ZvsQCD[jj];
            double Wjetscore = (RFatJet_particleNetMD_Xqq[jj] + RFatJet_particleNetMD_Xcc[jj] ) / (RFatJet_particleNetMD_Xqq[jj] + RFatJet_particleNetMD_Xcc[jj]  + RFatJet_particleNetMD_QCD[jj]);
            double Zjetscore = (RFatJet_particleNetMD_Xbb[jj]) / (RFatJet_particleNetMD_Xbb[jj] + RFatJet_particleNetMD_QCD[jj]);
            //double Zjetscore = (RFatJet_particleNetMD_Xqq[jj] + RFatJet_particleNetMD_Xcc[jj] + RFatJet_particleNetMD_Xbb[jj]) / (RFatJet_particleNetMD_Xqq[jj] + RFatJet_particleNetMD_Xcc[jj]  + RFatJet_particleNetMD_QCD[jj] + RFatJet_particleNetMD_Xbb[jj]);

            if(Wjetscore > highestak8score_Wjet){
                highestak8score_Wjet = Wjetscore;
                idx_highestwjet = jj;
            }
            if(Zjetscore > highestak8score_Zjet){
                highestak8score_Zjet = Zjetscore;
                idx_highestzjet = jj;
            }
        }

        //if(highestak8score_Wjet < 0.5  && highestak8score_Zjet < 0.5) continue;
        if(highestak8score_Wjet < 0) continue;
        
        weighted_number_WZjet += weight;
        weighted_error_WZjet += weight*weight;

        TLorentzVector TTWjet;
        TTWjet.SetPtEtaPhiM(RFatJet_pt[idx_highestwjet],RFatJet_eta[idx_highestwjet],RFatJet_phi[idx_highestwjet],RFatJet_particleNet_mass[idx_highestwjet]);


        if(Idlep1 == -11 || Idlep1 == 11){
            if( RElectron_pt[Idxlep1] >= 1000 )
                myhists->Plot_fatjettag_elecpt->Fill(999.5,weight);
            else if( RElectron_pt[Idxlep1] <= 0 )
                myhists->Plot_fatjettag_elecpt->Fill(0.5,weight);
            else
                myhists->Plot_fatjettag_elecpt->Fill(RElectron_pt[Idxlep1],weight);

            if( RElectron_eta[Idxlep1] >= 10 )
                myhists->Plot_fatjettag_eleceta->Fill(9.99,weight);
            else if( RElectron_eta[Idxlep1] <= -10 )
                myhists->Plot_fatjettag_eleceta->Fill(-9.99,weight);
            else
                myhists->Plot_fatjettag_eleceta->Fill(RElectron_eta[Idxlep1],weight);

            if( RElectron_phi[Idxlep1] >= 10 )
                myhists->Plot_fatjettag_elecphi->Fill(9.99,weight);
            else if( RElectron_phi[Idxlep1] <= -10 )
                myhists->Plot_fatjettag_elecphi->Fill(-9.99,weight);
            else
                myhists->Plot_fatjettag_elecphi->Fill(RElectron_phi[Idxlep1],weight);

        }else{
            if( RMuon_pt[Idxlep1] >= 1000 )
                myhists->Plot_fatjettag_muonpt->Fill(999.5,weight);
            else if( RMuon_pt[Idxlep1] <= 0 )
                myhists->Plot_fatjettag_muonpt->Fill(0.5,weight);
            else
                myhists->Plot_fatjettag_muonpt->Fill(RMuon_pt[Idxlep1],weight);

            if( RMuon_eta[Idxlep1] >= 10 )
                myhists->Plot_fatjettag_muoneta->Fill(9.99,weight);
            else if( RMuon_eta[Idxlep1] <= -10 )
                myhists->Plot_fatjettag_muoneta->Fill(-9.99,weight);
            else
                myhists->Plot_fatjettag_muoneta->Fill(RMuon_eta[Idxlep1],weight);

            if( RMuon_phi[Idxlep1] >= 10 )
                myhists->Plot_fatjettag_muonphi->Fill(9.99,weight);
            else if( RMuon_phi[Idxlep1] <= -10 )
                myhists->Plot_fatjettag_muonphi->Fill(-9.99,weight);
            else
                myhists->Plot_fatjettag_muonphi->Fill(RMuon_phi[Idxlep1],weight);

        }

        if( RFatJet_pt[idx_highesthbb] >= 1000 )
            myhists->Plot_fatjettag_fatjetHpt->Fill(999.5,weight);
        else if( RFatJet_pt[idx_highesthbb] <= 0 )
            myhists->Plot_fatjettag_fatjetHpt->Fill(0.5,weight);
        else
            myhists->Plot_fatjettag_fatjetHpt->Fill(RFatJet_pt[idx_highesthbb],weight);

        if( highestak8score_Hbb >= 1 )
            myhists->Plot_fatjettag_fatjetHscore->Fill(0.9995,weight);
        else if( highestak8score_Hbb <= 0 )
            myhists->Plot_fatjettag_fatjetHscore->Fill(0.0005,weight);
        else
            myhists->Plot_fatjettag_fatjetHscore->Fill(highestak8score_Hbb,weight);

        if( RFatJet_tau2[idx_highesthbb]/RFatJet_tau1[idx_highesthbb] >= 1 )
            myhists->Plot_fatjettag_fatjetHtau21->Fill(0.9995,weight);
        else if( RFatJet_tau2[idx_highesthbb]/RFatJet_tau1[idx_highesthbb] <= 0 )
            myhists->Plot_fatjettag_fatjetHtau21->Fill(0.0005,weight);
        else
            myhists->Plot_fatjettag_fatjetHtau21->Fill(RFatJet_tau2[idx_highesthbb]/RFatJet_tau1[idx_highesthbb],weight);

        if( RFatJet_particleNet_mass[idx_highesthbb] >= 1000 )
            myhists->Plot_fatjettag_fatjetHmass->Fill(999.5,weight);
        else if( RFatJet_particleNet_mass[idx_highesthbb] <= 0 )
            myhists->Plot_fatjettag_fatjetHmass->Fill(0.5,weight);
        else
            myhists->Plot_fatjettag_fatjetHmass->Fill(RFatJet_particleNet_mass[idx_highesthbb],weight);

        if( RFatJet_msoftdrop[idx_highesthbb] >= 1000 )
            myhists->Plot_fatjettag_fatjetHmsoftdrop->Fill(999.5,weight);
        else if( RFatJet_msoftdrop[idx_highesthbb] <= 0 )
            myhists->Plot_fatjettag_fatjetHmsoftdrop->Fill(0.5,weight);
        else
            myhists->Plot_fatjettag_fatjetHmsoftdrop->Fill(RFatJet_msoftdrop[idx_highesthbb],weight);

        if( RFatJet_pt[idx_highestwjet] >= 1000 )
            myhists->Plot_fatjettag_fatjetWpt->Fill(999.5,weight);
        else if( RFatJet_pt[idx_highestwjet] <= 0 )
            myhists->Plot_fatjettag_fatjetWpt->Fill(0.5,weight);
        else
            myhists->Plot_fatjettag_fatjetWpt->Fill(RFatJet_pt[idx_highestwjet],weight);

        if( highestak8score_Wjet >= 1 )
            myhists->Plot_fatjettag_fatjetWscore->Fill(0.9995,weight);
        else if( highestak8score_Wjet <= 0 )
            myhists->Plot_fatjettag_fatjetWscore->Fill(0.0005,weight);
        else
            myhists->Plot_fatjettag_fatjetWscore->Fill(highestak8score_Wjet,weight);

        if( RFatJet_tau2[idx_highestwjet]/RFatJet_tau1[idx_highestwjet] >= 1 )
            myhists->Plot_fatjettag_fatjetWtau21->Fill(0.9995,weight);
        else if( RFatJet_tau2[idx_highestwjet]/RFatJet_tau1[idx_highestwjet] <= 0 )
            myhists->Plot_fatjettag_fatjetWtau21->Fill(0.0005,weight);
        else
            myhists->Plot_fatjettag_fatjetWtau21->Fill(RFatJet_tau2[idx_highestwjet]/RFatJet_tau1[idx_highestwjet],weight);

        if( RFatJet_particleNet_mass[idx_highestwjet] >= 1000 )
            myhists->Plot_fatjettag_fatjetWmass->Fill(999.5,weight);
        else if( RFatJet_particleNet_mass[idx_highestwjet] <= 0 )
            myhists->Plot_fatjettag_fatjetWmass->Fill(0.5,weight);
        else
            myhists->Plot_fatjettag_fatjetWmass->Fill(RFatJet_particleNet_mass[idx_highestwjet],weight);

        if( RFatJet_msoftdrop[idx_highestwjet] >= 1000 )
            myhists->Plot_fatjettag_fatjetWmsoftdrop->Fill(999.5,weight);
        else if( RFatJet_msoftdrop[idx_highestwjet] <= 0 )
            myhists->Plot_fatjettag_fatjetWmsoftdrop->Fill(0.5,weight);
        else
            myhists->Plot_fatjettag_fatjetWmsoftdrop->Fill(RFatJet_msoftdrop[idx_highestwjet],weight);




        //**************************************************************
        //**************ak4Jet HEM15/16 correction**********************
        //**************************************************************
        //
        for(int jj = 0 ; jj < RnJet ; jj ++){
            if(yearNumber == 2018 && Revent%1961 < 1286 && RJet_phi[jj] < -0.87 && RJet_phi[jj] > -1.57){
                if(RJet_eta[jj] > -2.5 && RJet_eta[jj] < -1.3){
                    RJet_pt[jj] *= 0.8;
                    RJet_mass[jj] *= 0.8;
                }
                else if(RJet_eta[jj] > -3.0 && RJet_eta[jj] < -2.5){
                    RJet_pt[jj] *= 0.65;
                    RJet_mass[jj] *= 0.65;

                }
                    
            }

        }

        //**************************************************************
        //**************Removing high b score jet***********************
        //**************************************************************
        int n_tight_ak4bjet = 0;
        Float_t n_medium_ak4jet = 0;
        Float_t n_loose_ak4jet = 0;
        double maxbjetscore = 0;
        double secbjetscore = 0;
        
        int    idxmaxbjet = -999;
        int    idxsecbjet = -999;


        //ADDINGMETCORRECTIONS

        Int_t    idx_bjetcandi = 0;
        for(int jj = 0 ; jj < RnJet ; jj ++){
            TLorentzVector Tak4jet;
            if(RJet_pt[jj]<5) continue;
            if(RJet_genJetIdx[jj] >= 0){ //if matched to gen jet
                double genjetpt = RGenJet_pt[RJet_genJetIdx[jj]];
                double recojetpt = RJet_pt[jj];
                double vari_scale = P_Ak4Jet_Reso_Scale_Central->GetBinContent(P_Ak4Jet_Reso_Scale_Central->FindBin(RJet_eta[jj]));
                double ak4jerscale = 1 + (vari_scale - 1) * (recojetpt - genjetpt) / recojetpt;
                RJet_pt[jj] *= ak4jerscale;
            }
            else{
                double vari0 = P_Ak4Jet_Reso_Scale_vari0->GetBinContent(P_Ak4Jet_Reso_Scale_vari0->FindBin(RJet_eta[jj],RfixedGridRhoFastjetAll));
                double vari1 = P_Ak4Jet_Reso_Scale_vari1->GetBinContent(P_Ak4Jet_Reso_Scale_vari1->FindBin(RJet_eta[jj],RfixedGridRhoFastjetAll));
                double vari2 = P_Ak4Jet_Reso_Scale_vari2->GetBinContent(P_Ak4Jet_Reso_Scale_vari2->FindBin(RJet_eta[jj],RfixedGridRhoFastjetAll));
                double vari3 = P_Ak4Jet_Reso_Scale_vari3->GetBinContent(P_Ak4Jet_Reso_Scale_vari3->FindBin(RJet_eta[jj],RfixedGridRhoFastjetAll));
                double sigma = TMath::Sqrt(vari0 * TMath::Abs(vari0) / (TMath::Power(RJet_pt[jj], 2)) + TMath::Power(vari1, 2) * TMath::Power(RJet_pt[jj], vari3) + TMath::Power(vari2, 2));

                double vari_scale = P_Ak4Jet_Reso_Scale_Central->GetBinContent(P_Ak4Jet_Reso_Scale_Central->FindBin(RJet_eta[jj]));

                RJet_pt[jj] = RJet_pt[jj] * (1 + myrandom->Gaus(0,sigma) * TMath::Sqrt(TMath::Max((vari_scale*vari_scale - 1),0.0)));
            }
            //ADDINGAK4JETJECCORRECTIONS
            //RJet_pt[jj] = RJet_pt[jj] * (1 - P_Ak4Jet_Scale->GetBinContent(P_Ak4Jet_Scale->FindBin(RJet_eta[jj],RJet_pt[jj])));
            Tak4jet.SetPtEtaPhiM(RJet_pt[jj],RJet_eta[jj],RJet_phi[jj],RJet_mass[jj]);
            //if(RJet_pt[jj] < 20) continue;
            if(Tak4jet.Pt() < 20) continue;
            if(fabs(RJet_eta[jj]) > 2.5) continue;
            if(if2016){
                if(RJet_jetId[jj] < 1) continue;
            }else{
                if(RJet_jetId[jj] < 2) continue;
            }
            if(RJet_pt[jj] < 50){
                if(RJet_puId[jj] == 0) continue;
            }
            double filleffeta = Tak4jet.Eta();
            if(Tak4jet.Eta() < 0) filleffeta = -Tak4jet.Eta();
            if(filleffeta > 2.5) filleffeta = 2.4999;
            if(filleffeta == 0 ) filleffeta = 0.0001;
            double filleffpt = Tak4jet.Pt();
            if(filleffpt <= 20) filleffpt = 20.0001;
            if(filleffpt >= 300 ) filleffpt = 299.99;

            if(RJet_hadronFlavour[jj] ==0){
                if(RJet_btagDeepFlavB[jj] > tight_deepflavor_bscore){
                    myhists->Plot_tightltag_eff_eta_pt->Fill(filleffeta,filleffpt,weight);
                }else if(RJet_btagDeepFlavB[jj] > loose_deepflavor_bscore){
                    myhists->Plot_looseltag_eff_eta_pt->Fill(filleffeta,filleffpt,weight);
                }else{
                    myhists->Plot_notagltag_eff_eta_pt->Fill(filleffeta,filleffpt,weight);
                }
            }else if(RJet_hadronFlavour[jj] == 4){
                if(RJet_btagDeepFlavB[jj] > tight_deepflavor_bscore){
                    myhists->Plot_tightctag_eff_eta_pt->Fill(filleffeta,filleffpt,weight);
                }else if(RJet_btagDeepFlavB[jj] > loose_deepflavor_bscore){
                    myhists->Plot_loosectag_eff_eta_pt->Fill(filleffeta,filleffpt,weight);
                }else{
                    myhists->Plot_notagctag_eff_eta_pt->Fill(filleffeta,filleffpt,weight);
                }

            }else{

                if(RJet_btagDeepFlavB[jj] > tight_deepflavor_bscore){
                    myhists->Plot_tightbtag_eff_eta_pt->Fill(filleffeta,filleffpt,weight);
                }else if(RJet_btagDeepFlavB[jj] > loose_deepflavor_bscore){
                    myhists->Plot_loosebtag_eff_eta_pt->Fill(filleffeta,filleffpt,weight);
                }else{
                    myhists->Plot_notagbtag_eff_eta_pt->Fill(filleffeta,filleffpt,weight);
                }
            }
            
            if(Tak4jet.DeltaR(TRlepton1) < 0.4) continue;
            if(Tak4jet.DeltaR(TTHiggs) < 0.8) continue;
            if(Tak4jet.DeltaR(TTWjet) < 0.8) continue;

            if(idx_bjetcandi<20){
                myhists->total_bjetpt[idx_bjetcandi] = Tak4jet.Pt();
                myhists->total_bjeteta[idx_bjetcandi] = Tak4jet.Eta();
                myhists->total_bjetphi[idx_bjetcandi] = Tak4jet.Phi();
                myhists->total_bjetmass[idx_bjetcandi] = Tak4jet.M();
                if(RJet_btagDeepFlavB[jj] > tight_deepflavor_bscore)
                    myhists->total_bjetbtagCategory[idx_bjetcandi] = 0;
                else if(RJet_btagDeepFlavB[jj] > loose_deepflavor_bscore)
                    myhists->total_bjetbtagCategory[idx_bjetcandi] = 1;
                else
                    myhists->total_bjetbtagCategory[idx_bjetcandi] = 2;
                myhists->total_bjetbtagDeepFlavB[idx_bjetcandi] = RJet_btagDeepFlavB[jj];
                myhists->total_bjetgenJetIdx[idx_bjetcandi] = RJet_genJetIdx[jj];
                myhists->total_bjetbtagDeepB[idx_bjetcandi] = RJet_btagDeepB[jj];
                myhists->total_bjetpartonFlavour[idx_bjetcandi] = RJet_partonFlavour[jj];
                myhists->total_bjethadronFlavour[idx_bjetcandi] = RJet_hadronFlavour[jj];
                myhists->total_bjetId[idx_bjetcandi] = RJet_jetId[jj];
            }
            idx_bjetcandi += 1;

//            if(Tak4jet.DeltaR(TRlepton1) < 0.4) continue;
//            if(Tak4jet.DeltaR(TTHiggs) < 0.8) continue;
//            if(Tak4jet.DeltaR(TTWjet) < 0.8) continue;
            
            if(RJet_btagDeepFlavB[jj] > tight_deepflavor_bscore) n_tight_ak4bjet ++;
            if(RJet_btagDeepFlavB[jj] > maxbjetscore){
                secbjetscore = maxbjetscore;
                maxbjetscore = RJet_btagDeepFlavB[jj];
                idxsecbjet = idxmaxbjet;
                idxmaxbjet = jj;
            }else if(RJet_btagDeepFlavB[jj] > secbjetscore){
                secbjetscore = RJet_btagDeepFlavB[jj];
                idxsecbjet = jj;
            }
            if(RJet_btagDeepFlavB[jj] > medium_deepflavor_bscore) n_medium_ak4jet += 1.0;
            if(RJet_btagDeepFlavB[jj] > loose_deepflavor_bscore) n_loose_ak4jet += 1.0;
        }
        myhists->Plot_bcategory->Fill(0.5,(float)(n_tight_ak4bjet));
        myhists->Plot_bcategory->Fill(1.5,(float)(n_medium_ak4jet));
        myhists->Plot_bcategory->Fill(2.5,(float)(n_loose_ak4jet));
        //myhists->Plot_loosebtag_eff_eta_pt->Fill(abs())
        if(n_tight_ak4bjet >= 1 ) continue;
        weighted_number_removeak4b += weight;
        weighted_error_removeak4b += weight*weight;

        if(Idlep1 == 11 || Idlep1 == -11){
            if( RElectron_pt[Idxlep1] >= 1000 )
                myhists->Plot_tightak4tag_elecpt->Fill(999.5,weight);
            else if( RElectron_pt[Idxlep1] <= 0 )
                myhists->Plot_tightak4tag_elecpt->Fill(0.5,weight);
            else
                myhists->Plot_tightak4tag_elecpt->Fill(RElectron_pt[Idxlep1],weight);

            if( RElectron_eta[Idxlep1] >= 10 )
                myhists->Plot_tightak4tag_eleceta->Fill(9.99,weight);
            else if( RElectron_eta[Idxlep1] <= -10 )
                myhists->Plot_tightak4tag_eleceta->Fill(-9.99,weight);
            else
                myhists->Plot_tightak4tag_eleceta->Fill(RElectron_eta[Idxlep1],weight);

            if( RElectron_phi[Idxlep1] >= 10 )
                myhists->Plot_tightak4tag_elecphi->Fill(9.99,weight);
            else if( RElectron_phi[Idxlep1] <= -10 )
                myhists->Plot_tightak4tag_elecphi->Fill(-9.99,weight);
            else
                myhists->Plot_tightak4tag_elecphi->Fill(RElectron_phi[Idxlep1],weight);

        }else{
            if( RMuon_pt[Idxlep1] >= 1000 )
                myhists->Plot_tightak4tag_muonpt->Fill(999.5,weight);
            else if( RMuon_pt[Idxlep1] <= 0 )
                myhists->Plot_tightak4tag_muonpt->Fill(0.5,weight);
            else
                myhists->Plot_tightak4tag_muonpt->Fill(RMuon_pt[Idxlep1],weight);

            if( RMuon_eta[Idxlep1] >= 10 )
                myhists->Plot_tightak4tag_muoneta->Fill(9.99,weight);
            else if( RMuon_eta[Idxlep1] <= -10 )
                myhists->Plot_tightak4tag_muoneta->Fill(-9.99,weight);
            else
                myhists->Plot_tightak4tag_muoneta->Fill(RMuon_eta[Idxlep1],weight);

            if( RMuon_phi[Idxlep1] >= 10 )
                myhists->Plot_tightak4tag_muonphi->Fill(9.99,weight);
            else if( RMuon_phi[Idxlep1] <= -10 )
                myhists->Plot_tightak4tag_muonphi->Fill(-9.99,weight);
            else
                myhists->Plot_tightak4tag_muonphi->Fill(RMuon_phi[Idxlep1],weight);

        }




        if( RFatJet_pt[idx_highesthbb] >= 1000 )
            myhists->Plot_tightak4tag_fatjetHpt->Fill(999.5,weight);
        else if( RFatJet_pt[idx_highesthbb] <= 0 )
            myhists->Plot_tightak4tag_fatjetHpt->Fill(0.5,weight);
        else
            myhists->Plot_tightak4tag_fatjetHpt->Fill(RFatJet_pt[idx_highesthbb],weight);

        if( highestak8score_Hbb >= 1 )
            myhists->Plot_tightak4tag_fatjetHscore->Fill(0.9995,weight);
        else if( highestak8score_Hbb <= 0 )
            myhists->Plot_tightak4tag_fatjetHscore->Fill(0.0005,weight);
        else
            myhists->Plot_tightak4tag_fatjetHscore->Fill(highestak8score_Hbb,weight);

        if( RFatJet_tau2[idx_highesthbb]/RFatJet_tau1[idx_highesthbb] >= 1 )
            myhists->Plot_tightak4tag_fatjetHtau21->Fill(0.9995,weight);
        else if( RFatJet_tau2[idx_highesthbb]/RFatJet_tau1[idx_highesthbb] <= 0 )
            myhists->Plot_tightak4tag_fatjetHtau21->Fill(0.0005,weight);
        else
            myhists->Plot_tightak4tag_fatjetHtau21->Fill(RFatJet_tau2[idx_highesthbb]/RFatJet_tau1[idx_highesthbb],weight);

        if( RFatJet_particleNet_mass[idx_highesthbb] >= 1000 )
            myhists->Plot_tightak4tag_fatjetHmass->Fill(999.5,weight);
        else if( RFatJet_particleNet_mass[idx_highesthbb] <= 0 )
            myhists->Plot_tightak4tag_fatjetHmass->Fill(0.5,weight);
        else
            myhists->Plot_tightak4tag_fatjetHmass->Fill(RFatJet_particleNet_mass[idx_highesthbb],weight);

        if( RFatJet_msoftdrop[idx_highesthbb] >= 1000 )
            myhists->Plot_tightak4tag_fatjetHmsoftdrop->Fill(999.5,weight);
        else if( RFatJet_msoftdrop[idx_highesthbb] <= 0 )
            myhists->Plot_tightak4tag_fatjetHmsoftdrop->Fill(0.5,weight);
        else
            myhists->Plot_tightak4tag_fatjetHmsoftdrop->Fill(RFatJet_msoftdrop[idx_highesthbb],weight);

        if( RFatJet_pt[idx_highestwjet] >= 1000 )
            myhists->Plot_tightak4tag_fatjetWpt->Fill(999.5,weight);
        else if( RFatJet_pt[idx_highestwjet] <= 0 )
            myhists->Plot_tightak4tag_fatjetWpt->Fill(0.5,weight);
        else
            myhists->Plot_tightak4tag_fatjetWpt->Fill(RFatJet_pt[idx_highestwjet],weight);

        if( highestak8score_Wjet >= 1 )
            myhists->Plot_tightak4tag_fatjetWscore->Fill(0.9995,weight);
        else if( highestak8score_Wjet <= 0 )
            myhists->Plot_tightak4tag_fatjetWscore->Fill(0.0005,weight);
        else
            myhists->Plot_tightak4tag_fatjetWscore->Fill(highestak8score_Wjet,weight);

        if( RFatJet_tau2[idx_highestwjet]/RFatJet_tau1[idx_highestwjet] >= 1 )
            myhists->Plot_tightak4tag_fatjetWtau21->Fill(0.9995,weight);
        else if( RFatJet_tau2[idx_highestwjet]/RFatJet_tau1[idx_highestwjet] <= 0 )
            myhists->Plot_tightak4tag_fatjetWtau21->Fill(0.0005,weight);
        else
            myhists->Plot_tightak4tag_fatjetWtau21->Fill(RFatJet_tau2[idx_highestwjet]/RFatJet_tau1[idx_highestwjet],weight);

        if( RFatJet_particleNet_mass[idx_highestwjet] >= 1000 )
            myhists->Plot_tightak4tag_fatjetWmass->Fill(999.5,weight);
        else if( RFatJet_particleNet_mass[idx_highestwjet] <= 0 )
            myhists->Plot_tightak4tag_fatjetWmass->Fill(0.5,weight);
        else
            myhists->Plot_tightak4tag_fatjetWmass->Fill(RFatJet_particleNet_mass[idx_highestwjet],weight);

        if( RFatJet_msoftdrop[idx_highestwjet] >= 1000 )
            myhists->Plot_tightak4tag_fatjetWmsoftdrop->Fill(999.5,weight);
        else if( RFatJet_msoftdrop[idx_highestwjet] <= 0 )
            myhists->Plot_tightak4tag_fatjetWmsoftdrop->Fill(0.5,weight);
        else
            myhists->Plot_tightak4tag_fatjetWmsoftdrop->Fill(RFatJet_msoftdrop[idx_highestwjet],weight);

        Double_t Mlbmin = 0;
        if(idxmaxbjet != -999 && idxsecbjet != -999){
            TLorentzVector TTbjet1, TTbjet2;
            TTbjet1.SetPtEtaPhiM(RJet_pt[idxmaxbjet],RJet_eta[idxmaxbjet],RJet_phi[idxmaxbjet],RJet_mass[idxmaxbjet]);
            TTbjet2.SetPtEtaPhiM(RJet_pt[idxsecbjet],RJet_eta[idxsecbjet],RJet_phi[idxsecbjet],RJet_mass[idxsecbjet]);
            if((TTbjet1+TRlepton1).M() < (TTbjet2+TRlepton1).M()) Mlbmin = (TTbjet1+TRlepton1).M();
            else Mlbmin = (TTbjet2+TRlepton1).M();
        }else if(idxmaxbjet != -999){
            TLorentzVector TTbjet1;
            TTbjet1.SetPtEtaPhiM(RJet_pt[idxmaxbjet],RJet_eta[idxmaxbjet],RJet_phi[idxmaxbjet],RJet_mass[idxmaxbjet]);
            Mlbmin = (TTbjet1+TRlepton1).M();
        }else if(idxsecbjet != -999){
            TLorentzVector TTbjet2;
            TTbjet2.SetPtEtaPhiM(RJet_pt[idxsecbjet],RJet_eta[idxsecbjet],RJet_phi[idxsecbjet],RJet_mass[idxsecbjet]);
            Mlbmin = (TTbjet2+TRlepton1).M();
        }else{
            Mlbmin = 1000;
        }

        Double_t Mlbminloose = 0;
        Double_t Mlbminmedium = 0;

        if(idxmaxbjet != -999 && idxsecbjet != -999 && RJet_btagDeepFlavB[idxsecbjet] > loose_deepflavor_bscore){
            TLorentzVector TTbjet1, TTbjet2;
            TTbjet1.SetPtEtaPhiM(RJet_pt[idxmaxbjet],RJet_eta[idxmaxbjet],RJet_phi[idxmaxbjet],RJet_mass[idxmaxbjet]);
            TTbjet2.SetPtEtaPhiM(RJet_pt[idxsecbjet],RJet_eta[idxsecbjet],RJet_phi[idxsecbjet],RJet_mass[idxsecbjet]);
            if((TTbjet1+TRlepton1).M() < (TTbjet2+TRlepton1).M()) Mlbminloose = (TTbjet1+TRlepton1).M();
            else Mlbminloose = (TTbjet2+TRlepton1).M();
        }else if(idxmaxbjet != -999 && RJet_btagDeepFlavB[idxmaxbjet] > loose_deepflavor_bscore){
            TLorentzVector TTbjet1;
            TTbjet1.SetPtEtaPhiM(RJet_pt[idxmaxbjet],RJet_eta[idxmaxbjet],RJet_phi[idxmaxbjet],RJet_mass[idxmaxbjet]);
            Mlbminloose = (TTbjet1+TRlepton1).M();
        }else if(idxsecbjet != -999 && RJet_btagDeepFlavB[idxsecbjet] > loose_deepflavor_bscore){
            TLorentzVector TTbjet2;
            TTbjet2.SetPtEtaPhiM(RJet_pt[idxsecbjet],RJet_eta[idxsecbjet],RJet_phi[idxsecbjet],RJet_mass[idxsecbjet]);
            Mlbminloose = (TTbjet2+TRlepton1).M();
        }else{
            Mlbminloose = 1000;
        }


        if(idxmaxbjet != -999 && idxsecbjet != -999 && RJet_btagDeepFlavB[idxsecbjet] > loose_deepflavor_bscore){
            TLorentzVector TTbjet1, TTbjet2;
            TTbjet1.SetPtEtaPhiM(RJet_pt[idxmaxbjet],RJet_eta[idxmaxbjet],RJet_phi[idxmaxbjet],RJet_mass[idxmaxbjet]);
            TTbjet2.SetPtEtaPhiM(RJet_pt[idxsecbjet],RJet_eta[idxsecbjet],RJet_phi[idxsecbjet],RJet_mass[idxsecbjet]);
            if((TTbjet1+TRlepton1).M() < (TTbjet2+TRlepton1).M()){
                if( TTbjet1.Pt() >= 1000 )
                    myhists->Plot_tightak4tag_bjet1pt->Fill(999.5,weight);
                else if( TTbjet1.Pt() <= 0 )
                    myhists->Plot_tightak4tag_bjet1pt->Fill(0.5,weight);
                else
                    myhists->Plot_tightak4tag_bjet1pt->Fill(TTbjet1.Pt(),weight);

                if( TTbjet1.Eta() >= 10 )
                    myhists->Plot_tightak4tag_bjet1eta->Fill(9.99,weight);
                else if( TTbjet1.Eta() <= -10 )
                    myhists->Plot_tightak4tag_bjet1eta->Fill(-9.99,weight);
                else
                    myhists->Plot_tightak4tag_bjet1eta->Fill(TTbjet1.Eta(),weight);

                if( TTbjet1.Phi() >= 10 )
                    myhists->Plot_tightak4tag_bjet1phi->Fill(9.99,weight);
                else if( TTbjet1.Phi() <= -10 )
                    myhists->Plot_tightak4tag_bjet1phi->Fill(-9.99,weight);
                else
                    myhists->Plot_tightak4tag_bjet1phi->Fill(TTbjet1.Phi(),weight);

                if( TTbjet1.M() >= 1000 )
                    myhists->Plot_tightak4tag_bjet1mass->Fill(999.5,weight);
                else if( TTbjet1.M() <= 0 )
                    myhists->Plot_tightak4tag_bjet1mass->Fill(0.5,weight);
                else
                    myhists->Plot_tightak4tag_bjet1mass->Fill(TTbjet1.M(),weight);

                if( maxbjetscore >= 1 )
                    myhists->Plot_tightak4tag_bjet1score->Fill(0.9995,weight);
                else if( maxbjetscore <= 0 )
                    myhists->Plot_tightak4tag_bjet1score->Fill(0.0005,weight);
                else
                    myhists->Plot_tightak4tag_bjet1score->Fill(maxbjetscore,weight);

                if( TTbjet2.Pt() >= 1000 )
                    myhists->Plot_tightak4tag_bjet2pt->Fill(999.5,weight);
                else if( TTbjet2.Pt() <= 0 )
                    myhists->Plot_tightak4tag_bjet2pt->Fill(0.5,weight);
                else
                    myhists->Plot_tightak4tag_bjet2pt->Fill(TTbjet2.Pt(),weight);

                if( TTbjet2.Eta() >= 10 )
                    myhists->Plot_tightak4tag_bjet2eta->Fill(9.99,weight);
                else if( TTbjet2.Eta() <= -10 )
                    myhists->Plot_tightak4tag_bjet2eta->Fill(-9.99,weight);
                else
                    myhists->Plot_tightak4tag_bjet2eta->Fill(TTbjet2.Eta(),weight);

                if( TTbjet2.Phi() >= 10 )
                    myhists->Plot_tightak4tag_bjet2phi->Fill(9.99,weight);
                else if( TTbjet2.Phi() <= -10 )
                    myhists->Plot_tightak4tag_bjet2phi->Fill(-9.99,weight);
                else
                    myhists->Plot_tightak4tag_bjet2phi->Fill(TTbjet2.Phi(),weight);

                if( TTbjet2.M() >= 1000 )
                    myhists->Plot_tightak4tag_bjet2mass->Fill(999.5,weight);
                else if( TTbjet2.M() <= 0 )
                    myhists->Plot_tightak4tag_bjet2mass->Fill(0.5,weight);
                else
                    myhists->Plot_tightak4tag_bjet2mass->Fill(TTbjet2.M(),weight);

                if( secbjetscore >= 1 )
                    myhists->Plot_tightak4tag_bjet2score->Fill(0.9995,weight);
                else if( secbjetscore <= 0 )
                    myhists->Plot_tightak4tag_bjet2score->Fill(0.0005,weight);
                else
                    myhists->Plot_tightak4tag_bjet2score->Fill(secbjetscore,weight);
            }
            else{
                if( TTbjet1.Pt() >= 1000 )
                    myhists->Plot_tightak4tag_bjet2pt->Fill(999.5,weight);
                else if( TTbjet1.Pt() <= 0 )
                    myhists->Plot_tightak4tag_bjet2pt->Fill(0.5,weight);
                else
                    myhists->Plot_tightak4tag_bjet2pt->Fill(TTbjet1.Pt(),weight);

                if( TTbjet1.Eta() >= 10 )
                    myhists->Plot_tightak4tag_bjet2eta->Fill(9.99,weight);
                else if( TTbjet1.Eta() <= -10 )
                    myhists->Plot_tightak4tag_bjet2eta->Fill(-9.99,weight);
                else
                    myhists->Plot_tightak4tag_bjet2eta->Fill(TTbjet1.Eta(),weight);

                if( TTbjet1.Phi() >= 10 )
                    myhists->Plot_tightak4tag_bjet2phi->Fill(9.99,weight);
                else if( TTbjet1.Phi() <= -10 )
                    myhists->Plot_tightak4tag_bjet2phi->Fill(-9.99,weight);
                else
                    myhists->Plot_tightak4tag_bjet2phi->Fill(TTbjet1.Phi(),weight);

                if( TTbjet1.M() >= 1000 )
                    myhists->Plot_tightak4tag_bjet2mass->Fill(999.5,weight);
                else if( TTbjet1.M() <= 0 )
                    myhists->Plot_tightak4tag_bjet2mass->Fill(0.5,weight);
                else
                    myhists->Plot_tightak4tag_bjet2mass->Fill(TTbjet1.M(),weight);

                if( maxbjetscore >= 1 )
                    myhists->Plot_tightak4tag_bjet2score->Fill(0.9995,weight);
                else if( maxbjetscore <= 0 )
                    myhists->Plot_tightak4tag_bjet2score->Fill(0.0005,weight);
                else
                    myhists->Plot_tightak4tag_bjet2score->Fill(maxbjetscore,weight);

                if( TTbjet2.Pt() >= 1000 )
                    myhists->Plot_tightak4tag_bjet1pt->Fill(999.5,weight);
                else if( TTbjet2.Pt() <= 0 )
                    myhists->Plot_tightak4tag_bjet1pt->Fill(0.5,weight);
                else
                    myhists->Plot_tightak4tag_bjet1pt->Fill(TTbjet2.Pt(),weight);

                if( TTbjet2.Eta() >= 10 )
                    myhists->Plot_tightak4tag_bjet1eta->Fill(9.99,weight);
                else if( TTbjet2.Eta() <= -10 )
                    myhists->Plot_tightak4tag_bjet1eta->Fill(-9.99,weight);
                else
                    myhists->Plot_tightak4tag_bjet1eta->Fill(TTbjet2.Eta(),weight);

                if( TTbjet2.Phi() >= 10 )
                    myhists->Plot_tightak4tag_bjet1phi->Fill(9.99,weight);
                else if( TTbjet2.Phi() <= -10 )
                    myhists->Plot_tightak4tag_bjet1phi->Fill(-9.99,weight);
                else
                    myhists->Plot_tightak4tag_bjet1phi->Fill(TTbjet2.Phi(),weight);

                if( TTbjet2.M() >= 1000 )
                    myhists->Plot_tightak4tag_bjet1mass->Fill(999.5,weight);
                else if( TTbjet2.M() <= 0 )
                    myhists->Plot_tightak4tag_bjet1mass->Fill(0.5,weight);
                else
                    myhists->Plot_tightak4tag_bjet1mass->Fill(TTbjet2.M(),weight);

                if( secbjetscore >= 1 )
                    myhists->Plot_tightak4tag_bjet1score->Fill(0.9995,weight);
                else if( secbjetscore <= 0 )
                    myhists->Plot_tightak4tag_bjet1score->Fill(0.0005,weight);
                else
                    myhists->Plot_tightak4tag_bjet1score->Fill(secbjetscore,weight);
            }
        }else if(idxmaxbjet != -999 && RJet_btagDeepFlavB[idxmaxbjet] > loose_deepflavor_bscore){
            TLorentzVector TTbjet1;
            TTbjet1.SetPtEtaPhiM(RJet_pt[idxmaxbjet],RJet_eta[idxmaxbjet],RJet_phi[idxmaxbjet],RJet_mass[idxmaxbjet]);
            if( TTbjet1.Pt() >= 1000 )
                myhists->Plot_tightak4tag_bjet1pt->Fill(999.5,weight);
            else if( TTbjet1.Pt() <= 0 )
                myhists->Plot_tightak4tag_bjet1pt->Fill(0.5,weight);
            else
                myhists->Plot_tightak4tag_bjet1pt->Fill(TTbjet1.Pt(),weight);

            if( TTbjet1.Eta() >= 10 )
                myhists->Plot_tightak4tag_bjet1eta->Fill(9.99,weight);
            else if( TTbjet1.Eta() <= -10 )
                myhists->Plot_tightak4tag_bjet1eta->Fill(-9.99,weight);
            else
                myhists->Plot_tightak4tag_bjet1eta->Fill(TTbjet1.Eta(),weight);

            if( TTbjet1.Phi() >= 10 )
                myhists->Plot_tightak4tag_bjet1phi->Fill(9.99,weight);
            else if( TTbjet1.Phi() <= -10 )
                myhists->Plot_tightak4tag_bjet1phi->Fill(-9.99,weight);
            else
                myhists->Plot_tightak4tag_bjet1phi->Fill(TTbjet1.Phi(),weight);

            if( TTbjet1.M() >= 1000 )
                myhists->Plot_tightak4tag_bjet1mass->Fill(999.5,weight);
            else if( TTbjet1.M() <= 0 )
                myhists->Plot_tightak4tag_bjet1mass->Fill(0.5,weight);
            else
                myhists->Plot_tightak4tag_bjet1mass->Fill(TTbjet1.M(),weight);

            if( maxbjetscore >= 1 )
                myhists->Plot_tightak4tag_bjet1score->Fill(0.9995,weight);
            else if( maxbjetscore <= 0 )
                myhists->Plot_tightak4tag_bjet1score->Fill(0.0005,weight);
            else
                myhists->Plot_tightak4tag_bjet1score->Fill(maxbjetscore,weight);
        }else if(idxsecbjet != -999 && RJet_btagDeepFlavB[idxsecbjet] > loose_deepflavor_bscore){
            TLorentzVector TTbjet2;
            TTbjet2.SetPtEtaPhiM(RJet_pt[idxsecbjet],RJet_eta[idxsecbjet],RJet_phi[idxsecbjet],RJet_mass[idxsecbjet]);
            if( TTbjet2.Pt() >= 1000 )
                myhists->Plot_tightak4tag_bjet1pt->Fill(999.5,weight);
            else if( TTbjet2.Pt() <= 0 )
                myhists->Plot_tightak4tag_bjet1pt->Fill(0.5,weight);
            else
                myhists->Plot_tightak4tag_bjet1pt->Fill(TTbjet2.Pt(),weight);

            if( TTbjet2.Eta() >= 10 )
                myhists->Plot_tightak4tag_bjet1eta->Fill(9.99,weight);
            else if( TTbjet2.Eta() <= -10 )
                myhists->Plot_tightak4tag_bjet1eta->Fill(-9.99,weight);
            else
                myhists->Plot_tightak4tag_bjet1eta->Fill(TTbjet2.Eta(),weight);

            if( TTbjet2.Phi() >= 10 )
                myhists->Plot_tightak4tag_bjet1phi->Fill(9.99,weight);
            else if( TTbjet2.Phi() <= -10 )
                myhists->Plot_tightak4tag_bjet1phi->Fill(-9.99,weight);
            else
                myhists->Plot_tightak4tag_bjet1phi->Fill(TTbjet2.Phi(),weight);

            if( TTbjet2.M() >= 1000 )
                myhists->Plot_tightak4tag_bjet1mass->Fill(999.5,weight);
            else if( TTbjet2.M() <= 0 )
                myhists->Plot_tightak4tag_bjet1mass->Fill(0.5,weight);
            else
                myhists->Plot_tightak4tag_bjet1mass->Fill(TTbjet2.M(),weight);

            if( secbjetscore >= 1 )
                myhists->Plot_tightak4tag_bjet1score->Fill(0.9995,weight);
            else if( secbjetscore <= 0 )
                myhists->Plot_tightak4tag_bjet1score->Fill(0.0005,weight);
            else
                myhists->Plot_tightak4tag_bjet1score->Fill(secbjetscore,weight);
        }

        if(idxmaxbjet != -999 && idxsecbjet != -999 && RJet_btagDeepFlavB[idxsecbjet] > medium_deepflavor_bscore){
            TLorentzVector TTbjet1, TTbjet2;
            TTbjet1.SetPtEtaPhiM(RJet_pt[idxmaxbjet],RJet_eta[idxmaxbjet],RJet_phi[idxmaxbjet],RJet_mass[idxmaxbjet]);
            TTbjet2.SetPtEtaPhiM(RJet_pt[idxsecbjet],RJet_eta[idxsecbjet],RJet_phi[idxsecbjet],RJet_mass[idxsecbjet]);
            if((TTbjet1+TRlepton1).M() < (TTbjet2+TRlepton1).M()) Mlbminmedium = (TTbjet1+TRlepton1).M();
            else Mlbminmedium = (TTbjet2+TRlepton1).M();
        }else if(idxmaxbjet != -999 && RJet_btagDeepFlavB[idxmaxbjet] > medium_deepflavor_bscore){
            TLorentzVector TTbjet1;
            TTbjet1.SetPtEtaPhiM(RJet_pt[idxmaxbjet],RJet_eta[idxmaxbjet],RJet_phi[idxmaxbjet],RJet_mass[idxmaxbjet]);
            Mlbminmedium = (TTbjet1+TRlepton1).M();
        }else if(idxsecbjet != -999 && RJet_btagDeepFlavB[idxsecbjet] > medium_deepflavor_bscore){
            TLorentzVector TTbjet2;
            TTbjet2.SetPtEtaPhiM(RJet_pt[idxsecbjet],RJet_eta[idxsecbjet],RJet_phi[idxsecbjet],RJet_mass[idxsecbjet]);
            Mlbminmedium = (TTbjet2+TRlepton1).M();
        }else{
            Mlbminmedium = 1000;
        }


        if( Mlbminloose >= 1000 )
            myhists->Plot_tightak4tag_Mlb->Fill(999.5,weight);
        else if( Mlbminloose <= 0 )
            myhists->Plot_tightak4tag_Mlb->Fill(0.5,weight);
        else
            myhists->Plot_tightak4tag_Mlb->Fill(Mlbminloose,weight);

        //**************************************************************
        //**************Selecting VBS jets******************************
        //**************************************************************

        int Nvbfjet1 = -999;
        int Nvbfjet2 = -999;
        double maxvbfjetp = 0;
        double secvbfjetp = 0;
        int nvbsjets = 0;
        TLorentzVector TRleadingvbsjet;
        TLorentzVector TRsubleadvbsjet;
        for(int jj = 0 ; jj < RnJet ; jj ++){
            TLorentzVector Tvbsjet;
            Tvbsjet.SetPtEtaPhiM(RJet_pt[jj],RJet_eta[jj],RJet_phi[jj],RJet_mass[jj]);
            if(RJet_pt[jj] < 30) continue;
            if(fabs(RJet_eta[jj]) > 4.7) continue;
            if(Tvbsjet.DeltaR(TRlepton1) < 0.4) continue;
            if(Tvbsjet.DeltaR(TTHiggs) < 0.8) continue;
            if(Tvbsjet.DeltaR(TTWjet) < 0.8) continue;
            if(if2016){
                if(RJet_jetId[jj] < 1) continue;
            }else{
                if(RJet_jetId[jj] < 2) continue;
            }
            if(RJet_pt[jj] < 50){
                if(RJet_puId[jj] == 0) continue;
            }
            
            nvbsjets++;
            if(Tvbsjet.Eta() > 0 && maxvbfjetp < Tvbsjet.P()){
                maxvbfjetp = Tvbsjet.P();
                Nvbfjet1 = jj;
            }else if(Tvbsjet.Eta() < 0 && secvbfjetp < Tvbsjet.P()){
                secvbfjetp = Tvbsjet.P();
                Nvbfjet2 = jj;
            }
        }
        if(nvbsjets < 2) continue;
        bool ifcalvbsp = false;
        if(Nvbfjet1 == -999 || Nvbfjet2 == -999) ifcalvbsp = true;
        if(!ifcalvbsp){
            TRleadingvbsjet.SetPtEtaPhiM(RJet_pt[Nvbfjet1],RJet_eta[Nvbfjet1],RJet_phi[Nvbfjet1],RJet_mass[Nvbfjet1]);
            TRsubleadvbsjet.SetPtEtaPhiM(RJet_pt[Nvbfjet2],RJet_eta[Nvbfjet2],RJet_phi[Nvbfjet2],RJet_mass[Nvbfjet2]);
            if(TRleadingvbsjet.P() < TRsubleadvbsjet.P()){
                TLorentzVector Ttrans;
                Ttrans          = TRleadingvbsjet;
                TRleadingvbsjet = TRsubleadvbsjet;
                TRsubleadvbsjet = Ttrans;
            }
        }
        maxvbfjetp = 0;
        secvbfjetp = 0;
        Nvbfjet1 = -999;
        Nvbfjet2 = -999;
        if(ifcalvbsp){
            for(int jj = 0 ; jj < RnJet ; jj ++){
                TLorentzVector Tvbsjet;
                Tvbsjet.SetPtEtaPhiM(RJet_pt[jj],RJet_eta[jj],RJet_phi[jj],RJet_mass[jj]);
                if(RJet_pt[jj] < 30) continue;
                if(Tvbsjet.DeltaR(TRlepton1) < 0.4) continue;
                if(Tvbsjet.DeltaR(TTHiggs) < 0.8) continue;
                if(Tvbsjet.DeltaR(TTWjet) < 0.8) continue;
                if(maxvbfjetp < Tvbsjet.P()){
                    secvbfjetp = maxvbfjetp;
                    maxvbfjetp = Tvbsjet.P();
                    Nvbfjet2 = Nvbfjet1;
                    Nvbfjet1 = jj;
                }else if(secvbfjetp < Tvbsjet.P()){
                    secvbfjetp = Tvbsjet.P();
                    Nvbfjet2 = jj;
                }
            }
            TRleadingvbsjet.SetPtEtaPhiM(RJet_pt[Nvbfjet1],RJet_eta[Nvbfjet1],RJet_phi[Nvbfjet1],RJet_mass[Nvbfjet1]);
            TRsubleadvbsjet.SetPtEtaPhiM(RJet_pt[Nvbfjet2],RJet_eta[Nvbfjet2],RJet_phi[Nvbfjet2],RJet_mass[Nvbfjet2]);
        }
        weighted_number_vbsjet += weight;
        weighted_error_vbsjet += (weight*weight);




        if(Idlep1 == 11 || Idlep1 == -11){
            if( RElectron_pt[Idxlep1] >= 1000 )
                myhists->Plot_VBStag_elecpt->Fill(999.5,weight);
            else if( RElectron_pt[Idxlep1] <= 0 )
                myhists->Plot_VBStag_elecpt->Fill(0.5,weight);
            else
                myhists->Plot_VBStag_elecpt->Fill(RElectron_pt[Idxlep1],weight);

            if( RElectron_eta[Idxlep1] >= 10 )
                myhists->Plot_VBStag_eleceta->Fill(9.99,weight);
            else if( RElectron_eta[Idxlep1] <= -10 )
                myhists->Plot_VBStag_eleceta->Fill(-9.99,weight);
            else
                myhists->Plot_VBStag_eleceta->Fill(RElectron_eta[Idxlep1],weight);

            if( RElectron_phi[Idxlep1] >= 10 )
                myhists->Plot_VBStag_elecphi->Fill(9.99,weight);
            else if( RElectron_phi[Idxlep1] <= -10 )
                myhists->Plot_VBStag_elecphi->Fill(-9.99,weight);
            else
                myhists->Plot_VBStag_elecphi->Fill(RElectron_phi[Idxlep1],weight);

        }else{
            if( RMuon_pt[Idxlep1] >= 1000 )
                myhists->Plot_VBStag_muonpt->Fill(999.5,weight);
            else if( RMuon_pt[Idxlep1] <= 0 )
                myhists->Plot_VBStag_muonpt->Fill(0.5,weight);
            else
                myhists->Plot_VBStag_muonpt->Fill(RMuon_pt[Idxlep1],weight);

            if( RMuon_eta[Idxlep1] >= 10 )
                myhists->Plot_VBStag_muoneta->Fill(9.99,weight);
            else if( RMuon_eta[Idxlep1] <= -10 )
                myhists->Plot_VBStag_muoneta->Fill(-9.99,weight);
            else
                myhists->Plot_VBStag_muoneta->Fill(RMuon_eta[Idxlep1],weight);

            if( RMuon_phi[Idxlep1] >= 10 )
                myhists->Plot_VBStag_muonphi->Fill(9.99,weight);
            else if( RMuon_phi[Idxlep1] <= -10 )
                myhists->Plot_VBStag_muonphi->Fill(-9.99,weight);
            else
                myhists->Plot_VBStag_muonphi->Fill(RMuon_phi[Idxlep1],weight);

        }


        if( RFatJet_pt[idx_highesthbb] >= 1000 )
            myhists->Plot_VBStag_fatjetHpt->Fill(999.5,weight);
        else if( RFatJet_pt[idx_highesthbb] <= 0 )
            myhists->Plot_VBStag_fatjetHpt->Fill(0.5,weight);
        else
            myhists->Plot_VBStag_fatjetHpt->Fill(RFatJet_pt[idx_highesthbb],weight);

        if( highestak8score_Hbb >= 1 )
            myhists->Plot_VBStag_fatjetHscore->Fill(0.9995,weight);
        else if( highestak8score_Hbb <= 0 )
            myhists->Plot_VBStag_fatjetHscore->Fill(0.0005,weight);
        else
            myhists->Plot_VBStag_fatjetHscore->Fill(highestak8score_Hbb,weight);

        if( RFatJet_tau2[idx_highesthbb]/RFatJet_tau1[idx_highesthbb] >= 1 )
            myhists->Plot_VBStag_fatjetHtau21->Fill(0.9995,weight);
        else if( RFatJet_tau2[idx_highesthbb]/RFatJet_tau1[idx_highesthbb] <= 0 )
            myhists->Plot_VBStag_fatjetHtau21->Fill(0.0005,weight);
        else
            myhists->Plot_VBStag_fatjetHtau21->Fill(RFatJet_tau2[idx_highesthbb]/RFatJet_tau1[idx_highesthbb],weight);

        if( RFatJet_particleNet_mass[idx_highesthbb] >= 1000 )
            myhists->Plot_VBStag_fatjetHmass->Fill(999.5,weight);
        else if( RFatJet_particleNet_mass[idx_highesthbb] <= 0 )
            myhists->Plot_VBStag_fatjetHmass->Fill(0.5,weight);
        else
            myhists->Plot_VBStag_fatjetHmass->Fill(RFatJet_particleNet_mass[idx_highesthbb],weight);

        if( RFatJet_msoftdrop[idx_highesthbb] >= 1000 )
            myhists->Plot_VBStag_fatjetHmsoftdrop->Fill(999.5,weight);
        else if( RFatJet_msoftdrop[idx_highesthbb] <= 0 )
            myhists->Plot_VBStag_fatjetHmsoftdrop->Fill(0.5,weight);
        else
            myhists->Plot_VBStag_fatjetHmsoftdrop->Fill(RFatJet_msoftdrop[idx_highesthbb],weight);

        if( RFatJet_pt[idx_highestwjet] >= 1000 )
            myhists->Plot_VBStag_fatjetWpt->Fill(999.5,weight);
        else if( RFatJet_pt[idx_highestwjet] <= 0 )
            myhists->Plot_VBStag_fatjetWpt->Fill(0.5,weight);
        else
            myhists->Plot_VBStag_fatjetWpt->Fill(RFatJet_pt[idx_highestwjet],weight);

        if( highestak8score_Wjet >= 1 )
            myhists->Plot_VBStag_fatjetWscore->Fill(0.9995,weight);
        else if( highestak8score_Wjet <= 0 )
            myhists->Plot_VBStag_fatjetWscore->Fill(0.0005,weight);
        else
            myhists->Plot_VBStag_fatjetWscore->Fill(highestak8score_Wjet,weight);

        if( RFatJet_tau2[idx_highestwjet]/RFatJet_tau1[idx_highestwjet] >= 1 )
            myhists->Plot_VBStag_fatjetWtau21->Fill(0.9995,weight);
        else if( RFatJet_tau2[idx_highestwjet]/RFatJet_tau1[idx_highestwjet] <= 0 )
            myhists->Plot_VBStag_fatjetWtau21->Fill(0.0005,weight);
        else
            myhists->Plot_VBStag_fatjetWtau21->Fill(RFatJet_tau2[idx_highestwjet]/RFatJet_tau1[idx_highestwjet],weight);

        if( RFatJet_particleNet_mass[idx_highestwjet] >= 1000 )
            myhists->Plot_VBStag_fatjetWmass->Fill(999.5,weight);
        else if( RFatJet_particleNet_mass[idx_highestwjet] <= 0 )
            myhists->Plot_VBStag_fatjetWmass->Fill(0.5,weight);
        else
            myhists->Plot_VBStag_fatjetWmass->Fill(RFatJet_particleNet_mass[idx_highestwjet],weight);

        if( RFatJet_msoftdrop[idx_highestwjet] >= 1000 )
            myhists->Plot_VBStag_fatjetWmsoftdrop->Fill(999.5,weight);
        else if( RFatJet_msoftdrop[idx_highestwjet] <= 0 )
            myhists->Plot_VBStag_fatjetWmsoftdrop->Fill(0.5,weight);
        else
            myhists->Plot_VBStag_fatjetWmsoftdrop->Fill(RFatJet_msoftdrop[idx_highestwjet],weight);

        if( ((TRleadingvbsjet+TRsubleadvbsjet).M()) >= 10000 )
            myhists->Plot_VBStag_vbsMjj->Fill(9999.5,weight);
        else if( ((TRleadingvbsjet+TRsubleadvbsjet).M()) <= 0 )
            myhists->Plot_VBStag_vbsMjj->Fill(0.5,weight);
        else
            myhists->Plot_VBStag_vbsMjj->Fill(((TRleadingvbsjet+TRsubleadvbsjet).M()),weight);

        if( fabs(TRleadingvbsjet.Eta()-TRsubleadvbsjet.Eta()) >= 10 )
            myhists->Plot_VBStag_vbsdetajj->Fill(9.995,weight);
        else if( fabs(TRleadingvbsjet.Eta()-TRsubleadvbsjet.Eta()) <= 0 )
            myhists->Plot_VBStag_vbsdetajj->Fill(0.005,weight);
        else
            myhists->Plot_VBStag_vbsdetajj->Fill(fabs(TRleadingvbsjet.Eta()-TRsubleadvbsjet.Eta()),weight);

        if( Mlbminloose >= 1000 )
            myhists->Plot_VBStag_Mlb->Fill(999.5,weight);
        else if( Mlbminloose <= 0 )
            myhists->Plot_VBStag_Mlb->Fill(0.5,weight);
        else
            myhists->Plot_VBStag_Mlb->Fill(Mlbminloose,weight);


        if( TRleadingvbsjet.Pt() >= 1000 )
            myhists->Plot_VBStag_vbs1pt->Fill(999.5,weight);
        else if( TRleadingvbsjet.Pt() <= 0 )
            myhists->Plot_VBStag_vbs1pt->Fill(0.5,weight);
        else
            myhists->Plot_VBStag_vbs1pt->Fill(TRleadingvbsjet.Pt(),weight);

        if( TRleadingvbsjet.Eta() >= 10 )
            myhists->Plot_VBStag_vbs1eta->Fill(9.99,weight);
        else if( TRleadingvbsjet.Eta() <= -10 )
            myhists->Plot_VBStag_vbs1eta->Fill(-9.99,weight);
        else
            myhists->Plot_VBStag_vbs1eta->Fill(TRleadingvbsjet.Eta(),weight);

        if( TRleadingvbsjet.Phi() >= 10 )
            myhists->Plot_VBStag_vbs1phi->Fill(9.99,weight);
        else if( TRleadingvbsjet.Phi() <= -10 )
            myhists->Plot_VBStag_vbs1phi->Fill(-9.99,weight);
        else
            myhists->Plot_VBStag_vbs1phi->Fill(TRleadingvbsjet.Phi(),weight);

        if( TRsubleadvbsjet.Pt() >= 1000 )
            myhists->Plot_VBStag_vbs2pt->Fill(999.5,weight);
        else if( TRsubleadvbsjet.Pt() <= 0 )
            myhists->Plot_VBStag_vbs2pt->Fill(0.5,weight);
        else
            myhists->Plot_VBStag_vbs2pt->Fill(TRsubleadvbsjet.Pt(),weight);

        if( TRsubleadvbsjet.Eta() >= 10 )
            myhists->Plot_VBStag_vbs2eta->Fill(9.99,weight);
        else if( TRsubleadvbsjet.Eta() <= -10 )
            myhists->Plot_VBStag_vbs2eta->Fill(-9.99,weight);
        else
            myhists->Plot_VBStag_vbs2eta->Fill(TRsubleadvbsjet.Eta(),weight);

        if( TRsubleadvbsjet.Phi() >= 10 )
            myhists->Plot_VBStag_vbs2phi->Fill(9.99,weight);
        else if( TRsubleadvbsjet.Phi() <= -10 )
            myhists->Plot_VBStag_vbs2phi->Fill(-9.99,weight);
        else
            myhists->Plot_VBStag_vbs2phi->Fill(TRsubleadvbsjet.Phi(),weight);

        if( fabs(TRleadingvbsjet.Eta() - TRsubleadvbsjet.Eta()) >= 10 )
            myhists->Plot_VBStag_detajj->Fill(9.99,weight);
        else if( fabs(TRleadingvbsjet.Eta() - TRsubleadvbsjet.Eta()) <= -10 )
            myhists->Plot_VBStag_detajj->Fill(-9.99,weight);
        else
            myhists->Plot_VBStag_detajj->Fill(fabs(TRleadingvbsjet.Eta() - TRsubleadvbsjet.Eta()),weight);

        if( ((TRleadingvbsjet + TRsubleadvbsjet).M())>= 10000 )
            myhists->Plot_VBStag_Mjj->Fill(9999.99,weight);
        else if( ((TRleadingvbsjet + TRsubleadvbsjet).M()) <= 0 )
            myhists->Plot_VBStag_Mjj->Fill(0.59,weight);
        else
            myhists->Plot_VBStag_Mjj->Fill(((TRleadingvbsjet + TRsubleadvbsjet).M()),weight);


        if(idxmaxbjet != -999 && idxsecbjet != -999 && RJet_btagDeepFlavB[idxsecbjet] > loose_deepflavor_bscore){
            TLorentzVector TTbjet1, TTbjet2;
            TTbjet1.SetPtEtaPhiM(RJet_pt[idxmaxbjet],RJet_eta[idxmaxbjet],RJet_phi[idxmaxbjet],RJet_mass[idxmaxbjet]);
            TTbjet2.SetPtEtaPhiM(RJet_pt[idxsecbjet],RJet_eta[idxsecbjet],RJet_phi[idxsecbjet],RJet_mass[idxsecbjet]);
            if((TTbjet1+TRlepton1).M() < (TTbjet2+TRlepton1).M()){
                if( TTbjet1.Pt() >= 1000 )
                    myhists->Plot_VBStag_bjet1pt->Fill(999.5,weight);
                else if( TTbjet1.Pt() <= 0 )
                    myhists->Plot_VBStag_bjet1pt->Fill(0.5,weight);
                else
                    myhists->Plot_VBStag_bjet1pt->Fill(TTbjet1.Pt(),weight);

                if( TTbjet1.Eta() >= 10 )
                    myhists->Plot_VBStag_bjet1eta->Fill(9.99,weight);
                else if( TTbjet1.Eta() <= -10 )
                    myhists->Plot_VBStag_bjet1eta->Fill(-9.99,weight);
                else
                    myhists->Plot_VBStag_bjet1eta->Fill(TTbjet1.Eta(),weight);

                if( TTbjet1.Phi() >= 10 )
                    myhists->Plot_VBStag_bjet1phi->Fill(9.99,weight);
                else if( TTbjet1.Phi() <= -10 )
                    myhists->Plot_VBStag_bjet1phi->Fill(-9.99,weight);
                else
                    myhists->Plot_VBStag_bjet1phi->Fill(TTbjet1.Phi(),weight);

                if( TTbjet1.M() >= 1000 )
                    myhists->Plot_VBStag_bjet1mass->Fill(999.5,weight);
                else if( TTbjet1.M() <= 0 )
                    myhists->Plot_VBStag_bjet1mass->Fill(0.5,weight);
                else
                    myhists->Plot_VBStag_bjet1mass->Fill(TTbjet1.M(),weight);

                if( maxbjetscore >= 1 )
                    myhists->Plot_VBStag_bjet1score->Fill(0.9995,weight);
                else if( maxbjetscore <= 0 )
                    myhists->Plot_VBStag_bjet1score->Fill(0.0005,weight);
                else
                    myhists->Plot_VBStag_bjet1score->Fill(maxbjetscore,weight);

                if( TTbjet2.Pt() >= 1000 )
                    myhists->Plot_VBStag_bjet2pt->Fill(999.5,weight);
                else if( TTbjet2.Pt() <= 0 )
                    myhists->Plot_VBStag_bjet2pt->Fill(0.5,weight);
                else
                    myhists->Plot_VBStag_bjet2pt->Fill(TTbjet2.Pt(),weight);

                if( TTbjet2.Eta() >= 10 )
                    myhists->Plot_VBStag_bjet2eta->Fill(9.99,weight);
                else if( TTbjet2.Eta() <= -10 )
                    myhists->Plot_VBStag_bjet2eta->Fill(-9.99,weight);
                else
                    myhists->Plot_VBStag_bjet2eta->Fill(TTbjet2.Eta(),weight);

                if( TTbjet2.Phi() >= 10 )
                    myhists->Plot_VBStag_bjet2phi->Fill(9.99,weight);
                else if( TTbjet2.Phi() <= -10 )
                    myhists->Plot_VBStag_bjet2phi->Fill(-9.99,weight);
                else
                    myhists->Plot_VBStag_bjet2phi->Fill(TTbjet2.Phi(),weight);

                if( TTbjet2.M() >= 1000 )
                    myhists->Plot_VBStag_bjet2mass->Fill(999.5,weight);
                else if( TTbjet2.M() <= 0 )
                    myhists->Plot_VBStag_bjet2mass->Fill(0.5,weight);
                else
                    myhists->Plot_VBStag_bjet2mass->Fill(TTbjet2.M(),weight);

                if( secbjetscore >= 1 )
                    myhists->Plot_VBStag_bjet2score->Fill(0.9995,weight);
                else if( secbjetscore <= 0 )
                    myhists->Plot_VBStag_bjet2score->Fill(0.0005,weight);
                else
                    myhists->Plot_VBStag_bjet2score->Fill(secbjetscore,weight);
            }
            else{
                if( TTbjet1.Pt() >= 1000 )
                    myhists->Plot_VBStag_bjet2pt->Fill(999.5,weight);
                else if( TTbjet1.Pt() <= 0 )
                    myhists->Plot_VBStag_bjet2pt->Fill(0.5,weight);
                else
                    myhists->Plot_VBStag_bjet2pt->Fill(TTbjet1.Pt(),weight);

                if( TTbjet1.Eta() >= 10 )
                    myhists->Plot_VBStag_bjet2eta->Fill(9.99,weight);
                else if( TTbjet1.Eta() <= -10 )
                    myhists->Plot_VBStag_bjet2eta->Fill(-9.99,weight);
                else
                    myhists->Plot_VBStag_bjet2eta->Fill(TTbjet1.Eta(),weight);

                if( TTbjet1.Phi() >= 10 )
                    myhists->Plot_VBStag_bjet2phi->Fill(9.99,weight);
                else if( TTbjet1.Phi() <= -10 )
                    myhists->Plot_VBStag_bjet2phi->Fill(-9.99,weight);
                else
                    myhists->Plot_VBStag_bjet2phi->Fill(TTbjet1.Phi(),weight);

                if( TTbjet1.M() >= 1000 )
                    myhists->Plot_VBStag_bjet2mass->Fill(999.5,weight);
                else if( TTbjet1.M() <= 0 )
                    myhists->Plot_VBStag_bjet2mass->Fill(0.5,weight);
                else
                    myhists->Plot_VBStag_bjet2mass->Fill(TTbjet1.M(),weight);

                if( maxbjetscore >= 1 )
                    myhists->Plot_VBStag_bjet2score->Fill(0.9995,weight);
                else if( maxbjetscore <= 0 )
                    myhists->Plot_VBStag_bjet2score->Fill(0.0005,weight);
                else
                    myhists->Plot_VBStag_bjet2score->Fill(maxbjetscore,weight);

                if( TTbjet2.Pt() >= 1000 )
                    myhists->Plot_VBStag_bjet1pt->Fill(999.5,weight);
                else if( TTbjet2.Pt() <= 0 )
                    myhists->Plot_VBStag_bjet1pt->Fill(0.5,weight);
                else
                    myhists->Plot_VBStag_bjet1pt->Fill(TTbjet2.Pt(),weight);

                if( TTbjet2.Eta() >= 10 )
                    myhists->Plot_VBStag_bjet1eta->Fill(9.99,weight);
                else if( TTbjet2.Eta() <= -10 )
                    myhists->Plot_VBStag_bjet1eta->Fill(-9.99,weight);
                else
                    myhists->Plot_VBStag_bjet1eta->Fill(TTbjet2.Eta(),weight);

                if( TTbjet2.Phi() >= 10 )
                    myhists->Plot_VBStag_bjet1phi->Fill(9.99,weight);
                else if( TTbjet2.Phi() <= -10 )
                    myhists->Plot_VBStag_bjet1phi->Fill(-9.99,weight);
                else
                    myhists->Plot_VBStag_bjet1phi->Fill(TTbjet2.Phi(),weight);

                if( TTbjet2.M() >= 1000 )
                    myhists->Plot_VBStag_bjet1mass->Fill(999.5,weight);
                else if( TTbjet2.M() <= 0 )
                    myhists->Plot_VBStag_bjet1mass->Fill(0.5,weight);
                else
                    myhists->Plot_VBStag_bjet1mass->Fill(TTbjet2.M(),weight);

                if( secbjetscore >= 1 )
                    myhists->Plot_VBStag_bjet1score->Fill(0.9995,weight);
                else if( secbjetscore <= 0 )
                    myhists->Plot_VBStag_bjet1score->Fill(0.0005,weight);
                else
                    myhists->Plot_VBStag_bjet1score->Fill(secbjetscore,weight);
            }
        }else if(idxmaxbjet != -999 && RJet_btagDeepFlavB[idxmaxbjet] > loose_deepflavor_bscore){
            TLorentzVector TTbjet1;
            TTbjet1.SetPtEtaPhiM(RJet_pt[idxmaxbjet],RJet_eta[idxmaxbjet],RJet_phi[idxmaxbjet],RJet_mass[idxmaxbjet]);
            if( TTbjet1.Pt() >= 1000 )
                myhists->Plot_VBStag_bjet1pt->Fill(999.5,weight);
            else if( TTbjet1.Pt() <= 0 )
                myhists->Plot_VBStag_bjet1pt->Fill(0.5,weight);
            else
                myhists->Plot_VBStag_bjet1pt->Fill(TTbjet1.Pt(),weight);

            if( TTbjet1.Eta() >= 10 )
                myhists->Plot_VBStag_bjet1eta->Fill(9.99,weight);
            else if( TTbjet1.Eta() <= -10 )
                myhists->Plot_VBStag_bjet1eta->Fill(-9.99,weight);
            else
                myhists->Plot_VBStag_bjet1eta->Fill(TTbjet1.Eta(),weight);

            if( TTbjet1.Phi() >= 10 )
                myhists->Plot_VBStag_bjet1phi->Fill(9.99,weight);
            else if( TTbjet1.Phi() <= -10 )
                myhists->Plot_VBStag_bjet1phi->Fill(-9.99,weight);
            else
                myhists->Plot_VBStag_bjet1phi->Fill(TTbjet1.Phi(),weight);

            if( TTbjet1.M() >= 1000 )
                myhists->Plot_VBStag_bjet1mass->Fill(999.5,weight);
            else if( TTbjet1.M() <= 0 )
                myhists->Plot_VBStag_bjet1mass->Fill(0.5,weight);
            else
                myhists->Plot_VBStag_bjet1mass->Fill(TTbjet1.M(),weight);

            if( maxbjetscore >= 1 )
                myhists->Plot_VBStag_bjet1score->Fill(0.9995,weight);
            else if( maxbjetscore <= 0 )
                myhists->Plot_VBStag_bjet1score->Fill(0.0005,weight);
            else
                myhists->Plot_VBStag_bjet1score->Fill(maxbjetscore,weight);
        }else if(idxsecbjet != -999 && RJet_btagDeepFlavB[idxsecbjet] > loose_deepflavor_bscore){
            TLorentzVector TTbjet2;
            TTbjet2.SetPtEtaPhiM(RJet_pt[idxsecbjet],RJet_eta[idxsecbjet],RJet_phi[idxsecbjet],RJet_mass[idxsecbjet]);
            if( TTbjet2.Pt() >= 1000 )
                myhists->Plot_VBStag_bjet1pt->Fill(999.5,weight);
            else if( TTbjet2.Pt() <= 0 )
                myhists->Plot_VBStag_bjet1pt->Fill(0.5,weight);
            else
                myhists->Plot_VBStag_bjet1pt->Fill(TTbjet2.Pt(),weight);

            if( TTbjet2.Eta() >= 10 )
                myhists->Plot_VBStag_bjet1eta->Fill(9.99,weight);
            else if( TTbjet2.Eta() <= -10 )
                myhists->Plot_VBStag_bjet1eta->Fill(-9.99,weight);
            else
                myhists->Plot_VBStag_bjet1eta->Fill(TTbjet2.Eta(),weight);

            if( TTbjet2.Phi() >= 10 )
                myhists->Plot_VBStag_bjet1phi->Fill(9.99,weight);
            else if( TTbjet2.Phi() <= -10 )
                myhists->Plot_VBStag_bjet1phi->Fill(-9.99,weight);
            else
                myhists->Plot_VBStag_bjet1phi->Fill(TTbjet2.Phi(),weight);

            if( TTbjet2.M() >= 1000 )
                myhists->Plot_VBStag_bjet1mass->Fill(999.5,weight);
            else if( TTbjet2.M() <= 0 )
                myhists->Plot_VBStag_bjet1mass->Fill(0.5,weight);
            else
                myhists->Plot_VBStag_bjet1mass->Fill(TTbjet2.M(),weight);

            if( secbjetscore >= 1 )
                myhists->Plot_VBStag_bjet1score->Fill(0.9995,weight);
            else if( secbjetscore <= 0 )
                myhists->Plot_VBStag_bjet1score->Fill(0.0005,weight);
            else
                myhists->Plot_VBStag_bjet1score->Fill(secbjetscore,weight);
        }







//RJet_pt[jj] = RJet_pt[jj] * (1 - P_Ak4Jet_Scale->GetBinContent(P_Ak4Jet_Scale->FindBin(RJet_eta[jj],RJet_pt[jj])));


        //ADDINGMETUNCERTAINTIES
        double Dtrans_E;
        Dtrans_E = TRlepton1.Pt() + TTHiggs.Pt() + TTWjet.Pt() + RMET_pt ;

        if( Dtrans_E >= 1000 )
            myhists->Plot_VBStag_ST->Fill(999.5,weight);
        else if( Dtrans_E <= 0 )
            myhists->Plot_VBStag_ST->Fill(0.5,weight);
        else
            myhists->Plot_VBStag_ST->Fill(Dtrans_E,weight);


        if(Dtrans_E < 1000) continue;
        weighted_number_ST += weight;
        weighted_error_ST += (weight * weight);

        //if(((TRleadingvbsjet + TRsubleadvbsjet).M()) > 500 && fabs(TRleadingvbsjet.Eta()  - TRsubleadvbsjet.Eta()) > 4) continue;

        if(idx_highestwjet == idx_highestzjet){
            weighted_number_SameWZ += weight;
            weighted_error_SameWZ += weight*weight;
        }

        if(Idlep1 == -11){
            weighted_number_me += weight;
            weighted_error_me += (weight * weight);
        }else if(Idlep1 == 11){
            weighted_number_pe += weight;
            weighted_error_pe += (weight * weight);
        }else if(Idlep1 == -13){
            weighted_number_mm += weight;
            weighted_error_mm += (weight * weight);
        }else if(Idlep1 == 13){
            weighted_number_pm += weight;
            weighted_error_pm += (weight * weight);
        }else{
            cout<<" Shoud not see this message, please check the lepton id"<<endl;
        }








        double splittree = myrandom->Uniform(1);
        //cout<<"random "<<splittree<<endl;
        

        myhists->total_Pileup_nTrueInt = RPileup_nTrueInt;

        myhists->total_nLHEPdfWeight = RnLHEPdfWeight;
        for(int jj = 0 ; jj < RnLHEPdfWeight ; jj ++){
            myhists->total_LHEPdfWeight[jj] = RLHEPdfWeight[jj];
        }

        myhists->total_Hbbscore = highestak8score_Hbb;
        myhists->total_Hbbmass = RFatJet_particleNet_mass[idx_highesthbb];
        myhists->total_Hbbmsoftdrop = RFatJet_msoftdrop[idx_highesthbb];
        myhists->total_Hbbtau21 = (RFatJet_tau2[idx_highesthbb] / RFatJet_tau1[idx_highesthbb]);
        myhists->total_Hbbtau32 = (RFatJet_tau3[idx_highesthbb] / RFatJet_tau2[idx_highesthbb]);
        myhists->total_Hbbtau1 = RFatJet_tau1[idx_highesthbb];
        myhists->total_Hbbtau2 = RFatJet_tau2[idx_highesthbb];
        myhists->total_Hbbtau3 = RFatJet_tau3[idx_highesthbb];
        myhists->total_HbbPt = RFatJet_pt[idx_highesthbb];
        myhists->total_HbbEta = RFatJet_eta[idx_highesthbb];
        myhists->total_HbbPhi = RFatJet_phi[idx_highesthbb];

        myhists->total_Wjetscore = highestak8score_Wjet;
        myhists->total_Wjetmass = RFatJet_particleNet_mass[idx_highestwjet];
        myhists->total_Wjetmsoftdrop = RFatJet_msoftdrop[idx_highestwjet];
        myhists->total_Wjettau21 = (RFatJet_tau2[idx_highestwjet] / RFatJet_tau1[idx_highestwjet]);
        myhists->total_Wjettau32 = (RFatJet_tau3[idx_highestwjet] / RFatJet_tau2[idx_highestwjet]);
        myhists->total_Wjettau1 = RFatJet_tau1[idx_highestwjet];
        myhists->total_Wjettau2 = RFatJet_tau2[idx_highestwjet];
        myhists->total_Wjettau3 = RFatJet_tau3[idx_highestwjet];
        myhists->total_WjetPt = RFatJet_pt[idx_highestwjet];
        myhists->total_WjetEta = RFatJet_eta[idx_highestwjet];
        myhists->total_WjetPhi = RFatJet_phi[idx_highestwjet];

        myhists->total_Zjetscore = highestak8score_Zjet;
        myhists->total_Zjetmass = RFatJet_particleNet_mass[idx_highestzjet];
        myhists->total_Zjetmsoftdrop = RFatJet_msoftdrop[idx_highestzjet];
        myhists->total_Zjettau21 = (RFatJet_tau2[idx_highestzjet] / RFatJet_tau1[idx_highestzjet]);
        myhists->total_Zjettau32 = (RFatJet_tau3[idx_highestzjet] / RFatJet_tau2[idx_highestzjet]);
        myhists->total_Zjettau1 = RFatJet_tau1[idx_highestzjet];
        myhists->total_Zjettau2 = RFatJet_tau2[idx_highestzjet];
        myhists->total_Zjettau3 = RFatJet_tau3[idx_highestzjet];
        myhists->total_ZjetPt = RFatJet_pt[idx_highestzjet];

        if(highestak8score_Wjet > 0.5){
            myhists->total_secfatjetscore = highestak8score_Wjet;
            myhists->total_secfatjetmass = RFatJet_particleNet_mass[idx_highestwjet];
            myhists->total_secfatjetmsoftdrop = RFatJet_msoftdrop[idx_highestwjet];
            myhists->total_secfatjettau21 = (RFatJet_tau2[idx_highestwjet] / RFatJet_tau1[idx_highestwjet]);
            myhists->total_secfatjettau32 = (RFatJet_tau3[idx_highestwjet] / RFatJet_tau2[idx_highestwjet]);
            myhists->total_secfatjettau1 = RFatJet_tau1[idx_highestwjet];
            myhists->total_secfatjettau2 = RFatJet_tau2[idx_highestwjet];
            myhists->total_secfatjettau3 = RFatJet_tau3[idx_highestwjet];
            myhists->total_secfatjetPt = RFatJet_pt[idx_highestwjet];
        }else{
            myhists->total_secfatjetscore = highestak8score_Zjet;
            myhists->total_secfatjetmass = RFatJet_particleNet_mass[idx_highestzjet];
            myhists->total_secfatjetmsoftdrop = RFatJet_msoftdrop[idx_highestzjet];
            myhists->total_secfatjettau21 = (RFatJet_tau2[idx_highestzjet] / RFatJet_tau1[idx_highestzjet]);
            myhists->total_secfatjettau32 = (RFatJet_tau3[idx_highestzjet] / RFatJet_tau2[idx_highestzjet]);
            myhists->total_secfatjettau1 = RFatJet_tau1[idx_highestzjet];
            myhists->total_secfatjettau2 = RFatJet_tau2[idx_highestzjet];
            myhists->total_secfatjettau3 = RFatJet_tau3[idx_highestzjet];
            myhists->total_secfatjetPt = RFatJet_pt[idx_highestzjet];
        }

        myhists->total_n_medium_ak4jet = n_medium_ak4jet;
        myhists->total_n_loose_ak4jet = n_loose_ak4jet;

        myhists->total_Mlbmin = Mlbmin;
        myhists->total_Mlbminloose = Mlbminloose;
        myhists->total_Mlbminmedium = Mlbminmedium;

        myhists->total_nbjet = idx_bjetcandi;
        if(idx_bjetcandi > 20) cout<<"Error Message : total bjet > 20 ! error !!!"<<endl;
        for(int jj = idx_bjetcandi ; jj < 20 ; jj ++){
            myhists->total_bjetpt[jj]=-999;
            myhists->total_bjeteta[jj]=-999;
            myhists->total_bjetphi[jj]=-999;
            myhists->total_bjetmass[jj]=-999;
            myhists->total_bjetbtagDeepFlavB[jj]=-999;
            myhists->total_bjetgenJetIdx[jj]=-999;
            myhists->total_bjetbtagDeepB[jj]=-999;
            myhists->total_bjetpartonFlavour[jj]=-999;
            myhists->total_bjethadronFlavour[jj]=-999;
            myhists->total_bjetId[jj]=-999;

        }



        myhists->total_leptonpt = TRlepton1.Pt();
        myhists->total_leptoneta = TRlepton1.Eta();
        myhists->total_leptonphi = TRlepton1.Phi();
        myhists->total_leptonmass = TRlepton1.M();
        myhists->total_VBSjet1eta = TRleadingvbsjet.Eta();
        myhists->total_VBSjet1phi = TRleadingvbsjet.Phi();
        myhists->total_VBSjet1pt = TRleadingvbsjet.Pt();
        myhists->total_VBSjet1mass = TRleadingvbsjet.M();
        myhists->total_VBSjet2eta = TRsubleadvbsjet.Eta();
        myhists->total_VBSjet2phi = TRsubleadvbsjet.Phi();
        myhists->total_VBSjet2pt = TRsubleadvbsjet.Pt();
        myhists->total_VBSjet2mass = TRsubleadvbsjet.M();

        myhists->total_VBSMjj = ((TRleadingvbsjet + TRsubleadvbsjet).M());
        myhists->total_VBSdetajj = fabs(TRleadingvbsjet.Eta()  - TRsubleadvbsjet.Eta());
        myhists->total_VBSdphijj = fabs(TRleadingvbsjet.Phi()  - TRsubleadvbsjet.Phi());
        myhists->total_VBSPtjj = ((TRleadingvbsjet + TRsubleadvbsjet).Pt());
        myhists->total_trans_E = Dtrans_E;
        myhists->total_MET = RMET_pt;
        myhists->total_weight = weight;
        myhists->total_fabsweight = fabs(weight);
        myhists->total_divide = splittree;
        myhists->totaltree->Fill();

    }

}
