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
        TTree *traintree;
        TTree *testtree;


        Float_t  total_Hbbmass;
        Float_t  total_HbbPt;

        Float_t  total_Mlb1;
        Float_t  total_Mlb2;

        Float_t  total_maxbjet_score;
        Float_t  total_secbjet_score;
        Float_t  total_maxbjet_pt;
        Float_t  total_secbjet_pt;
        Float_t  total_maxbjet_eta;
        Float_t  total_secbjet_eta;
        Float_t  total_maxbjet_phi;
        Float_t  total_secbjet_phi;
        Float_t  total_maxbjet_mass;
        Float_t  total_secbjet_mass;

        Float_t  total_Zjetscore;
        Float_t  total_Zjetmass;
        Float_t  total_Zjetmsoftdrop;
        Float_t  total_Zjettau21;
        Float_t  total_Zjettau32;
        Float_t  total_Zjettau1;
        Float_t  total_Zjettau2;
        Float_t  total_Zjettau3;
        Float_t  total_ZjetPt;

        Float_t  total_Wjetscore;
        Float_t  total_Wjetmass;
        Float_t  total_Wjetmsoftdrop;
        Float_t  total_Wjettau21;
        Float_t  total_Wjettau32;
        Float_t  total_Wjettau1;
        Float_t  total_Wjettau2;
        Float_t  total_Wjettau3;
        Float_t  total_WjetPt;

        Float_t  total_2ndfatjet_score;
        Float_t  total_2ndfatjet_mass;
        Float_t  total_2ndfatjet_msoftdrop;
        Float_t  total_2ndfatjet_tau21;
        Float_t  total_2ndfatjet_tau32;
        Float_t  total_2ndfatjet_tau1;
        Float_t  total_2ndfatjet_tau2;
        Float_t  total_2ndfatjet_tau3;
        Float_t  total_2ndfatjet_Pt;

        Float_t  total_leptonpt;
        Float_t  total_VBSMjj;
        Float_t  total_VBSdetajj;
        Float_t  total_VBSdphijj;
        Float_t  total_VBSPtjj;
        Float_t  total_trans_E;
        Float_t  total_MET;
        Float_t  total_weight;
        Float_t  total_fabsweight;
        Float_t  total_divide;


        Float_t  train_Hbbmass;
        Float_t  train_HbbPt;

        Float_t  train_Mlb1;
        Float_t  train_Mlb2;

        Float_t  train_maxbjet_score;
        Float_t  train_secbjet_score;
        Float_t  train_maxbjet_pt;
        Float_t  train_secbjet_pt;
        Float_t  train_maxbjet_eta;
        Float_t  train_secbjet_eta;
        Float_t  train_maxbjet_phi;
        Float_t  train_secbjet_phi;
        Float_t  train_maxbjet_mass;
        Float_t  train_secbjet_mass;

        Float_t  train_Zjetscore;
        Float_t  train_Zjetmass;
        Float_t  train_Zjetmsoftdrop;
        Float_t  train_Zjettau21;
        Float_t  train_Zjettau32;
        Float_t  train_Zjettau1;
        Float_t  train_Zjettau2;
        Float_t  train_Zjettau3;
        Float_t  train_ZjetPt;

        Float_t  train_Wjetscore;
        Float_t  train_Wjetmass;
        Float_t  train_Wjetmsoftdrop;
        Float_t  train_Wjettau21;
        Float_t  train_Wjettau32;
        Float_t  train_Wjettau1;
        Float_t  train_Wjettau2;
        Float_t  train_Wjettau3;
        Float_t  train_WjetPt;

        Float_t  train_leptonpt;
        Float_t  train_VBSMjj;
        Float_t  train_VBSdetajj;
        Float_t  train_VBSdphijj;
        Float_t  train_VBSPtjj;
        Float_t  train_trans_E;
        Float_t  train_MET;
        Float_t  train_weight;
        Float_t  train_fabsweight;

        Float_t  train_2ndfatjet_score;
        Float_t  train_2ndfatjet_mass;
        Float_t  train_2ndfatjet_msoftdrop;
        Float_t  train_2ndfatjet_tau21;
        Float_t  train_2ndfatjet_tau32;
        Float_t  train_2ndfatjet_tau1;
        Float_t  train_2ndfatjet_tau2;
        Float_t  train_2ndfatjet_tau3;
        Float_t  train_2ndfatjet_Pt;


        Float_t  test_Hbbscore;
        Float_t  test_Hbbmass;
        Float_t  test_Hbbmsoftdrop;
        Float_t  test_Hbbtau21;
        Float_t  test_Hbbtau32;
        Float_t  test_Hbbtau1;
        Float_t  test_Hbbtau2;
        Float_t  test_Hbbtau3;
        Float_t  test_HbbPt;

        Float_t  test_Mlb1;
        Float_t  test_Mlb2;

        
        Float_t  test_maxbjet_score;
        Float_t  test_secbjet_score;
        Float_t  test_maxbjet_pt;
        Float_t  test_secbjet_pt;
        Float_t  test_maxbjet_eta;
        Float_t  test_secbjet_eta;
        Float_t  test_maxbjet_phi;
        Float_t  test_secbjet_phi;
        Float_t  test_maxbjet_mass;
        Float_t  test_secbjet_mass;

        Float_t  test_Zjetscore;
        Float_t  test_Zjetmass;
        Float_t  test_Zjetmsoftdrop;
        Float_t  test_Zjettau21;
        Float_t  test_Zjettau32;
        Float_t  test_Zjettau1;
        Float_t  test_Zjettau2;
        Float_t  test_Zjettau3;
        Float_t  test_ZjetPt;

        Float_t  test_Wjetscore;
        Float_t  test_Wjetmass;
        Float_t  test_Wjetmsoftdrop;
        Float_t  test_Wjettau21;
        Float_t  test_Wjettau32;
        Float_t  test_Wjettau1;
        Float_t  test_Wjettau2;
        Float_t  test_Wjettau3;
        Float_t  test_WjetPt;

        Float_t  test_2ndfatjet_score;
        Float_t  test_2ndfatjet_mass;
        Float_t  test_2ndfatjet_msoftdrop;
        Float_t  test_2ndfatjet_tau21;
        Float_t  test_2ndfatjet_tau32;
        Float_t  test_2ndfatjet_tau1;
        Float_t  test_2ndfatjet_tau2;
        Float_t  test_2ndfatjet_tau3;
        Float_t  test_2ndfatjet_Pt;

        Float_t  test_leptonpt;
        Float_t  test_VBSMjj;
        Float_t  test_VBSdetajj;
        Float_t  test_VBSdphijj;
        Float_t  test_VBSPtjj;
        Float_t  test_trans_E;
        Float_t  test_MET;
        Float_t  test_weight;
        Float_t  test_fabsweight;

        void bookHists(const char* fName);
        void saveHists();
};
#endif
