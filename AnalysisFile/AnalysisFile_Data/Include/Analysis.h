#ifndef ANALYSIS_HEADFILE
#define ANALYSIS_HEADFILE

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TMath.h"
#include "TH1F.h"
#include <iostream>
#include <vector>
#include "makeHists.h"
#include <fstream>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "TLorentzVector.h"
#include "TH3F.h"
#include <TRandom3.h>
#include <TMinuit.h>
#include <TApplication.h>
#include "TEnv.h"
#include <TComplex.h>
#include "TH2D.h"
#include "btagsf/BTagCalibrationStandalone.h"

#include "TMVA/Tools.h"
#include "TMVA/Reader.h"
#include "TMVA/MethodCuts.h"


using namespace std;
class Analysis{
    public:
        TTree *fChain;


        UInt_t         Rrun;
        UInt_t         RluminosityBlock;
        ULong64_t      Revent;
        Float_t        RGenerator_weight;

        Bool_t         RFlag_goodVertices;
        Bool_t         RFlag_globalSuperTightHalo2016Filter;
        Bool_t         RFlag_HBHENoiseFilter;
        Bool_t         RFlag_HBHENoiseIsoFilter;
        Bool_t         RFlag_EcalDeadCellTriggerPrimitiveFilter;
        Bool_t         RFlag_BadPFMuonFilter;
        Bool_t         RFlag_eeBadScFilter;
        Bool_t         RFlag_BadPFMuonDzFilter;
        Bool_t         RFlag_ecalBadCalibFilter;

        Float_t        RMET_pt;

        UInt_t         RnGenPart;
        UInt_t         RnElectron;
        UInt_t         RnMuon;
        UInt_t         RnTau;
        UInt_t         RnJet;
        UInt_t         RnFatJet;

        Float_t        RPileup_nTrueInt;

        Float_t        RLHEPart_pt[10];
        Float_t        RLHEPart_eta[10];
        Float_t        RLHEPart_phi[10];
        Float_t        RLHEPart_mass[10];
        Int_t          RLHEPart_pdgId[10];

        Bool_t         RElectron_convVeto[20];
        Int_t          RElectron_charge[20];
        Float_t        RElectron_deltaEtaSC[20];
        Float_t        RElectron_dxy[20];
        Float_t        RElectron_dz[20];
        Float_t        RElectron_eInvMinusPInv[20];
        Float_t        RElectron_eta[20];
        Float_t        RElectron_hoe[20];
        Float_t        RElectron_jetPtRelv2[20];
        Float_t        RElectron_jetRelIso[20];
        UChar_t        RElectron_lostHits[20];
        Float_t        RElectron_mass[20];
        Float_t        RElectron_miniPFRelIso_all[20];
        Float_t        RElectron_mvaFall17V2noIso[20];
        Float_t        RElectron_pfRelIso03_all[20];
        Float_t        RElectron_pfRelIso03_chg[20];
        Bool_t         RElectron_mvaFall17V2noIso_WPL[20];
        Bool_t         RElectron_mvaFall17V2noIso_WP80[20];
        Float_t        RElectron_phi[20];
        Float_t        RElectron_pt[20];
        Float_t        RElectron_sieie[20];
        Float_t        RElectron_sip3d[20];
        Int_t          RElectron_tightCharge[20];
        UChar_t        RElectron_genPartFlav[20];
        Float_t        RElectron_mvaTTH[20];
        Float_t        RElectron_mvaTTHUL[20];
        //vector<float>  *RElectron_mvaTTHUL;
        Int_t          RElectron_jetIdx[20];

        Int_t          RMuon_jetIdx[40];
        Float_t        RMuon_pt[40];
        Float_t        RMuon_eta[40];
        Float_t        RMuon_dxy[40];
        Float_t        RMuon_dz[40];
        Float_t        RMuon_sip3d[40];
        Float_t        RMuon_ptErr[40];
        Float_t        RMuon_phi[40];
        Float_t        RMuon_mass[40];
        Float_t        RMuon_jetPtRelv2[40];
        Float_t        RMuon_jetRelIso[40];
        Bool_t         RMuon_looseId[40];
        Bool_t         RMuon_mediumId[40];
        Float_t        RMuon_pfRelIso03_all[40];
        Float_t        RMuon_miniPFRelIso_all[40];
        Int_t          RMuon_charge[40];
        UChar_t        RMuon_genPartFlav[40];
        Float_t        RMuon_mvaTTH[40];
        Float_t        RMuon_mvaTTHUL[40];
        //vector<float>  *RMuon_mvaTTHUL;

        Float_t        RTau_pt[20];
        Float_t        RTau_dz[20];
        Float_t        RTau_eta[20];
        Float_t        RTau_phi[20];
        Float_t        RTau_mass[20];
        Int_t          RTau_jetIdx[20];
        Int_t          RTau_charge[20];
        UChar_t        RTau_idDeepTau2017v2p1VSe[20];
        UChar_t        RTau_idDeepTau2017v2p1VSmu[20];
        UChar_t        RTau_idDeepTau2017v2p1VSjet[20];
        Int_t          RTau_decayMode[20];

        Float_t        RJet_pt[80];
        Float_t        RJet_eta[80];
        Float_t        RJet_phi[80];
        Float_t        RJet_mass[80];
        Float_t        RJet_btagDeepFlavB[80];
        Int_t          RJet_genJetIdx[80];
        Float_t        RJet_btagDeepB[80];
        Int_t          RJet_partonFlavour[80];
        Int_t          RJet_hadronFlavour[80];
        Int_t          RJet_jetId[80];
        Int_t          RJet_puId[80];

        Float_t        RFatJet_pt[50];
        Float_t        RFatJet_eta[50];
        Float_t        RFatJet_phi[50];
        Float_t        RFatJet_mass[50];
        Float_t        RFatJet_particleNet_mass[50];
        Float_t        RFatJet_msoftdrop[50];
        Float_t        RFatJet_btagDDBvLV2[50];
        Float_t        RFatJet_deepTagMD_HbbvsQCD[50];
        Float_t        RFatJet_deepTagMD_WvsQCD[50];
        Float_t        RFatJet_particleNet_HbbvsQCD[50];
        Float_t        RFatJet_particleNet_WvsQCD[50];
        Float_t        RFatJet_particleNet_ZvsQCD[50];
        Float_t        RFatJet_particleNetMD_QCD[50];
        Float_t        RFatJet_particleNetMD_Xbb[50];
        Float_t        RFatJet_particleNetMD_Xcc[50];
        Float_t        RFatJet_particleNetMD_Xqq[50];
        Float_t        RFatJet_tau1[50];
        Float_t        RFatJet_tau2[50];
        Float_t        RFatJet_tau3[50];
        Int_t          RFatJet_jetId[50];

        Int_t          RGenPart_genPartIdxMother[500];
        Int_t          RGenPart_status[500];
        Int_t          RGenPart_pdgId[500];
        Float_t        RGenPart_eta[500];
        Float_t        RGenPart_phi[500];
        Float_t        RGenPart_pt[500];
        Float_t        RGenPart_mass[500];

