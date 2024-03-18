#ifndef MAKEHISTS_HEADFILE
#define MAKEHISTS_HEADFILE
#include <iostream>
#include "TTree.h"

class TH1D;
class TH2D;
class TH2F;
class TH3F;
class TFile;
class TProfile;
class TProfile2D;
class makeHists{
    public:
        TFile *hf;

        TTree *totaltree;

        Float_t  total_Hbbscore;
        Float_t  total_Hbbmass;
        Float_t  total_Hbbmsoftdrop;
        Float_t  total_Hbbtau21;
        Float_t  total_Hbbtau32;
        Float_t  total_Hbbtau1;
        Float_t  total_Hbbtau2;
        Float_t  total_Hbbtau3;
        Float_t  total_HbbPt;
        Float_t  total_HbbEta;
        Float_t  total_HbbPhi;

        Float_t  total_Wjetscore;
        Float_t  total_Wjetmass;
        Float_t  total_Wjetmsoftdrop;
        Float_t  total_Wjettau21;
        Float_t  total_Wjettau32;
        Float_t  total_Wjettau1;
        Float_t  total_Wjettau2;
        Float_t  total_Wjettau3;
        Float_t  total_WjetPt;
        Float_t  total_WjetEta;
        Float_t  total_WjetPhi;

        Float_t  total_Zjetscore;
        Float_t  total_Zjetmass;
        Float_t  total_Zjetmsoftdrop;
        Float_t  total_Zjettau21;
        Float_t  total_Zjettau32;
        Float_t  total_Zjettau1;
        Float_t  total_Zjettau2;
        Float_t  total_Zjettau3;
        Float_t  total_ZjetPt;

        Float_t  total_secfatjetscore;
        Float_t  total_secfatjetmass;
        Float_t  total_secfatjetmsoftdrop;
        Float_t  total_secfatjettau21;
        Float_t  total_secfatjettau32;
        Float_t  total_secfatjettau1;
        Float_t  total_secfatjettau2;
        Float_t  total_secfatjettau3;
        Float_t  total_secfatjetPt;


        Float_t  total_n_medium_ak4jet;
        Float_t  total_n_loose_ak4jet;

        Float_t  total_Mlbmin;
        Float_t  total_Mlbminloose;
        Float_t  total_Mlbminmedium;

        Int_t    total_nbjet;
        Float_t  total_bjetpt[20];
        Int_t    total_bjetbtagCategory[20];
        Float_t  total_bjeteta[20];
        Float_t  total_bjetphi[20];
        Float_t  total_bjetmass[20];
        Float_t  total_bjetbtagDeepFlavB[20];
        Float_t  total_bjetgenJetIdx[20];
        Float_t  total_bjetbtagDeepB[20];
        Float_t  total_bjetpartonFlavour[20];
        Int_t  total_bjethadronFlavour[20];
        Float_t  total_bjetId[20];

        Float_t  total_VBSjet1eta;
        Float_t  total_VBSjet1phi;
        Float_t  total_VBSjet1pt;
        Float_t  total_VBSjet1mass;
        Float_t  total_VBSjet2eta;
        Float_t  total_VBSjet2phi;
        Float_t  total_VBSjet2pt;
        Float_t  total_VBSjet2mass;


        Float_t  total_leptonpt;
        Float_t  total_leptoneta;
        Float_t  total_leptonphi;
        Float_t  total_leptonmass;
        Float_t  total_VBSMjj;
        Float_t  total_VBSdetajj;
        Float_t  total_VBSdphijj;
        Float_t  total_VBSPtjj;
        Float_t  total_trans_E;
        Float_t  total_MET;
        Float_t  total_weight;
        Float_t  total_fabsweight;
        Float_t  total_divide;

