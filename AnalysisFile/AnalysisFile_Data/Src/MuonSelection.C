#include "Analysis.h"

using namespace std;
bool Analysis::muonIDVBS(int imu, int id_level){

    if(RMuon_pt[imu] <= 5)                      return false;
    if(fabs(RMuon_eta[imu]) >= 2.4)             return false;
    if(fabs(RMuon_dxy[imu]) >= 0.05)            return false;
    if(fabs(RMuon_dz[imu]) >= 0.1)              return false;
    if(RMuon_sip3d[imu] >= 8)                   return false;
    if(RMuon_miniPFRelIso_all[imu] > 0.40)      return false;
    if(!RMuon_looseId[imu])                     return false;
    if(id_level > 0){
        if(RMuon_pt[imu] < 10) return false;
        if(RMuon_jetIdx[imu] >= 0 && RMuon_jetIdx[imu] < RnJet){
            if(RJet_btagDeepFlavB[RMuon_jetIdx[imu]] >= medium_deepflavor_bscore) return false;
        }
    }
    switch(id_level){
        case(0):
            return true;
            break;
        case(1):
            if((RMuon_mvaTTHUL)[imu] <= 0.85){
                if(RMuon_jetRelIso[imu] >= 0.5) return false;
            }
            return true;
            break;
        case(2):
            if(!RMuon_mediumId[imu]) return false;
            if((RMuon_mvaTTHUL)[imu] <= 0.85) return false;
            return true;
            break;
        default:
            cout<<"Muon Selection Error : ID Level wrong"<<endl;
            return false;
            break;
    }
    cout<<"Error from MuonSelection: should not see this message!!!!!"<<endl;
    return 0;
}

