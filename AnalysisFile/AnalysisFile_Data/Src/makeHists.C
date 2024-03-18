#include "makeHists.h"

#include "TH1D.h"
#include "TH2D.h"
#include "TH2F.h"
#include "TH3F.h"
#include "TFile.h"
#include "TProfile.h"
#include "TProfile2D.h"
#include "TMath.h"
#include "TTree.h"
#include <vector>


using namespace std;
void makeHists::bookHists(const char* fName){
    hf = new TFile(fName, "RECREATE");

    totaltree = new TTree("totalEvents","yifan events");


    totaltree->Branch("Hbbscore",&total_Hbbscore,"&Hbbscore/F");
    totaltree->Branch("Hbbmass",&total_Hbbmass,"&Hbbmass/F");
    totaltree->Branch("Hbbmsoftdrop",&total_Hbbmsoftdrop,"&Hbbmsoftdrop/F");
    totaltree->Branch("Hbbtau21",&total_Hbbtau21,"&Hbbtau21/F");
    totaltree->Branch("Hbbtau32",&total_Hbbtau32,"&Hbbtau32/F");
    totaltree->Branch("Hbbtau1",&total_Hbbtau1,"&Hbbtau1/F");
    totaltree->Branch("Hbbtau2",&total_Hbbtau2,"&Hbbtau2/F");
    totaltree->Branch("Hbbtau3",&total_Hbbtau3,"&Hbbtau3/F");
    totaltree->Branch("HbbPt",&total_HbbPt,"&HbbPt/F");
    totaltree->Branch("HbbEta",&total_HbbEta,"&HbbEta/F");
    totaltree->Branch("HbbPhi",&total_HbbPhi,"&HbbPhi/F");

    totaltree->Branch("Wjetscore",&total_Wjetscore,"&Wjetscore/F");
    totaltree->Branch("Wjetmass",&total_Wjetmass,"&Wjetmass/F");
    totaltree->Branch("Wjetmsoftdrop",&total_Wjetmsoftdrop,"&Wjetmsoftdrop/F");
    totaltree->Branch("Wjettau21",&total_Wjettau21,"&Wjettau21/F");
    totaltree->Branch("Wjettau32",&total_Wjettau32,"&Wjettau32/F");
    totaltree->Branch("Wjettau1",&total_Wjettau1,"&Wjettau1/F");
    totaltree->Branch("Wjettau2",&total_Wjettau2,"&Wjettau2/F");
    totaltree->Branch("Wjettau3",&total_Wjettau3,"&Wjettau3/F");
    totaltree->Branch("WjetPt",&total_WjetPt,"&WjetPt/F");
    totaltree->Branch("WjetEta",&total_WjetEta,"&WjetEta/F");
    totaltree->Branch("WjetPhi",&total_WjetPhi,"&WjetPhi/F");

    totaltree->Branch("Zjetscore",&total_Zjetscore,"&Zjetscore/F");
    totaltree->Branch("Zjetmass",&total_Zjetmass,"&Zjetmass/F");
    totaltree->Branch("Zjetmsoftdrop",&total_Zjetmsoftdrop,"&Zjetmsoftdrop/F");
    totaltree->Branch("Zjettau21",&total_Zjettau21,"&Zjettau21/F");
    totaltree->Branch("Zjettau32",&total_Zjettau32,"&Zjettau32/F");
    totaltree->Branch("Zjettau1",&total_Zjettau1,"&Zjettau1/F");
    totaltree->Branch("Zjettau2",&total_Zjettau2,"&Zjettau2/F");
    totaltree->Branch("Zjettau3",&total_Zjettau3,"&Zjettau3/F");
    totaltree->Branch("ZjetPt",&total_ZjetPt,"&ZjetPt/F");

    totaltree->Branch("secfatjetscore",&total_secfatjetscore,"&secfatjetscore/F");
    totaltree->Branch("secfatjetmass",&total_secfatjetmass,"&secfatjetmass/F");
    totaltree->Branch("secfatjetmsoftdrop",&total_secfatjetmsoftdrop,"&secfatjetmsoftdrop/F");
    totaltree->Branch("secfatjettau21",&total_secfatjettau21,"&secfatjettau21/F");
    totaltree->Branch("secfatjettau32",&total_secfatjettau32,"&secfatjettau32/F");
    totaltree->Branch("secfatjettau1",&total_secfatjettau1,"&secfatjettau1/F");
    totaltree->Branch("secfatjettau2",&total_secfatjettau2,"&secfatjettau2/F");
    totaltree->Branch("secfatjettau3",&total_secfatjettau3,"&secfatjettau3/F");
    totaltree->Branch("secfatjetPt",&total_secfatjetPt,"&secfatjetPt/F");



    totaltree->Branch("n_loose_ak4jet",&total_n_loose_ak4jet,"&n_loose_ak4jet/F");
    totaltree->Branch("n_medium_ak4jet",&total_n_medium_ak4jet,"&n_medium_ak4jet/F");
    totaltree->Branch("Mlbmin",&total_Mlbmin,"&Mlbmin/F");
    totaltree->Branch("Mlbminloose",&total_Mlbminloose,"&Mlbminloose/F");
    totaltree->Branch("Mlbminmedium",&total_Mlbminmedium,"&Mlbminmedium/F");

    totaltree->Branch("total_nbjet",&total_nbjet,"total_nbjet/I");
    totaltree->Branch("total_bjetpt",&total_bjetpt,"total_bjetpt[20]/F");
    totaltree->Branch("total_bjetbtagCategory",&total_bjetbtagCategory,"total_bjetbtagCategory[20]/I");

    totaltree->Branch("total_bjeteta",&total_bjeteta,"total_bjeteta[20]/F");
    totaltree->Branch("total_bjetphi",&total_bjetphi,"total_bjetphi[20]/F");
    totaltree->Branch("total_bjetmass",&total_bjetmass,"total_bjetmass[20]/F");
    totaltree->Branch("total_bjetbtagDeepFlavB",&total_bjetbtagDeepFlavB,"total_bjetbtagDeepFlavB[20]/F");
    totaltree->Branch("total_bjetgenJetIdx",&total_bjetgenJetIdx,"total_bjetgenJetIdx[20]/F");
    totaltree->Branch("total_bjetbtagDeepB",&total_bjetbtagDeepB,"total_bjetbtagDeepB[20]/F");
    totaltree->Branch("total_bjetpartonFlavour",&total_bjetpartonFlavour,"total_bjetpartonFlavour[20]/F");
    totaltree->Branch("total_bjethadronFlavour",&total_bjethadronFlavour,"total_bjethadronFlavour[20]/I");
    totaltree->Branch("total_bjetId",&total_bjetId,"total_bjetId[20]/F");

    totaltree->Branch("leptonpt",&total_leptonpt,"&leptonpt/F");
    totaltree->Branch("leptoneta",&total_leptoneta,"&leptoneta/F");
    totaltree->Branch("leptonphi",&total_leptonphi,"&leptonphi/F");
    totaltree->Branch("leptonmass",&total_leptonmass,"&leptonmass/F");
    
    totaltree->Branch("VBSjet2eta",&total_VBSjet2eta,"&VBSjet2eta/F");
    totaltree->Branch("VBSjet2phi",&total_VBSjet2phi,"&VBSjet2phi/F");
    totaltree->Branch("VBSjet2pt",&total_VBSjet2pt,"&VBSjet2pt/F");
    totaltree->Branch("VBSjet2mass",&total_VBSjet2mass,"&VBSjet2mass/F");

    totaltree->Branch("VBSjet1eta",&total_VBSjet1eta,"&VBSjet1eta/F");
    totaltree->Branch("VBSjet1phi",&total_VBSjet1phi,"&VBSjet1phi/F");
    totaltree->Branch("VBSjet1pt",&total_VBSjet1pt,"&VBSjet1pt/F");
    totaltree->Branch("VBSjet1mass",&total_VBSjet1mass,"&VBSjet1mass/F");
    totaltree->Branch("VBSMjj",&total_VBSMjj,"&VBSMjj/F");
    totaltree->Branch("VBSdetajj",&total_VBSdetajj,"&VBSdetajj/F");
    totaltree->Branch("VBSdphijj",&total_VBSdphijj,"&VBSdphijj/F");
    totaltree->Branch("VBSPtjj",&total_VBSPtjj,"&VBSPtjj/F");
    totaltree->Branch("trans_E",&total_trans_E,"&trans_E/F");
    totaltree->Branch("MET",&total_MET,"&MET/F");
    totaltree->Branch("weight",&total_weight,"&weight/F");
    totaltree->Branch("fabsweight",&total_fabsweight,"&fabsweight/F");
    totaltree->Branch("divide",&total_divide,"&divide/F");


    Plot_fatjettag_elecpt = new TH1D("Plot_fatjettag_elecpt","Plot_fatjettag_elecpt",1000,0,1000);
    Plot_fatjettag_eleceta = new TH1D("Plot_fatjettag_eleceta","Plot_fatjettag_eleceta",1000,-10,10);
    Plot_fatjettag_elecphi = new TH1D("Plot_fatjettag_elecphi","Plot_fatjettag_elecphi",1000,-10,10);
    Plot_fatjettag_elecmvascore = new TH1D("Plot_fatjettag_elecmvascore","Plot_fatjettag_elecmvascore",1000,-1,1);
    Plot_fatjettag_muonpt = new TH1D("Plot_fatjettag_muonpt","Plot_fatjettag_muonpt",1000,0,1000);
    Plot_fatjettag_muoneta = new TH1D("Plot_fatjettag_muoneta","Plot_fatjettag_muoneta",1000,-10,10);
    Plot_fatjettag_muonphi = new TH1D("Plot_fatjettag_muonphi","Plot_fatjettag_muonphi",1000,-10,10);
    Plot_fatjettag_muonmvascore = new TH1D("Plot_fatjettag_muonmvascore","Plot_fatjettag_muonmvascore",1000,-1,1);
    Plot_fatjettag_fatjetHpt = new TH1D("Plot_fatjettag_fatjetHpt","Plot_fatjettag_fatjetHpt",1000,0,1000);
    Plot_fatjettag_fatjetHscore = new TH1D("Plot_fatjettag_fatjetHscore","Plot_fatjettag_fatjetHscore",1000,0,1);
    Plot_fatjettag_fatjetHtau21 = new TH1D("Plot_fatjettag_fatjetHtau21","Plot_fatjettag_fatjetHtau21",1000,0,1);
    Plot_fatjettag_fatjetHmass = new TH1D("Plot_fatjettag_fatjetHmass","Plot_fatjettag_fatjetHmass",1000,0,1000);
    Plot_fatjettag_fatjetHmsoftdrop = new TH1D("Plot_fatjettag_fatjetHmsoftdrop","Plot_fatjettag_fatjetHmsoftdrop",1000,0,1000);
    Plot_fatjettag_fatjetWpt = new TH1D("Plot_fatjettag_fatjetWpt","Plot_fatjettag_fatjetWpt",1000,0,1000);
    Plot_fatjettag_fatjetWscore = new TH1D("Plot_fatjettag_fatjetWscore","Plot_fatjettag_fatjetWscore",1000,0,1);
    Plot_fatjettag_fatjetWtau21 = new TH1D("Plot_fatjettag_fatjetWtau21","Plot_fatjettag_fatjetWtau21",1000,0,1);
    Plot_fatjettag_fatjetWmass = new TH1D("Plot_fatjettag_fatjetWmass","Plot_fatjettag_fatjetWmass",1000,0,1000);
    Plot_fatjettag_fatjetWmsoftdrop = new TH1D("Plot_fatjettag_fatjetWmsoftdrop","Plot_fatjettag_fatjetWmsoftdrop",1000,0,1000);
    Plot_tightak4tag_elecpt = new TH1D("Plot_tightak4tag_elecpt","Plot_tightak4tag_elecpt",1000,0,1000);
    Plot_tightak4tag_eleceta = new TH1D("Plot_tightak4tag_eleceta","Plot_tightak4tag_eleceta",1000,-10,10);
    Plot_tightak4tag_elecphi = new TH1D("Plot_tightak4tag_elecphi","Plot_tightak4tag_elecphi",1000,-10,10);
    Plot_tightak4tag_elecmvascore = new TH1D("Plot_tightak4tag_elecmvascore","Plot_tightak4tag_elecmvascore",1000,-1,1);
    Plot_tightak4tag_muonpt = new TH1D("Plot_tightak4tag_muonpt","Plot_tightak4tag_muonpt",1000,0,1000);
    Plot_tightak4tag_muoneta = new TH1D("Plot_tightak4tag_muoneta","Plot_tightak4tag_muoneta",1000,-10,10);
    Plot_tightak4tag_muonphi = new TH1D("Plot_tightak4tag_muonphi","Plot_tightak4tag_muonphi",1000,-10,10);
    Plot_tightak4tag_muonmvascore = new TH1D("Plot_tightak4tag_muonmvascore","Plot_tightak4tag_muonmvascore",1000,-1,1);
    Plot_tightak4tag_fatjetHpt = new TH1D("Plot_tightak4tag_fatjetHpt","Plot_tightak4tag_fatjetHpt",1000,0,1000);
    Plot_tightak4tag_fatjetHscore = new TH1D("Plot_tightak4tag_fatjetHscore","Plot_tightak4tag_fatjetHscore",1000,0,1);
    Plot_tightak4tag_fatjetHtau21 = new TH1D("Plot_tightak4tag_fatjetHtau21","Plot_tightak4tag_fatjetHtau21",1000,0,1);
    Plot_tightak4tag_fatjetHmass = new TH1D("Plot_tightak4tag_fatjetHmass","Plot_tightak4tag_fatjetHmass",1000,0,1000);
    Plot_tightak4tag_fatjetHmsoftdrop = new TH1D("Plot_tightak4tag_fatjetHmsoftdrop","Plot_tightak4tag_fatjetHmsoftdrop",1000,0,1000);
    Plot_tightak4tag_fatjetWpt = new TH1D("Plot_tightak4tag_fatjetWpt","Plot_tightak4tag_fatjetWpt",1000,0,1000);
    Plot_tightak4tag_fatjetWscore = new TH1D("Plot_tightak4tag_fatjetWscore","Plot_tightak4tag_fatjetWscore",1000,0,1);
    Plot_tightak4tag_fatjetWtau21 = new TH1D("Plot_tightak4tag_fatjetWtau21","Plot_tightak4tag_fatjetWtau21",1000,0,1);
    Plot_tightak4tag_fatjetWmass = new TH1D("Plot_tightak4tag_fatjetWmass","Plot_tightak4tag_fatjetWmass",1000,0,1000);
    Plot_tightak4tag_fatjetWmsoftdrop = new TH1D("Plot_tightak4tag_fatjetWmsoftdrop","Plot_tightak4tag_fatjetWmsoftdrop",1000,0,1000);
    Plot_tightak4tag_Mlb = new TH1D("Plot_tightak4tag_Mlb","Plot_tightak4tag_Mlb",1000,0,1000);


    Plot_tightak4tag_bjet1pt = new TH1D("Plot_tightak4tag_bjet1pt","Plot_tightak4tag_bjet1pt",1000,0,1000);
    Plot_tightak4tag_bjet1eta = new TH1D("Plot_tightak4tag_bjet1eta","Plot_tightak4tag_bjet1eta",1000,-10,10);
    Plot_tightak4tag_bjet1phi = new TH1D("Plot_tightak4tag_bjet1phi","Plot_tightak4tag_bjet1phi",1000,-10,10);
    Plot_tightak4tag_bjet1mass = new TH1D("Plot_tightak4tag_bjet1mass","Plot_tightak4tag_bjet1mass",1000,0,1000);
    Plot_tightak4tag_bjet1score = new TH1D("Plot_tightak4tag_bjet1score","Plot_tightak4tag_bjet1score",1000,0,1);
    Plot_tightak4tag_bjet2pt = new TH1D("Plot_tightak4tag_bjet2pt","Plot_tightak4tag_bjet2pt",1000,0,1000);
    Plot_tightak4tag_bjet2eta = new TH1D("Plot_tightak4tag_bjet2eta","Plot_tightak4tag_bjet2eta",1000,-10,10);
    Plot_tightak4tag_bjet2phi = new TH1D("Plot_tightak4tag_bjet2phi","Plot_tightak4tag_bjet2phi",1000,-10,10);
    Plot_tightak4tag_bjet2mass = new TH1D("Plot_tightak4tag_bjet2mass","Plot_tightak4tag_bjet2mass",1000,0,1000);
    Plot_tightak4tag_bjet2score = new TH1D("Plot_tightak4tag_bjet2score","Plot_tightak4tag_bjet2score",1000,0,1);


    Plot_VBStag_elecpt = new TH1D("Plot_VBStag_elecpt","Plot_VBStag_elecpt",1000,0,1000);
    Plot_VBStag_eleceta = new TH1D("Plot_VBStag_eleceta","Plot_VBStag_eleceta",1000,-10,10);
    Plot_VBStag_elecphi = new TH1D("Plot_VBStag_elecphi","Plot_VBStag_elecphi",1000,-10,10);
    Plot_VBStag_elecmvascore = new TH1D("Plot_VBStag_elecmvascore","Plot_VBStag_elecmvascore",1000,-1,1);
    Plot_VBStag_muonpt = new TH1D("Plot_VBStag_muonpt","Plot_VBStag_muonpt",1000,0,1000);
    Plot_VBStag_muoneta = new TH1D("Plot_VBStag_muoneta","Plot_VBStag_muoneta",1000,-10,10);
    Plot_VBStag_muonphi = new TH1D("Plot_VBStag_muonphi","Plot_VBStag_muonphi",1000,-10,10);
    Plot_VBStag_muonmvascore = new TH1D("Plot_VBStag_muonmvascore","Plot_VBStag_muonmvascore",1000,-1,1);
    Plot_VBStag_fatjetHpt = new TH1D("Plot_VBStag_fatjetHpt","Plot_VBStag_fatjetHpt",1000,0,1000);
    Plot_VBStag_fatjetHscore = new TH1D("Plot_VBStag_fatjetHscore","Plot_VBStag_fatjetHscore",1000,0,1);
    Plot_VBStag_fatjetHtau21 = new TH1D("Plot_VBStag_fatjetHtau21","Plot_VBStag_fatjetHtau21",1000,0,1);
    Plot_VBStag_fatjetHmass = new TH1D("Plot_VBStag_fatjetHmass","Plot_VBStag_fatjetHmass",1000,0,1000);
    Plot_VBStag_fatjetHmsoftdrop = new TH1D("Plot_VBStag_fatjetHmsoftdrop","Plot_VBStag_fatjetHmsoftdrop",1000,0,1000);
    Plot_VBStag_fatjetWpt = new TH1D("Plot_VBStag_fatjetWpt","Plot_VBStag_fatjetWpt",1000,0,1000);
    Plot_VBStag_fatjetWscore = new TH1D("Plot_VBStag_fatjetWscore","Plot_VBStag_fatjetWscore",1000,0,1);
    Plot_VBStag_fatjetWtau21 = new TH1D("Plot_VBStag_fatjetWtau21","Plot_VBStag_fatjetWtau21",1000,0,1);
    Plot_VBStag_fatjetWmass = new TH1D("Plot_VBStag_fatjetWmass","Plot_VBStag_fatjetWmass",1000,0,1000);
    Plot_VBStag_fatjetWmsoftdrop = new TH1D("Plot_VBStag_fatjetWmsoftdrop","Plot_VBStag_fatjetWmsoftdrop",1000,0,1000);
    Plot_VBStag_vbsMjj = new TH1D("Plot_VBStag_vbsMjj","Plot_VBStag_vbsMjj",10000,0,10000);
    Plot_VBStag_vbsdetajj = new TH1D("Plot_VBStag_vbsdetajj","Plot_VBStag_vbsdetajj",1000,0,10);
    Plot_VBStag_Mlb = new TH1D("Plot_VBStag_Mlb","Plot_VBStag_Mlb",1000,0,1000);
    Plot_VBStag_ST = new TH1D("Plot_VBStag_ST","Plot_VBStag_ST",1000,0,1000);
    Plot_VBStag_vbs1pt = new TH1D("Plot_VBStag_vbs1pt","Plot_VBStag_vbs1pt",1000,0,1000);
    Plot_VBStag_vbs1eta = new TH1D("Plot_VBStag_vbs1eta","Plot_VBStag_vbs1eta",1000,-10,10);
    Plot_VBStag_vbs1phi = new TH1D("Plot_VBStag_vbs1phi","Plot_VBStag_vbs1phi",1000,-10,10);
    Plot_VBStag_vbs2pt = new TH1D("Plot_VBStag_vbs2pt","Plot_VBStag_vbs2pt",1000,0,1000);
    Plot_VBStag_vbs2eta = new TH1D("Plot_VBStag_vbs2eta","Plot_VBStag_vbs2eta",1000,-10,10);
    Plot_VBStag_vbs2phi = new TH1D("Plot_VBStag_vbs2phi","Plot_VBStag_vbs2phi",1000,-10,10);
    Plot_VBStag_Mjj = new TH1D("Plot_VBStag_Mjj","Plot_VBStag_Mjj",10000,0,10000);
    Plot_VBStag_detajj = new TH1D("Plot_VBStag_detajj","Plot_VBStag_detajj",1000,-10,10);


    Plot_VBStag_bjet1pt = new TH1D("Plot_VBStag_bjet1pt","Plot_VBStag_bjet1pt",1000,0,1000);
    Plot_VBStag_bjet1eta = new TH1D("Plot_VBStag_bjet1eta","Plot_VBStag_bjet1eta",1000,-10,10);
    Plot_VBStag_bjet1phi = new TH1D("Plot_VBStag_bjet1phi","Plot_VBStag_bjet1phi",1000,-10,10);
    Plot_VBStag_bjet1mass = new TH1D("Plot_VBStag_bjet1mass","Plot_VBStag_bjet1mass",1000,0,1000);
    Plot_VBStag_bjet1score = new TH1D("Plot_VBStag_bjet1score","Plot_VBStag_bjet1score",1000,0,1);
    Plot_VBStag_bjet2pt = new TH1D("Plot_VBStag_bjet2pt","Plot_VBStag_bjet2pt",1000,0,1000);
    Plot_VBStag_bjet2eta = new TH1D("Plot_VBStag_bjet2eta","Plot_VBStag_bjet2eta",1000,-10,10);
    Plot_VBStag_bjet2phi = new TH1D("Plot_VBStag_bjet2phi","Plot_VBStag_bjet2phi",1000,-10,10);
    Plot_VBStag_bjet2mass = new TH1D("Plot_VBStag_bjet2mass","Plot_VBStag_bjet2mass",1000,0,1000);
    Plot_VBStag_bjet2score = new TH1D("Plot_VBStag_bjet2score","Plot_VBStag_bjet2score",1000,0,1);

    
    Plot_bcategory = new TH1D("Plot_bcategory","Plot_bcategory",3,0,3);
    Plot_bcategory->Sumw2();

    Plot_fatjettag_elecpt->Sumw2();
    Plot_fatjettag_eleceta->Sumw2();
    Plot_fatjettag_elecphi->Sumw2();
    Plot_fatjettag_elecmvascore->Sumw2();
    Plot_fatjettag_muonpt->Sumw2();
    Plot_fatjettag_muoneta->Sumw2();
    Plot_fatjettag_muonphi->Sumw2();
    Plot_fatjettag_muonmvascore->Sumw2();
    Plot_fatjettag_fatjetHpt->Sumw2();
    Plot_fatjettag_fatjetHscore->Sumw2();
    Plot_fatjettag_fatjetHtau21->Sumw2();
    Plot_fatjettag_fatjetHmass->Sumw2();
    Plot_fatjettag_fatjetHmsoftdrop->Sumw2();
    Plot_fatjettag_fatjetWpt->Sumw2();
    Plot_fatjettag_fatjetWscore->Sumw2();
    Plot_fatjettag_fatjetWtau21->Sumw2();
    Plot_fatjettag_fatjetWmass->Sumw2();
    Plot_fatjettag_fatjetWmsoftdrop->Sumw2();
    Plot_tightak4tag_elecpt->Sumw2();
    Plot_tightak4tag_eleceta->Sumw2();
    Plot_tightak4tag_elecphi->Sumw2();
    Plot_tightak4tag_elecmvascore->Sumw2();
    Plot_tightak4tag_muonpt->Sumw2();
    Plot_tightak4tag_muoneta->Sumw2();
    Plot_tightak4tag_muonphi->Sumw2();
    Plot_tightak4tag_muonmvascore->Sumw2();
    Plot_tightak4tag_fatjetHpt->Sumw2();
    Plot_tightak4tag_fatjetHscore->Sumw2();
    Plot_tightak4tag_fatjetHtau21->Sumw2();
    Plot_tightak4tag_fatjetHmass->Sumw2();
    Plot_tightak4tag_fatjetHmsoftdrop->Sumw2();
    Plot_tightak4tag_fatjetWpt->Sumw2();
    Plot_tightak4tag_fatjetWscore->Sumw2();
    Plot_tightak4tag_fatjetWtau21->Sumw2();
    Plot_tightak4tag_fatjetWmass->Sumw2();
    Plot_tightak4tag_fatjetWmsoftdrop->Sumw2();
    Plot_tightak4tag_bjet1pt->Sumw2();
    Plot_tightak4tag_bjet1eta->Sumw2();
    Plot_tightak4tag_bjet1phi->Sumw2();
    Plot_tightak4tag_bjet1mass->Sumw2();
    Plot_tightak4tag_bjet1score->Sumw2();
    Plot_tightak4tag_bjet2pt->Sumw2();
    Plot_tightak4tag_bjet2eta->Sumw2();
    Plot_tightak4tag_bjet2phi->Sumw2();
    Plot_tightak4tag_bjet2mass->Sumw2();
    Plot_tightak4tag_bjet2score->Sumw2();

    Plot_tightak4tag_Mlb->Sumw2();
    Plot_VBStag_elecpt->Sumw2();
    Plot_VBStag_eleceta->Sumw2();
    Plot_VBStag_elecphi->Sumw2();
    Plot_VBStag_elecmvascore->Sumw2();
    Plot_VBStag_muonpt->Sumw2();
    Plot_VBStag_muoneta->Sumw2();
    Plot_VBStag_muonphi->Sumw2();
    Plot_VBStag_muonmvascore->Sumw2();
    Plot_VBStag_fatjetHpt->Sumw2();
    Plot_VBStag_fatjetHscore->Sumw2();
    Plot_VBStag_fatjetHtau21->Sumw2();
    Plot_VBStag_fatjetHmass->Sumw2();
    Plot_VBStag_fatjetHmsoftdrop->Sumw2();
    Plot_VBStag_fatjetWpt->Sumw2();
    Plot_VBStag_fatjetWscore->Sumw2();
    Plot_VBStag_fatjetWtau21->Sumw2();
    Plot_VBStag_fatjetWmass->Sumw2();
    Plot_VBStag_fatjetWmsoftdrop->Sumw2();
    Plot_VBStag_vbsMjj->Sumw2();
    Plot_VBStag_vbsdetajj->Sumw2();
    Plot_VBStag_Mlb->Sumw2();
    Plot_VBStag_ST->Sumw2();
    Plot_VBStag_vbs1pt->Sumw2();
    Plot_VBStag_vbs1eta->Sumw2();
    Plot_VBStag_vbs1phi->Sumw2();
    Plot_VBStag_vbs2pt->Sumw2();
    Plot_VBStag_vbs2eta->Sumw2();
    Plot_VBStag_vbs2phi->Sumw2();
    Plot_VBStag_Mjj->Sumw2();
    Plot_VBStag_detajj->Sumw2();
    Plot_VBStag_bjet1pt->Sumw2();
    Plot_VBStag_bjet1eta->Sumw2();
    Plot_VBStag_bjet1phi->Sumw2();
    Plot_VBStag_bjet1mass->Sumw2();
    Plot_VBStag_bjet1score->Sumw2();
    Plot_VBStag_bjet2pt->Sumw2();
    Plot_VBStag_bjet2eta->Sumw2();
    Plot_VBStag_bjet2phi->Sumw2();
    Plot_VBStag_bjet2mass->Sumw2();
    Plot_VBStag_bjet2score->Sumw2();





}

void makeHists::saveHists(){
    hf->cd();
    hf->Write();
    cout<<"root file save"<<endl;
    hf->Close();
}