        TH1D *Plot_fatjettag_elecpt;
        TH1D *Plot_fatjettag_eleceta;
        TH1D *Plot_fatjettag_elecphi;
        TH1D *Plot_fatjettag_elecmvascore;
        TH1D *Plot_fatjettag_muonpt;
        TH1D *Plot_fatjettag_muoneta;
        TH1D *Plot_fatjettag_muonphi;
        TH1D *Plot_fatjettag_muonmvascore;
        TH1D *Plot_fatjettag_fatjetHpt;
        TH1D *Plot_fatjettag_fatjetHscore;
        TH1D *Plot_fatjettag_fatjetHtau21;
        TH1D *Plot_fatjettag_fatjetHmass;
        TH1D *Plot_fatjettag_fatjetHmsoftdrop;
        TH1D *Plot_fatjettag_fatjetWpt;
        TH1D *Plot_fatjettag_fatjetWscore;
        TH1D *Plot_fatjettag_fatjetWtau21;
        TH1D *Plot_fatjettag_fatjetWmass;
        TH1D *Plot_fatjettag_fatjetWmsoftdrop;
        TH1D *Plot_tightak4tag_elecpt;
        TH1D *Plot_tightak4tag_eleceta;
        TH1D *Plot_tightak4tag_elecphi;
        TH1D *Plot_tightak4tag_elecmvascore;
        TH1D *Plot_tightak4tag_muonpt;
        TH1D *Plot_tightak4tag_muoneta;
        TH1D *Plot_tightak4tag_muonphi;
        TH1D *Plot_tightak4tag_muonmvascore;
        TH1D *Plot_tightak4tag_fatjetHpt;
        TH1D *Plot_tightak4tag_fatjetHscore;
        TH1D *Plot_tightak4tag_fatjetHtau21;
        TH1D *Plot_tightak4tag_fatjetHmass;
        TH1D *Plot_tightak4tag_fatjetHmsoftdrop;
        TH1D *Plot_tightak4tag_fatjetWpt;
        TH1D *Plot_tightak4tag_fatjetWscore;
        TH1D *Plot_tightak4tag_fatjetWtau21;
        TH1D *Plot_tightak4tag_fatjetWmass;
        TH1D *Plot_tightak4tag_fatjetWmsoftdrop;

        TH1D *Plot_tightak4tag_bjet1pt;
        TH1D *Plot_tightak4tag_bjet1eta;
        TH1D *Plot_tightak4tag_bjet1phi;
        TH1D *Plot_tightak4tag_bjet1mass;
        TH1D *Plot_tightak4tag_bjet1score;
        TH1D *Plot_tightak4tag_bjet2pt;
        TH1D *Plot_tightak4tag_bjet2eta;
        TH1D *Plot_tightak4tag_bjet2phi;
        TH1D *Plot_tightak4tag_bjet2mass;
        TH1D *Plot_tightak4tag_bjet2score;

         TH1D *Plot_bcategory;
        
        TH1D *Plot_tightak4tag_Mlb;
        TH1D *Plot_VBStag_elecpt;
        TH1D *Plot_VBStag_eleceta;
        TH1D *Plot_VBStag_elecphi;
        TH1D *Plot_VBStag_elecmvascore;
        TH1D *Plot_VBStag_muonpt;
        TH1D *Plot_VBStag_muoneta;
        TH1D *Plot_VBStag_muonphi;
        TH1D *Plot_VBStag_muonmvascore;
        TH1D *Plot_VBStag_fatjetHpt;
        TH1D *Plot_VBStag_fatjetHscore;
        TH1D *Plot_VBStag_fatjetHtau21;
        TH1D *Plot_VBStag_fatjetHmass;
        TH1D *Plot_VBStag_fatjetHmsoftdrop;
        TH1D *Plot_VBStag_fatjetWpt;
        TH1D *Plot_VBStag_fatjetWscore;
        TH1D *Plot_VBStag_fatjetWtau21;
        TH1D *Plot_VBStag_fatjetWmass;
        TH1D *Plot_VBStag_fatjetWmsoftdrop;
        TH1D *Plot_VBStag_vbsMjj;
        TH1D *Plot_VBStag_vbsdetajj;
        TH1D *Plot_VBStag_Mlb;
        TH1D *Plot_VBStag_ST;
        TH1D *Plot_VBStag_vbs1pt;
        TH1D *Plot_VBStag_vbs1eta;
        TH1D *Plot_VBStag_vbs1phi;
        TH1D *Plot_VBStag_vbs2pt;
        TH1D *Plot_VBStag_vbs2eta;
        TH1D *Plot_VBStag_vbs2phi;
        TH1D *Plot_VBStag_Mjj;
        TH1D *Plot_VBStag_detajj;


        TH1D *Plot_VBStag_bjet1pt;
        TH1D *Plot_VBStag_bjet1eta;
        TH1D *Plot_VBStag_bjet1phi;
        TH1D *Plot_VBStag_bjet1mass;
        TH1D *Plot_VBStag_bjet1score;
        TH1D *Plot_VBStag_bjet2pt;
        TH1D *Plot_VBStag_bjet2eta;
        TH1D *Plot_VBStag_bjet2phi;
        TH1D *Plot_VBStag_bjet2mass;
        TH1D *Plot_VBStag_bjet2score;








        void bookHists(const char* fName);
        void saveHists();
};
#endif
