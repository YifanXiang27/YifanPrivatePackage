#include "Analysis.h"

using namespace std;

bool Analysis::electronIDVBS(int iel, int id_level){
    if(RElectron_pt[iel] <= 7) return false;
    if(fabs(RElectron_eta[iel] + RElectron_deltaEtaSC[iel]) >= 2.5) return false;
    if(fabs(RElectron_dxy[iel]) > 0.05) return false;
    if(fabs(RElectron_dz[iel]) >= 0.1) return false;
    if(fabs(RElectron_sip3d[iel] ) >= 8) return false;
    if(RElectron_miniPFRelIso_all[iel] >= 0.4) return false;
    if((int)(RElectron_lostHits[iel]) > 1) return false;
    if(!RElectron_mvaFall17V2noIso_WPL[iel]) return false;
    if(id_level > 0){
        if(RElectron_pt[iel]<= 10) return false;
        if(!isTriggersafeNoIso(iel)) return false;
        if(!RElectron_convVeto[iel]) return false;
        if(RElectron_tightCharge[iel] != 2) return false;
        if((int)(RElectron_lostHits[iel]) > 0) return false;
        if(RElectron_jetIdx[iel] >= 0 && RElectron_jetIdx[iel] < RnJet){
            if(RJet_btagDeepFlavB[RElectron_jetIdx[iel]] >= medium_deepflavor_bscore) return false;
        }
    }
    switch(id_level){
        case(0):
            return true;
            break;
        case(1):
            if((*RElectron_mvaTTHUL)[iel] <= 0.9){
                if(!RElectron_mvaFall17V2noIso_WP80[iel]) return false; 
                if(RElectron_jetRelIso[iel] >= 0.7) return false;
            }
            return true;
            break;
        case(2):
            if((*RElectron_mvaTTHUL)[iel] <= 0.9) return false;
            return true;
            break;
        default:
            cout<<"Error ID level"<<endl;
            return false;
            break;

    }

    cout<<"Error in ElectronSelection.C : should not see this message!!!!!!!"<<endl;
    return 0;
}

bool Analysis::isTriggersafeNoIso(int iel){
    float SC_absEta = fabs(RElectron_eta[iel] + RElectron_deltaEtaSC[iel]);
    if(RElectron_hoe[iel] >= 0.1) return false;
    if(RElectron_eInvMinusPInv[iel] <= -0.04) return false;
    if (SC_absEta <= 1.479) {
        if(RElectron_sieie[iel] >= 0.011) return false;
    }else if (SC_absEta > 1.479 && SC_absEta < 2.5) {
        if (RElectron_sieie[iel] >= 0.030) return false;
    }
    return true;
}