        Bool_t         RHLT_IsoMu18;
        Bool_t         ifExistHLT_IsoMu18;
        Bool_t         RHLT_IsoMu20;
        Bool_t         ifExistHLT_IsoMu20;
        Bool_t         RHLT_IsoMu22;
        Bool_t         ifExistHLT_IsoMu22;
        Bool_t         RHLT_IsoMu24;
        Bool_t         ifExistHLT_IsoMu24;
        Bool_t         RHLT_IsoMu27;
        Bool_t         ifExistHLT_IsoMu27;
        Bool_t         RHLT_IsoTkMu18;
        Bool_t         ifExistHLT_IsoTkMu18;
        Bool_t         RHLT_IsoTkMu20;
        Bool_t         ifExistHLT_IsoTkMu20;
        Bool_t         RHLT_IsoTkMu22;
        Bool_t         ifExistHLT_IsoTkMu22;
        Bool_t         RHLT_IsoTkMu24;
        Bool_t         ifExistHLT_IsoTkMu24;
        Bool_t         RHLT_IsoTkMu27;
        Bool_t         ifExistHLT_IsoTkMu27;
        Bool_t         RHLT_Ele25_WPTight_Gsf;
        Bool_t         ifExistHLT_Ele25_WPTight_Gsf;
        Bool_t         RHLT_Ele25_eta2p1_WPTight_Gsf;
        Bool_t         ifExistHLT_Ele25_eta2p1_WPTight_Gsf;
        Bool_t         RHLT_Ele27_WPTight_Gsf;
        Bool_t         ifExistHLT_Ele27_WPTight_Gsf;
        Bool_t         RHLT_Ele27_eta2p1_WPTight_Gsf;
        Bool_t         ifExistHLT_Ele27_eta2p1_WPTight_Gsf;
        Bool_t         RHLT_Ele32_eta2p1_WPTight_Gsf;
        Bool_t         ifExistHLT_Ele32_eta2p1_WPTight_Gsf;
        Bool_t         RHLT_Ele32_WPTight_Gsf;
        Bool_t         ifExistHLT_Ele32_WPTight_Gsf;
        Bool_t         RHLT_Ele35_WPTight_Gsf;
        Bool_t         ifExistHLT_Ele35_WPTight_Gsf;
        Bool_t         RHLT_Ele38_WPTight_Gsf;
        Bool_t         ifExistHLT_Ele38_WPTight_Gsf;
        Bool_t         RHLT_Ele40_WPTight_Gsf;
        Bool_t         ifExistHLT_Ele40_WPTight_Gsf;
        Bool_t         RHLT_Ele32_WPTight_Gsf_L1DoubleEG;
        Bool_t         ifExistHLT_Ele32_WPTight_Gsf_L1DoubleEG;


        //****************Statistic variables****************//
        //

        Double_t event_number_raw;
        Double_t weighted_number_total;
        Double_t weighted_number_flag;
        Double_t weighted_number_beforetrigger;
        Double_t weighted_number_leptonptcut0;
        Double_t weighted_number_leptonptcut1;
        Double_t weighted_number_leptonptcut2;
        Double_t weighted_number_fatbtag_t;
        Double_t weighted_number_WZjet;
        Double_t weighted_number_Wjet;
        Double_t weighted_number_Zjet;
        Double_t weighted_number_removeak4b ;
        Double_t weighted_number_vbsjet;
        Double_t weighted_number_ST;
        Double_t weighted_number_SameWZ;
        Double_t weighted_number_pe;
        Double_t weighted_number_me;
        Double_t weighted_number_pm;
        Double_t weighted_number_mm;

        Double_t event_error_raw;
        Double_t weighted_error_total;
        Double_t weighted_error_flag;
        Double_t weighted_error_beforetrigger;
        Double_t weighted_error_leptonptcut0;
        Double_t weighted_error_leptonptcut1;
        Double_t weighted_error_leptonptcut2;
        Double_t weighted_error_fatbtag_t;
        Double_t weighted_error_WZjet;
        Double_t weighted_error_Wjet;
        Double_t weighted_error_Zjet;
        Double_t weighted_error_removeak4b;
        Double_t weighted_error_vbsjet;
        Double_t weighted_error_ST;
        Double_t weighted_error_SameWZ;
        Double_t weighted_error_pe;
        Double_t weighted_error_me;
        Double_t weighted_error_pm;
        Double_t weighted_error_mm;




        Int_t    yearNumber;

        double loose_deepflavor_bscore;
        double medium_deepflavor_bscore;
        double tight_deepflavor_bscore;

        bool   is_pd_ee;
        bool   is_pd_em;
        bool   is_pd_mm;
        bool   is_pd_se;
        bool   is_pd_sm;

        double year_lumi;

        bool   isData;
        bool   isEWK;
        

        TH1D *P_Pileupreweight;
        TH1D *P_Pileupreweight_up;
        TH1D *P_Pileupreweight_down;
        TH1D *P_EWKReweight;


	BTagCalibration* btagCalib;// = new BTagCalibration("DeepJet", "./btagsf/csv/DeepJet_2016LegacySF_V1.csv");
        BTagCalibrationReader* btagReaderTight;
        BTagCalibrationReader* btagReaderLoose;

        TRandom3 *myrandom;

        TH2D *Muon_Eff_LooseID;
        TH2D *Muon_EGM2D;
        TH2D *Elec_Eff_LooseID;
        TH2D *Elec_EGM2D;


        //*************Analysis func******************//
        Analysis(const char* ifileName, const char* TypeName, const char *yearname);
        virtual ~Analysis();
        virtual void  Initial(const char* RootName, int RootNumber, const char *yearName);
//        virtual void  Eventgetentry(int Evtnumber);
        virtual void  Loop(const char* TypeName, const char *yearName);
        virtual void  End(int RootNumber);
        virtual void  Finish(int RootNumber);
        virtual void  Output();
        virtual void  OutputTable(const char *yearName);

        //**************Electron Selection****************//
        virtual bool electronIDVBS(int iel, int id_level);
        virtual bool isTriggersafeNoIso(int iel);

        //*****************Muon Selection*****************//
        virtual bool muonIDVBS(int imu, int id_level);

        //*****************Tau  Selection*****************//
        virtual bool tauIDVBS(int ita, int id_level);
        virtual bool passesDeepTau(int ita, int id, string type);

        //******************Isolation func**************//
        virtual float getPtRel(int id, int idx);
        virtual float getPtRatio(int id, int idx);
        virtual float computePtRel(const TLorentzVector& lepp4, const TLorentzVector& jetp4);
        virtual bool passMultiIso(int id, int idx, float cutMiniIso, float cutPtRatio, float cutPtRel);

        makeHists *myhists;
        bool ifsavehists;

        //*****************BDT input *******************//
/*        TMVA::Reader *Hbbreader;// = new TMVA::Reader( "!Color:!Silent" );
        Float_t Hbbscore;
        Float_t HbbscoreMD;
        Float_t Hbbmass;
        Float_t Hbbmsoftdrop;
        Float_t Hbbtau21;
        Float_t Hbbtau32;
        Float_t Hbbtau1;
        Float_t Hbbtau2;
        Float_t Hbbtau3;

        TMVA::Reader *Wjetreader;// = new TMVA::Reader( "!Color:!Silent" );
        Float_t Wjetscore;
        Float_t WjetscoreMD;
        Float_t Wjetmass;
        Float_t Wjetmsoftdrop;
        Float_t Wjettau21;
        Float_t Wjettau32;
        Float_t Wjettau1;
        Float_t Wjettau2;
        Float_t Wjettau3;
*/
};
#endif


#ifdef ANALYSIS_SOURCE
Analysis::Analysis(const char* ifileName, const char* TypeName, const char* yearName){
    myhists = new makeHists();
    TString histoname = (TString)TypeName + "_results.root";
    myhists->bookHists(histoname);
    ifsavehists = true;
/*
    Hbbreader = new TMVA::Reader( "!Color:!Silent" );
    Hbbreader->AddVariable("Hbbscore",&Hbbscore);
//    Hbbreader->AddVariable("HbbscoreMD",&HbbscoreMD);
    Hbbreader->AddVariable("Hbbmass",&Hbbmass);
//    Hbbreader->AddVariable("Hbbmsoftdrop",&Hbbmsoftdrop);
//    Hbbreader->AddVariable("Hbbtau21",&Hbbtau21);
//    Hbbreader->AddVariable("Hbbtau32",&Hbbtau32);
//    Hbbreader->AddVariable("Hbbtau1",&Hbbtau1);
//    Hbbreader->AddVariable("Hbbtau2",&Hbbtau2);
//    Hbbreader->AddVariable("Hbbtau3",&Hbbtau3);
    Hbbreader->BookMVA("BDT","Include/ak8jetBDT/TMVAClassification_Hbb_BDT.weights.xml");

    Wjetreader = new TMVA::Reader( "!Color:!Silent" );
    Wjetreader->AddVariable("Hbbscore",&Wjetscore);
//    Wjetreader->AddVariable("HbbscoreMD",&WjetscoreMD);
    Wjetreader->AddVariable("Hbbmass",&Wjetmass);
    Wjetreader->AddVariable("Hbbmsoftdrop",&Wjetmsoftdrop);
    Wjetreader->AddVariable("Hbbtau21",&Wjettau21);
    Wjetreader->AddVariable("Hbbtau32",&Wjettau32);
    Wjetreader->AddVariable("Hbbtau1",&Wjettau1);
    Wjetreader->AddVariable("Hbbtau2",&Wjettau2);
    Wjetreader->AddVariable("Hbbtau3",&Wjettau3);
    Wjetreader->BookMVA("BDT","Include/ak8jetBDT/TMVAClassification_Wjet_BDT.weights.xml");
*/
    myrandom = new TRandom3(1);

    event_number_raw;
    weighted_number_total=0;
    weighted_number_flag=0;
    weighted_number_beforetrigger=0;
    weighted_number_leptonptcut0=0;
    weighted_number_leptonptcut1=0;
    weighted_number_leptonptcut2=0;
    weighted_number_fatbtag_t=0;
    weighted_number_WZjet=0;
    weighted_number_Wjet=0;
    weighted_number_Zjet=0;
    weighted_number_removeak4b=0;
    weighted_number_vbsjet=0;
    weighted_number_ST=0;
    weighted_number_SameWZ=0;
    weighted_number_pe=0;
    weighted_number_me=0;
    weighted_number_pm=0;
    weighted_number_mm=0;

    event_error_raw=0;
    weighted_error_total=0;
    weighted_error_flag=0;
    weighted_error_beforetrigger=0;
    weighted_error_leptonptcut0=0;
    weighted_error_leptonptcut1=0;
    weighted_error_leptonptcut2=0;
    weighted_error_fatbtag_t=0;
    weighted_error_WZjet=0;
    weighted_error_Wjet=0;
    weighted_error_Zjet=0;
    weighted_error_removeak4b=0;
    weighted_error_vbsjet=0;
    weighted_error_ST=0;
    weighted_error_SameWZ=0;
    weighted_error_pe=0;
    weighted_error_me=0;
    weighted_error_pm=0;
    weighted_error_mm=0;


    std::string InputYear(yearName);
    bool if2016 = ((InputYear.find("2016",0)) != string::npos && (InputYear.find("2016APV",0)) == string::npos);
    bool if2016APV = ((InputYear.find("2016APV",0)) != string::npos);
    bool if2017 = ((InputYear.find("2017",0)) != string::npos);
    bool if2018 = ((InputYear.find("2018",0)) != string::npos);

    TFile *file_Muon_Eff_ID = new TFile("./Include/ttHSF/MuonSFs/MuonEff.root");
    if(if2016APV){
        Muon_Eff_LooseID = (TH2D *)file_Muon_Eff_ID->Get("plot_2016HIPM_Muon_Eff_LooseID_tracker");
        TFile *file_Muon_EGM2D = new TFile("./Include/ttHSF/MuonSFs/egammaEffi2016APV_iso_EGM2D.root");
        Muon_EGM2D = (TH2D *)file_Muon_EGM2D->Get("EGamma_SF2D");
        TFile *file_Elec_Eff_LooseID = new TFile("./Include/ttHSF/ElecSFs/egammaEffi2016APV_recoToloose_EGM2D.root");
        Elec_Eff_LooseID = (TH2D *)file_Elec_Eff_LooseID->Get("EGamma_SF2D");
        TFile *file_Elec_EGM2D = new TFile("./Include/ttHSF/ElecSFs/egammaEffi2016APV_iso_EGM2D.root");
        Elec_EGM2D = (TH2D *)file_Elec_EGM2D->Get("EGamma_SF2D");
    }else if(if2016){
        Muon_Eff_LooseID = (TH2D *)file_Muon_Eff_ID->Get("plot_2016_Muon_Eff_LooseID_tracker");
        TFile *file_Muon_EGM2D = new TFile("./Include/ttHSF/MuonSFs/egammaEffi2016_iso_EGM2D.root");
        Muon_EGM2D = (TH2D *)file_Muon_EGM2D->Get("EGamma_SF2D");
        TFile *file_Elec_Eff_LooseID = new TFile("./Include/ttHSF/ElecSFs/egammaEffi2016_recoToloose_EGM2D.root");
        Elec_Eff_LooseID = (TH2D *)file_Elec_Eff_LooseID->Get("EGamma_SF2D");
        TFile *file_Elec_EGM2D = new TFile("./Include/ttHSF/ElecSFs/egammaEffi2016_iso_EGM2D.root");
        Elec_EGM2D = (TH2D *)file_Elec_EGM2D->Get("EGamma_SF2D");
    }else if(if2017){
        Muon_Eff_LooseID = (TH2D *)file_Muon_Eff_ID->Get("plot_2017_Muon_Eff_LooseID_tracker");
        TFile *file_Muon_EGM2D = new TFile("./Include/ttHSF/MuonSFs/egammaEffi2017_iso_EGM2D.root");
        Muon_EGM2D = (TH2D *)file_Muon_EGM2D->Get("EGamma_SF2D");
        TFile *file_Elec_Eff_LooseID = new TFile("./Include/ttHSF/ElecSFs/egammaEffi2017_recoToloose_EGM2D.root");
        Elec_Eff_LooseID = (TH2D *)file_Elec_Eff_LooseID->Get("EGamma_SF2D");
        TFile *file_Elec_EGM2D = new TFile("./Include/ttHSF/ElecSFs/egammaEffi2017_iso_EGM2D.root");
        Elec_EGM2D = (TH2D *)file_Elec_EGM2D->Get("EGamma_SF2D");
    }else if(if2018){
        Muon_Eff_LooseID = (TH2D *)file_Muon_Eff_ID->Get("plot_2018_Muon_Eff_LooseID_tracker");
        TFile *file_Muon_EGM2D = new TFile("./Include/ttHSF/MuonSFs/egammaEffi2018_iso_EGM2D.root");
        Muon_EGM2D = (TH2D *)file_Muon_EGM2D->Get("EGamma_SF2D");
        TFile *file_Elec_Eff_LooseID = new TFile("./Include/ttHSF/ElecSFs/egammaEffi2018_recoToloose_EGM2D.root");
        Elec_Eff_LooseID = (TH2D *)file_Elec_Eff_LooseID->Get("EGamma_SF2D");
        TFile *file_Elec_EGM2D = new TFile("./Include/ttHSF/ElecSFs/egammaEffi2018_iso_EGM2D.root");
        Elec_EGM2D = (TH2D *)file_Elec_EGM2D->Get("EGamma_SF2D");
    }


}


void Analysis::End(int RootNumber){
    if(!fChain){
        cout<<"Big Error!!! No File loaded!!!"<<endl;
        return;
    }
    delete fChain->GetCurrentFile();
}

Analysis::~Analysis(){
}

void Analysis::Finish(int RootNumber){
    cout<<"Running "<<RootNumber<<"root file finished"<<endl;
    if(ifsavehists){
        myhists->saveHists();
        delete myhists;
    }
    cout<<"Running histogram saved"<<endl;
}

void Analysis::Output(){
    cout<<endl;


    cout<<"event_number_raw                                 : "<<event_number_raw<<endl;
    cout<<"weighted_number_total                            : "<<weighted_number_total<<endl;
//    cout<<"weighted_number_flag                            : "<<weighted_number_flag<<endl;
    cout<<"weighted_number_beforetrigger                            : "<<weighted_number_beforetrigger<<endl;
    cout<<"weighted_number_leptonptcut0                     : "<<weighted_number_leptonptcut0<<endl;
    cout<<"weighted_number_leptonptcut1                     : "<<weighted_number_leptonptcut1<<endl;
    cout<<"weighted_number_leptonptcut2                     : "<<weighted_number_leptonptcut2<<endl;
    cout<<"weighted_number_fatbtag_t                        : "<<weighted_number_fatbtag_t<<endl;
    cout<<"weighted_number_WZjet                            : "<<weighted_number_WZjet<<endl;
    cout<<"weighted_number_Wjet                             : "<<weighted_number_Wjet<<endl;
    cout<<"weighted_number_Zjet                             : "<<weighted_number_Zjet<<endl;
    cout<<"weighted_number_vbsjet                           : "<<weighted_number_vbsjet<<endl;
    cout<<"weighted_number_ST                               : "<<weighted_number_ST<<endl;
    cout<<"weighted_number_SameWZ                           : "<<weighted_number_SameWZ<<endl;
    cout<<"weighted_number_pe                               : "<<weighted_number_pe<<endl;
    cout<<"weighted_number_me                               : "<<weighted_number_me<<endl;
    cout<<"weighted_number_pm                               : "<<weighted_number_pm<<endl;
    cout<<"weighted_number_mm                               : "<<weighted_number_mm<<endl;
    
    cout<<"weighted_error_total                             : "<<sqrt(weighted_error_total)<<endl;
//    cout<<"weighted_error_flag                             : "<<sqrt(weighted_error_flag)<<endl;
    cout<<"weighted_error_beforetrigger                             : "<<sqrt(weighted_error_beforetrigger)<<endl;
    cout<<"weighted_error_leptonptcut0                      : "<<sqrt(weighted_error_leptonptcut0)<<endl;
    cout<<"weighted_error_leptonptcut1                      : "<<sqrt(weighted_error_leptonptcut1)<<endl;
    cout<<"weighted_error_leptonptcut2                      : "<<sqrt(weighted_error_leptonptcut2)<<endl;
    cout<<"weighted_error_fatbtag_t                         : "<<sqrt(weighted_error_fatbtag_t)<<endl;
    cout<<"weighted_error_WZjet                              : "<<sqrt(weighted_error_WZjet)<<endl;
    cout<<"weighted_error_Wjet                             : "<<sqrt(weighted_error_Wjet)<<endl;
    cout<<"weighted_error_Zjet                              : "<<sqrt(weighted_error_Zjet)<<endl;
    cout<<"weighted_error_vbsjet                            : "<<sqrt(weighted_error_vbsjet)<<endl;
    cout<<"weighted_error_ST                                : "<<sqrt(weighted_error_ST)<<endl;
    cout<<"weighted_error_SameWZ                            : "<<sqrt(weighted_error_SameWZ)<<endl;
    cout<<"weighted_error_pe                                : "<<sqrt(weighted_error_pe)<<endl;
    cout<<"weighted_error_me                                : "<<sqrt(weighted_error_me)<<endl;
    cout<<"weighted_error_pm                                : "<<sqrt(weighted_error_pm)<<endl;
    cout<<"weighted_error_mm                                : "<<sqrt(weighted_error_mm)<<endl;


    cout<<endl;
}


void Analysis::OutputTable(const char *yearName){
    //weighted_error_vbsjetpcut;
    //weighted_error_Mjjcut;
    //weighted_error_detacut;
    //weighted_error_Mbbcut;
    //weighted_error_Mjj1000cut;
    //weighted_error_Mjj2000cut;



    std::string outfiledataname(yearName);
    outfiledataname = "data_"+outfiledataname+".txt";
    ofstream outputdatafile(outfiledataname,ios::app);
    outputdatafile<<"SAMPLENAME     "<<yearName<<endl;
    outputdatafile<<"event_number_raw                                  "<<event_number_raw<<endl;
    outputdatafile<<"weighted_number_total                             "<<weighted_number_total<<endl;
//    outputdatafile<<"weighted_number_flag                             "<<weighted_number_flag<<endl;
    outputdatafile<<"weighted_number_beforetrigger                             "<<weighted_number_beforetrigger<<endl;
    outputdatafile<<"weighted_number_leptonptcut0                       "<<weighted_number_leptonptcut0<<endl;
    outputdatafile<<"weighted_number_leptonptcut1                       "<<weighted_number_leptonptcut1<<endl;
    outputdatafile<<"weighted_number_leptonptcut2                       "<<weighted_number_leptonptcut2<<endl;
    outputdatafile<<"weighted_number_fatbtag_t                         "<<weighted_number_fatbtag_t<<endl;
    outputdatafile<<"weighted_number_WZjet                             "<<weighted_number_WZjet<<endl;
    outputdatafile<<"weighted_number_Wjet                              "<<weighted_number_Wjet<<endl;
    outputdatafile<<"weighted_number_Zjet                              "<<weighted_number_Zjet<<endl;
    outputdatafile<<"weighted_number_removeak4b                        "<<weighted_number_removeak4b<<endl;
    outputdatafile<<"weighted_number_vbsjet                            "<<weighted_number_vbsjet<<endl;
    outputdatafile<<"weighted_number_ST                                "<<weighted_number_ST<<endl;
    outputdatafile<<"weighted_number_SameWZ                            "<<weighted_number_SameWZ<<endl;
    outputdatafile<<"weighted_number_pe                                "<<weighted_number_pe<<endl;
    outputdatafile<<"weighted_number_me                                "<<weighted_number_me<<endl;
    outputdatafile<<"weighted_number_pm                                "<<weighted_number_pm<<endl;
    outputdatafile<<"weighted_number_mm                                "<<weighted_number_mm<<endl;

    outputdatafile<<"weighted_error_total                              "<<sqrt(weighted_error_total)<<endl;
//    outputdatafile<<"weighted_error_flag                              "<<sqrt(weighted_error_flag)<<endl;
    outputdatafile<<"weighted_error_beforetrigger                              "<<sqrt(weighted_error_beforetrigger)<<endl;
    outputdatafile<<"weighted_error_leptonptcut0                       "<<sqrt(weighted_error_leptonptcut0)<<endl;
    outputdatafile<<"weighted_error_leptonptcut1                       "<<sqrt(weighted_error_leptonptcut1)<<endl;
    outputdatafile<<"weighted_error_leptonptcut2                       "<<sqrt(weighted_error_leptonptcut2)<<endl;
    outputdatafile<<"weighted_error_fatbtag_t                          "<<sqrt(weighted_error_fatbtag_t)<<endl;
    outputdatafile<<"weighted_error_WZjet                              "<<sqrt(weighted_error_WZjet)<<endl;
    outputdatafile<<"weighted_error_Wjet                               "<<sqrt(weighted_error_Wjet)<<endl;
    outputdatafile<<"weighted_error_Zjet                               "<<sqrt(weighted_error_Zjet)<<endl;
    outputdatafile<<"weighted_error_removeak4b                         "<<sqrt(weighted_error_removeak4b)<<endl;
    outputdatafile<<"weighted_error_vbsjet                             "<<sqrt(weighted_error_vbsjet)<<endl;
    outputdatafile<<"weighted_error_ST                                 "<<sqrt(weighted_error_ST)<<endl;
    outputdatafile<<"weighted_error_SameWZ                             "<<sqrt(weighted_error_SameWZ)<<endl;
    outputdatafile<<"weighted_error_pe                                 "<<sqrt(weighted_error_pe)<<endl;
    outputdatafile<<"weighted_error_me                                 "<<sqrt(weighted_error_me)<<endl;
    outputdatafile<<"weighted_error_pm                                 "<<sqrt(weighted_error_pm)<<endl;
    outputdatafile<<"weighted_error_mm                                 "<<sqrt(weighted_error_mm)<<endl;
    /*outputdatafile<<"weighted error High Mjj region High Mbb region    "<<weighted_error_HMjj_HMbb)<<endl;
    outputdatafile<<"weighted number High Mjj region Low  Mbb region  : "<<weighted_number_HMjj_LMbb<<endl;
    outputdatafile<<"weighted number Med  Mjj region High Mbb region  : "<<weighted_number_MMjj_HMbb<<endl;
    outputdatafile<<"weighted number Med  Mjj region Low  Mbb region  : "<<weighted_number_MMjj_LMbb<<endl;
    outputdatafile<<"weighted number Low  Mjj region High Mbb region  : "<<weighted_number_LMjj_HMbb<<endl;
    outputdatafile<<"weighted number Low  Mjj region Low  Mbb region  : "<<weighted_number_LMjj_LMbb<<endl;
    outputdatafile<<"weighted error  High Mjj region High Mbb region  : "<<weighted_error_HMjj_HMbb<<endl;
    outputdatafile<<"weighted error  High Mjj region Low  Mbb region  : "<<weighted_error_HMjj_LMbb<<endl;
    outputdatafile<<"weighted error  Med  Mjj region High Mbb region  : "<<weighted_error_MMjj_HMbb<<endl;
    outputdatafile<<"weighted error  Med  Mjj region Low  Mbb region  : "<<weighted_error_MMjj_LMbb<<endl;
    outputdatafile<<"weighted error  Low  Mjj region High Mbb region  : "<<weighted_error_LMjj_HMbb<<endl;
    outputdatafile<<"weighted error  Low  Mjj region Low  Mbb region  : "<<weighted_error_LMjj_LMbb<<endl;
*/
    outputdatafile.close();
}



void Analysis::Initial(const char* RootName, int RootNumber, const char *yearName){
    TTree *tree = NULL;
    TFile *file = TFile::Open(RootName);

    //TFile *file = (TFile *)gROOT->GetListOfFiles()->FindObject(RootName);
    std::string InputRoot(RootName);
    cout<<"CHECK    ROOTNAME   "<<RootName<<"   "<<RootNumber<<"   "<<yearName<<endl;
    isData = false;
    is_pd_ee = ( ((InputRoot.find("DoubleEG",0)) != string::npos) || ((InputRoot.find("EGamma",0)) != string::npos));
    is_pd_em =   ((InputRoot.find("MuonEG",0)) != string::npos);
    is_pd_mm =   ((InputRoot.find("DoubleMuon",0)) != string::npos);
    is_pd_se = ( ((InputRoot.find("SingleElectron",0)) != string::npos) || ((InputRoot.find("EGamma",0)) != string::npos));
    is_pd_sm =   ((InputRoot.find("SingleMuon",0)) != string::npos);

    isEWK = false;
    isEWK = ( ((InputRoot.find("EWKWMinus",0)) != string::npos) || ((InputRoot.find("EWKWPlus",0)) != string::npos));
    
    std::string InputYear(yearName);
    if(!file)
        file = new TFile(RootName);
    tree = (TTree *)gDirectory->Get("Events");


    bool if2016 = ((InputYear.find("2016",0)) != string::npos && (InputYear.find("2016APV",0)) == string::npos);
    bool if2016APV = ((InputYear.find("2016APV",0)) != string::npos);
    bool if2017 = ((InputYear.find("2017",0)) != string::npos);
    bool if2018 = ((InputYear.find("2018",0)) != string::npos);
    if(((InputYear.find("SingleElectron",0)) != string::npos)) isData = true;
    if(((InputYear.find("SingleMuon",0)) != string::npos)) isData = true;
    if(((InputYear.find("EGamma",0)) != string::npos)) isData = true;

    cout<<"CHECK_isData   "<<isData<<endl;
    cout<<InputYear<<"   "<<(InputYear.find("2018",0))<<endl;

    TFile *file_pileup = new TFile("./Include/pileup/PileupReweight.root");
    if(if2016APV || if2016){
        P_Pileupreweight = (TH1D *)file_pileup->Get("plot_2016_pileup_SF");
        P_Pileupreweight_up = (TH1D *)file_pileup->Get("plot_2016_pileup_up_SF");
        P_Pileupreweight_down = (TH1D *)file_pileup->Get("plot_2016_pileup_down_SF");
    }else if(if2017){
        P_Pileupreweight = (TH1D *)file_pileup->Get("plot_2017_pileup_SF");
        P_Pileupreweight_up = (TH1D *)file_pileup->Get("plot_2017_pileup_up_SF");
        P_Pileupreweight_down = (TH1D *)file_pileup->Get("plot_2017_pileup_down_SF");
    }else if(if2018){
        P_Pileupreweight = (TH1D *)file_pileup->Get("plot_2018_pileup_SF");
        P_Pileupreweight_up = (TH1D *)file_pileup->Get("plot_2018_pileup_up_SF");
        P_Pileupreweight_down = (TH1D *)file_pileup->Get("plot_2018_pileup_down_SF");
    }
    TFile *file_EWKreweight = new TFile("./Include/EWKSF/ewk_fix.root");
    P_EWKReweight = (TH1D*)file_EWKreweight->Get("Wgt__pdgid5_quarks_pt_varbin");

/*


    TFile *file_Muon_Eff_ID = new TFile("./Include/ttHSF/MuonSFs/MuonEff.root");
    if(if2016APV){
        Muon_Eff_LooseID = (TH2D *)file_Muon_Eff_ID->Get("plot_2016HIPM_Muon_Eff_LooseID_tracker");
        TFile *file_Muon_EGM2D = new TFile("./Include/ttHSF/MuonSFs/egammaEffi2016APV_iso_EGM2D.root");
        Muon_EGM2D = (TH2D *)file_Muon_EGM2D->Get("EGamma_SF2D");
        TFile *file_Elec_Eff_LooseID = new TFile("./Include/ttHSF/ElecSFs/egammaEffi2016APV_recoToloose_EGM2D.root");
        Elec_Eff_LooseID = (TH2D *)file_Elec_Eff_LooseID->Get("EGamma_SF2D");
        TFile *file_Elec_EGM2D = new TFile("./Include/ttHSF/ElecSFs/egammaEffi2016APV_iso_EGM2D.root");
        Elec_EGM2D = (TH2D *)file_Elec_EGM2D->Get("EGamma_SF2D");
    }else if(if2016){
        Muon_Eff_LooseID = (TH2D *)file_Muon_Eff_ID->Get("plot_2016_Muon_Eff_LooseID_tracker");
        TFile *file_Muon_EGM2D = new TFile("./Include/ttHSF/MuonSFs/egammaEffi2016_iso_EGM2D.root");
        Muon_EGM2D = (TH2D *)file_Muon_EGM2D->Get("EGamma_SF2D");
        TFile *file_Elec_Eff_LooseID = new TFile("./Include/ttHSF/ElecSFs/egammaEffi2016_recoToloose_EGM2D.root");
        Elec_Eff_LooseID = (TH2D *)file_Elec_Eff_LooseID->Get("EGamma_SF2D");
        TFile *file_Elec_EGM2D = new TFile("./Include/ttHSF/ElecSFs/egammaEffi2016_iso_EGM2D.root");
        Elec_EGM2D = (TH2D *)file_Elec_EGM2D->Get("EGamma_SF2D");
    }else if(if2017){
        Muon_Eff_LooseID = (TH2D *)file_Muon_Eff_ID->Get("plot_2017_Muon_Eff_LooseID_tracker");
        TFile *file_Muon_EGM2D = new TFile("./Include/ttHSF/MuonSFs/egammaEffi2017_iso_EGM2D.root");
        Muon_EGM2D = (TH2D *)file_Muon_EGM2D->Get("EGamma_SF2D");
        TFile *file_Elec_Eff_LooseID = new TFile("./Include/ttHSF/ElecSFs/egammaEffi2017_recoToloose_EGM2D.root");
        Elec_Eff_LooseID = (TH2D *)file_Elec_Eff_LooseID->Get("EGamma_SF2D");
        TFile *file_Elec_EGM2D = new TFile("./Include/ttHSF/ElecSFs/egammaEffi2017_iso_EGM2D.root");
        Elec_EGM2D = (TH2D *)file_Elec_EGM2D->Get("EGamma_SF2D");
    }else if(if2018){
        Muon_Eff_LooseID = (TH2D *)file_Muon_Eff_ID->Get("plot_2018_Muon_Eff_LooseID_tracker");
        TFile *file_Muon_EGM2D = new TFile("./Include/ttHSF/MuonSFs/egammaEffi2018_iso_EGM2D.root");
        Muon_EGM2D = (TH2D *)file_Muon_EGM2D->Get("EGamma_SF2D");
        TFile *file_Elec_Eff_LooseID = new TFile("./Include/ttHSF/ElecSFs/egammaEffi2018_recoToloose_EGM2D.root");
        Elec_Eff_LooseID = (TH2D *)file_Elec_Eff_LooseID->Get("EGamma_SF2D");
        TFile *file_Elec_EGM2D = new TFile("./Include/ttHSF/ElecSFs/egammaEffi2018_iso_EGM2D.root");
        Elec_EGM2D = (TH2D *)file_Elec_EGM2D->Get("EGamma_SF2D");
    }

*/    

    //Muon_Eff_LooseID;
    //Egamma_EGM2D;
    //Elec_Eff_LooseID;
    //
    

    if(if2016APV){
        // https://twiki.cern.ch/twiki/bin/view/CMS/BtagRecommendation106XUL16postVFP
        yearNumber = 20160;
        loose_deepflavor_bscore = 0.0508;
        medium_deepflavor_bscore = 0.2598;
        tight_deepflavor_bscore = 0.6502;
        year_lumi = 19.52;//35.9;
    }
    else if( if2016 )     {
        // https://twiki.cern.ch/twiki/bin/viewauth/CMS/BtagRecommendation80XReReco
        yearNumber = 2016;
        loose_deepflavor_bscore = 0.0480;
        medium_deepflavor_bscore = 0.2489;
        tight_deepflavor_bscore = 0.6377;
        year_lumi = 16.81;//35.9;
    }else if( if2017 ) {

        yearNumber = 2017;
        loose_deepflavor_bscore = 0.0532;
        medium_deepflavor_bscore = 0.3040;
        tight_deepflavor_bscore = 0.7476;
        year_lumi = 41.48;
    }else if( if2018 ) {
        yearNumber = 2018;
        loose_deepflavor_bscore = 0.0490;
        medium_deepflavor_bscore = 0.2783;
        tight_deepflavor_bscore = 0.7100;
        year_lumi = 59.83;
    }
    else{
        cout<<"Error! Cannot find the year"<<endl;
        return;
    }

    
    cout<<"setting year to : "<<yearNumber<<"   "<<if2016<<"   "<<if2017<<"   "<<if2018<<endl;
    cout<<isData<<endl;


//    if(!isData){
//        if(yearNumber == 2016)
//            btagCalib = new BTagCalibration("DeepJet", "./Include/btagsf/csv/DeepJet_2016LegacySF_V1.csv");
//        else if(yearNumber == 2017)
//            btagCalib = new BTagCalibration("DeepJet", "./Include/btagsf/csv/DeepJet_94XSF_V4_B_F.csv");
//        else if(yearNumber == 2018)
//            btagCalib = new BTagCalibration("DeepJet", "./Include/btagsf/csv/DeepJet_102XSF_V3.csv");
//        else
//            cout<<"btag setting : yearNumber error"<<endl;
    
//        btagReaderTight = new BTagCalibrationReader(BTagEntry::OP_TIGHT, "central", {"up", "down"});
//        btagReaderLoose = new BTagCalibrationReader(BTagEntry::OP_LOOSE, "central", {"up", "down"});
//        btagReaderTight->load(*btagCalib, BTagEntry::FLAV_B, "comb");
//        btagReaderLoose->load(*btagCalib, BTagEntry::FLAV_B, "comb");
//    }


    if(tree == NULL)
        cout<<"No Such Tree!!!"<<endl;

    fChain = tree;

    fChain->SetBranchAddress("run",&Rrun);
    fChain->SetBranchAddress("luminosityBlock",&RluminosityBlock);
    fChain->SetBranchAddress("event",&Revent);
    if(!isData)
        fChain->SetBranchAddress("Generator_weight",&RGenerator_weight);

    fChain->SetBranchAddress("Flag_goodVertices",&RFlag_goodVertices);
    fChain->SetBranchAddress("Flag_globalSuperTightHalo2016Filter",&RFlag_globalSuperTightHalo2016Filter);
    fChain->SetBranchAddress("Flag_HBHENoiseFilter",&RFlag_HBHENoiseFilter);
    fChain->SetBranchAddress("Flag_HBHENoiseIsoFilter",&RFlag_HBHENoiseIsoFilter);
    fChain->SetBranchAddress("Flag_EcalDeadCellTriggerPrimitiveFilter",&RFlag_EcalDeadCellTriggerPrimitiveFilter);
    fChain->SetBranchAddress("Flag_BadPFMuonFilter",&RFlag_BadPFMuonFilter);
    fChain->SetBranchAddress("Flag_BadPFMuonDzFilter",&RFlag_BadPFMuonDzFilter);
    fChain->SetBranchAddress("Flag_eeBadScFilter",&RFlag_eeBadScFilter);
    if(if2017 || if2018)
        fChain->SetBranchAddress("Flag_ecalBadCalibFilter",&RFlag_ecalBadCalibFilter);//V2 for not UL samples

    fChain->SetBranchAddress("MET_pt",&RMET_pt);
    if(!isData)
        fChain->SetBranchAddress("nGenPart",&RnGenPart);
    fChain->SetBranchAddress("nElectron",&RnElectron);
    fChain->SetBranchAddress("nMuon",&RnMuon);
//    fChain->SetBranchAddress("nTau",&RnTau);
    fChain->SetBranchAddress("nJet",&RnJet);
    fChain->SetBranchAddress("nFatJet",&RnFatJet);

    if(!isData)
        fChain->SetBranchAddress("Pileup_nTrueInt",&RPileup_nTrueInt);

    if(isEWK){
        fChain->SetBranchAddress("LHEPart_pt",&RLHEPart_pt);
        fChain->SetBranchAddress("LHEPart_eta",&RLHEPart_eta);
        fChain->SetBranchAddress("LHEPart_phi",&RLHEPart_phi);
        fChain->SetBranchAddress("LHEPart_mass",&RLHEPart_mass);
        fChain->SetBranchAddress("LHEPart_pdgId",&RLHEPart_pdgId);
    }

    fChain->SetBranchAddress("Electron_convVeto",&RElectron_convVeto);
    fChain->SetBranchAddress("Electron_charge",&RElectron_charge);
    fChain->SetBranchAddress("Electron_deltaEtaSC",&RElectron_deltaEtaSC);
    fChain->SetBranchAddress("Electron_dxy",&RElectron_dxy);
    fChain->SetBranchAddress("Electron_dz",&RElectron_dz);
    fChain->SetBranchAddress("Electron_eInvMinusPInv",&RElectron_eInvMinusPInv);
    fChain->SetBranchAddress("Electron_eta",&RElectron_eta);
    fChain->SetBranchAddress("Electron_hoe",&RElectron_hoe);
    fChain->SetBranchAddress("Electron_jetPtRelv2",&RElectron_jetPtRelv2);
    fChain->SetBranchAddress("Electron_jetRelIso",&RElectron_jetRelIso);
    fChain->SetBranchAddress("Electron_lostHits",&RElectron_lostHits);
    fChain->SetBranchAddress("Electron_mass",&RElectron_mass);
    fChain->SetBranchAddress("Electron_miniPFRelIso_all",&RElectron_miniPFRelIso_all);
    fChain->SetBranchAddress("Electron_mvaFall17V2noIso",&RElectron_mvaFall17V2noIso);
    fChain->SetBranchAddress("Electron_pfRelIso03_all",&RElectron_pfRelIso03_all);
    fChain->SetBranchAddress("Electron_pfRelIso03_chg",&RElectron_pfRelIso03_chg);
    fChain->SetBranchAddress("Electron_mvaFall17V2noIso_WPL",&RElectron_mvaFall17V2noIso_WPL);
    fChain->SetBranchAddress("Electron_mvaFall17V2noIso_WP80",&RElectron_mvaFall17V2noIso_WP80);
    fChain->SetBranchAddress("Electron_phi",&RElectron_phi);
    fChain->SetBranchAddress("Electron_pt",&RElectron_pt);
    fChain->SetBranchAddress("Electron_sieie",&RElectron_sieie);
    fChain->SetBranchAddress("Electron_sip3d",&RElectron_sip3d);
    fChain->SetBranchAddress("Electron_tightCharge",&RElectron_tightCharge);
    if(!isData)
        fChain->SetBranchAddress("Electron_genPartFlav",&RElectron_genPartFlav);
    fChain->SetBranchAddress("Electron_mvaTTH",&RElectron_mvaTTH);
    fChain->SetBranchAddress("Electron_mvaTTHUL",&RElectron_mvaTTHUL);
    fChain->SetBranchAddress("Electron_jetIdx",&RElectron_jetIdx);

    fChain->SetBranchAddress("Muon_jetIdx",&RMuon_jetIdx);
    fChain->SetBranchAddress("Muon_pt",&RMuon_pt);
    fChain->SetBranchAddress("Muon_eta",&RMuon_eta);
    fChain->SetBranchAddress("Muon_dxy",&RMuon_dxy);
    fChain->SetBranchAddress("Muon_dz",&RMuon_dz);
    fChain->SetBranchAddress("Muon_sip3d",&RMuon_sip3d);
    fChain->SetBranchAddress("Muon_ptErr",&RMuon_ptErr);
    fChain->SetBranchAddress("Muon_phi",&RMuon_phi);
    fChain->SetBranchAddress("Muon_mass",&RMuon_mass);
    fChain->SetBranchAddress("Muon_jetPtRelv2",&RMuon_jetPtRelv2);
    fChain->SetBranchAddress("Muon_jetRelIso",&RMuon_jetRelIso);
    fChain->SetBranchAddress("Muon_looseId",&RMuon_looseId);
    fChain->SetBranchAddress("Muon_mediumId",&RMuon_mediumId);
    fChain->SetBranchAddress("Muon_pfRelIso03_all",&RMuon_pfRelIso03_all);
    fChain->SetBranchAddress("Muon_miniPFRelIso_all",&RMuon_miniPFRelIso_all);
    fChain->SetBranchAddress("Muon_charge",&RMuon_charge);
    if(!isData)
        fChain->SetBranchAddress("Muon_genPartFlav",&RMuon_genPartFlav);
    fChain->SetBranchAddress("Muon_mvaTTH",&RMuon_mvaTTH);
    fChain->SetBranchAddress("Muon_mvaTTHUL",&RMuon_mvaTTHUL);
/*
    fChain->SetBranchAddress("Tau_pt",&RTau_pt);
    fChain->SetBranchAddress("Tau_dz",&RTau_dz);
    fChain->SetBranchAddress("Tau_eta",&RTau_eta);
    fChain->SetBranchAddress("Tau_phi",&RTau_phi);
    fChain->SetBranchAddress("Tau_mass",&RTau_mass);
    fChain->SetBranchAddress("Tau_jetIdx",&RTau_jetIdx);
    fChain->SetBranchAddress("Tau_charge",&RTau_charge);
    fChain->SetBranchAddress("Tau_idDeepTau2017v2p1VSe",&RTau_idDeepTau2017v2p1VSe);
    fChain->SetBranchAddress("Tau_idDeepTau2017v2p1VSmu",&RTau_idDeepTau2017v2p1VSmu);
    fChain->SetBranchAddress("Tau_idDeepTau2017v2p1VSjet",&RTau_idDeepTau2017v2p1VSjet);
    fChain->SetBranchAddress("Tau_decayMode",&RTau_decayMode);
*/
    fChain->SetBranchAddress("Jet_pt",&RJet_pt);
    fChain->SetBranchAddress("Jet_eta",&RJet_eta);
    fChain->SetBranchAddress("Jet_phi",&RJet_phi);
    fChain->SetBranchAddress("Jet_mass",&RJet_mass);
    fChain->SetBranchAddress("Jet_btagDeepFlavB",&RJet_btagDeepFlavB);
    if(!isData)
        fChain->SetBranchAddress("Jet_genJetIdx",&RJet_genJetIdx);
    fChain->SetBranchAddress("Jet_btagDeepB",&RJet_btagDeepB);
    if(!isData){
        fChain->SetBranchAddress("Jet_partonFlavour",&RJet_partonFlavour);
        fChain->SetBranchAddress("Jet_hadronFlavour",&RJet_hadronFlavour);
    }
    fChain->SetBranchAddress("Jet_jetId",&RJet_jetId);
    fChain->SetBranchAddress("Jet_puId",&RJet_puId);

    fChain->SetBranchAddress("FatJet_pt",&RFatJet_pt);
    fChain->SetBranchAddress("FatJet_eta",&RFatJet_eta);
    fChain->SetBranchAddress("FatJet_phi",&RFatJet_phi);
    fChain->SetBranchAddress("FatJet_mass",&RFatJet_mass);
    fChain->SetBranchAddress("FatJet_particleNet_mass",&RFatJet_particleNet_mass);
    fChain->SetBranchAddress("FatJet_msoftdrop",&RFatJet_msoftdrop);
    fChain->SetBranchAddress("FatJet_btagDDBvLV2",&RFatJet_btagDDBvLV2);
    fChain->SetBranchAddress("FatJet_deepTagMD_HbbvsQCD",&RFatJet_deepTagMD_HbbvsQCD);
    fChain->SetBranchAddress("FatJet_deepTagMD_WvsQCD",&RFatJet_deepTagMD_WvsQCD);
    fChain->SetBranchAddress("FatJet_particleNet_HbbvsQCD",&RFatJet_particleNet_HbbvsQCD);
    fChain->SetBranchAddress("FatJet_particleNet_WvsQCD",&RFatJet_particleNet_WvsQCD);
    fChain->SetBranchAddress("FatJet_particleNet_ZvsQCD",&RFatJet_particleNet_ZvsQCD);
    fChain->SetBranchAddress("FatJet_particleNetMD_QCD",&RFatJet_particleNetMD_QCD);
    fChain->SetBranchAddress("FatJet_particleNetMD_Xbb",&RFatJet_particleNetMD_Xbb);
    fChain->SetBranchAddress("FatJet_particleNetMD_Xcc",&RFatJet_particleNetMD_Xcc);
    fChain->SetBranchAddress("FatJet_particleNetMD_Xqq",&RFatJet_particleNetMD_Xqq);
    fChain->SetBranchAddress("FatJet_tau1",&RFatJet_tau1);
    fChain->SetBranchAddress("FatJet_tau2",&RFatJet_tau2);
    fChain->SetBranchAddress("FatJet_tau3",&RFatJet_tau3);
    fChain->SetBranchAddress("FatJet_jetId",&RFatJet_jetId);

    if(!isData){
        fChain->SetBranchAddress("GenPart_genPartIdxMother",&RGenPart_genPartIdxMother);
        fChain->SetBranchAddress("GenPart_status",&RGenPart_status);
        fChain->SetBranchAddress("GenPart_pdgId",&RGenPart_pdgId);
        fChain->SetBranchAddress("GenPart_eta",&RGenPart_eta);
        fChain->SetBranchAddress("GenPart_phi",&RGenPart_phi);
        fChain->SetBranchAddress("GenPart_pt",&RGenPart_pt);
        fChain->SetBranchAddress("GenPart_mass",&RGenPart_mass);
    }
    TObject *br;

    br = fChain->GetListOfBranches()->FindObject("HLT_IsoMu18");
    if(br){
        fChain->SetBranchAddress("HLT_IsoMu18",&RHLT_IsoMu18);
        ifExistHLT_IsoMu18 = true;
    }else{
        ifExistHLT_IsoMu18 = false;
    }

    br = fChain->GetListOfBranches()->FindObject("HLT_IsoMu20");
    if(br){
        fChain->SetBranchAddress("HLT_IsoMu20",&RHLT_IsoMu20);
        ifExistHLT_IsoMu20 = true;
    }else{
        ifExistHLT_IsoMu20 = false;
    }

    br = fChain->GetListOfBranches()->FindObject("HLT_IsoMu22");
    if(br){
        fChain->SetBranchAddress("HLT_IsoMu22",&RHLT_IsoMu22);
        ifExistHLT_IsoMu22 = true;
    }else{
        ifExistHLT_IsoMu22 = false;
    }

    br = fChain->GetListOfBranches()->FindObject("HLT_IsoMu24");
    if(br){
        fChain->SetBranchAddress("HLT_IsoMu24",&RHLT_IsoMu24);
        ifExistHLT_IsoMu24 = true;
    }else{
        ifExistHLT_IsoMu24 = false;
    }

    br = fChain->GetListOfBranches()->FindObject("HLT_IsoMu27");
    if(br){
        fChain->SetBranchAddress("HLT_IsoMu27",&RHLT_IsoMu27);
        ifExistHLT_IsoMu27 = true;
    }else{
        ifExistHLT_IsoMu27 = false;
    }

    br = fChain->GetListOfBranches()->FindObject("HLT_IsoTkMu18");
    if(br){
        fChain->SetBranchAddress("HLT_IsoTkMu18",&RHLT_IsoTkMu18);
        ifExistHLT_IsoTkMu18 = true;
    }else{
        ifExistHLT_IsoTkMu18 = false;
    }

    br = fChain->GetListOfBranches()->FindObject("HLT_IsoTkMu20");
    if(br){
        fChain->SetBranchAddress("HLT_IsoTkMu20",&RHLT_IsoTkMu20);
        ifExistHLT_IsoTkMu20 = true;
    }else{
        ifExistHLT_IsoTkMu20 = false;
    }

    br = fChain->GetListOfBranches()->FindObject("HLT_IsoTkMu22");
    if(br){
        fChain->SetBranchAddress("HLT_IsoTkMu22",&RHLT_IsoTkMu22);
        ifExistHLT_IsoTkMu22 = true;
    }else{
        ifExistHLT_IsoTkMu22 = false;
    }

    br = fChain->GetListOfBranches()->FindObject("HLT_IsoTkMu24");
    if(br){
        fChain->SetBranchAddress("HLT_IsoTkMu24",&RHLT_IsoTkMu24);
        ifExistHLT_IsoTkMu24 = true;
    }else{
        ifExistHLT_IsoTkMu24 = false;
    }

    br = fChain->GetListOfBranches()->FindObject("HLT_IsoTkMu27");
    if(br){
        fChain->SetBranchAddress("HLT_IsoTkMu27",&RHLT_IsoTkMu27);
        ifExistHLT_IsoTkMu27 = true;
    }else{
        ifExistHLT_IsoTkMu27 = false;
    }

    br = fChain->GetListOfBranches()->FindObject("HLT_Ele25_WPTight_Gsf");
    if(br){
        fChain->SetBranchAddress("HLT_Ele25_WPTight_Gsf",&RHLT_Ele25_WPTight_Gsf);
        ifExistHLT_Ele25_WPTight_Gsf = true;
    }else{
        ifExistHLT_Ele25_WPTight_Gsf = false;
    }

    br = fChain->GetListOfBranches()->FindObject("HLT_Ele25_eta2p1_WPTight_Gsf");
    if(br){
        fChain->SetBranchAddress("HLT_Ele25_eta2p1_WPTight_Gsf",&RHLT_Ele25_eta2p1_WPTight_Gsf);
        ifExistHLT_Ele25_eta2p1_WPTight_Gsf = true;
    }else{
        ifExistHLT_Ele25_eta2p1_WPTight_Gsf = false;
    }

    br = fChain->GetListOfBranches()->FindObject("HLT_Ele27_WPTight_Gsf");
    if(br){
        fChain->SetBranchAddress("HLT_Ele27_WPTight_Gsf",&RHLT_Ele27_WPTight_Gsf);
        ifExistHLT_Ele27_WPTight_Gsf = true;
    }else{
        ifExistHLT_Ele27_WPTight_Gsf = false;
    }

    br = fChain->GetListOfBranches()->FindObject("HLT_Ele27_eta2p1_WPTight_Gsf");
    if(br){
        fChain->SetBranchAddress("HLT_Ele27_eta2p1_WPTight_Gsf",&RHLT_Ele27_eta2p1_WPTight_Gsf);
        ifExistHLT_Ele27_eta2p1_WPTight_Gsf = true;
    }else{
        ifExistHLT_Ele27_eta2p1_WPTight_Gsf = false;
    }

    br = fChain->GetListOfBranches()->FindObject("HLT_Ele32_eta2p1_WPTight_Gsf");
    if(br){
        fChain->SetBranchAddress("HLT_Ele32_eta2p1_WPTight_Gsf",&RHLT_Ele32_eta2p1_WPTight_Gsf);
        ifExistHLT_Ele32_eta2p1_WPTight_Gsf = true;
    }else{
        ifExistHLT_Ele32_eta2p1_WPTight_Gsf = false;
    }

    br = fChain->GetListOfBranches()->FindObject("HLT_Ele32_WPTight_Gsf");
    if(br){
        fChain->SetBranchAddress("HLT_Ele32_WPTight_Gsf",&RHLT_Ele32_WPTight_Gsf);
        ifExistHLT_Ele32_WPTight_Gsf = true;
    }else{
        ifExistHLT_Ele32_WPTight_Gsf = false;
    }

    br = fChain->GetListOfBranches()->FindObject("HLT_Ele35_WPTight_Gsf");
    if(br){
        fChain->SetBranchAddress("HLT_Ele35_WPTight_Gsf",&RHLT_Ele35_WPTight_Gsf);
        ifExistHLT_Ele35_WPTight_Gsf = true;
    }else{
        ifExistHLT_Ele35_WPTight_Gsf = false;
    }

    br = fChain->GetListOfBranches()->FindObject("HLT_Ele38_WPTight_Gsf");
    if(br){
        fChain->SetBranchAddress("HLT_Ele38_WPTight_Gsf",&RHLT_Ele38_WPTight_Gsf);
        ifExistHLT_Ele38_WPTight_Gsf = true;
    }else{
        ifExistHLT_Ele38_WPTight_Gsf = false;
    }

    br = fChain->GetListOfBranches()->FindObject("HLT_Ele40_WPTight_Gsf");
    if(br){
        fChain->SetBranchAddress("HLT_Ele40_WPTight_Gsf",&RHLT_Ele40_WPTight_Gsf);
        ifExistHLT_Ele40_WPTight_Gsf = true;
    }else{
        ifExistHLT_Ele40_WPTight_Gsf = false;
    }

    br = fChain->GetListOfBranches()->FindObject("HLT_Ele32_WPTight_Gsf_L1DoubleEG");
    if(br){
        fChain->SetBranchAddress("HLT_Ele32_WPTight_Gsf_L1DoubleEG",&RHLT_Ele32_WPTight_Gsf_L1DoubleEG);
        ifExistHLT_Ele32_WPTight_Gsf_L1DoubleEG = true;
    }else{
        ifExistHLT_Ele32_WPTight_Gsf_L1DoubleEG = false;
    }



    cout<<"finishing reading trees"<<endl;


}
#endif



