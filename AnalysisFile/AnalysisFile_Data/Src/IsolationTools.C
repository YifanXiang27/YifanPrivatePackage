#include "Analysis.h"

using namespace std;

bool Analysis::passMultiIso(int id, int idx, float cutMiniIso, float cutPtRatio, float cutPtRel) {
    float miniiso = abs(id)==11 ?  RElectron_miniPFRelIso_all[idx] : RMuon_miniPFRelIso_all[idx];
    if (miniiso > cutMiniIso) return false;
    // short circuit if we only are requiring miniiso (e.g., veto)
    if (cutPtRatio < 0 && cutPtRel < 0) return true;
    int closestJetIdx = abs(id) == 11 ? RElectron_jetIdx[idx] : RMuon_jetIdx[idx];
    //cout<<endl<<Rrun<<"   "<<Revent<<"   "<<RluminosityBlock<<"   "<<closestJetIdx<<endl;
    //for(int jj = 0 ; jj < RnJet ; jj++){
        //cout<<RJet_pt[jj]<<"   "<<RJet_eta[jj]<<"   "<<RJet_phi[jj]<<"   "<<RJet_mass[jj]<<endl;
    //}
    float ptratio = 1.;
    float ptrel = 0.;
    if (closestJetIdx < 0) {
        ptratio = 1.;
        ptrel = 0.;
    } else {
        // NOTE missing JEC L2L3 (or L1) to correctly compute the closest jet p4
        TLorentzVector closestJet;// = Jet_p4[closestJetIdx];
        closestJet.SetPtEtaPhiM(RJet_pt[closestJetIdx],RJet_eta[closestJetIdx],RJet_phi[closestJetIdx],RJet_mass[closestJetIdx]);
        TLorentzVector lepton;
        if(abs(id) == 11){
            lepton.SetPtEtaPhiM(RElectron_pt[idx],RElectron_eta[idx],RElectron_phi[idx],RElectron_mass[idx]);
        }else{
            lepton.SetPtEtaPhiM(RMuon_pt[idx],RMuon_eta[idx],RMuon_phi[idx],RMuon_mass[idx]);
        }
//        TLorentzVector lepton = abs(id) == 11 ? RElectron_p4[idx] : RMuon_p4[idx];
        
        //ptratio = getPtRatio(id,idx);
        //ptrel = computePtRel(lepton,closestJet);
        ptratio = abs(id)==11 ? RElectron_jetRelIso[closestJetIdx] : RMuon_jetRelIso[closestJetIdx] ;
        ptrel = abs(id) == 11 ? RElectron_jetPtRelv2[closestJetIdx] : RMuon_jetPtRelv2[closestJetIdx] ;
//        cout<<ptratio<<"   "<<ptrel<<endl;
        //cout<<lepton.Pt()<<"   "<<closestJet.Pt()<<endl;
    }
    //cout<<Rrun<<"   "<<Revent<<"   "<<RluminosityBlock<<"   "<<ptratio<<"   "<<ptrel<<"   "<<1/(1+ptratio)<<endl;
    return (ptratio > cutPtRatio) || (ptrel > cutPtRel);
}

float Analysis::computePtRel(const TLorentzVector& lepp4, const TLorentzVector& jetp4) {
    if (jetp4.Pt()<=0.) return 0.;
    TLorentzVector jp4 = jetp4;
    jp4 -= lepp4;
    float dot = lepp4.Vect().Dot( jp4.Vect() );
    float ptrel = lepp4.P() * lepp4.P() - dot*dot/(jp4.P() * jp4.P());
    ptrel = ptrel>0 ? pow(ptrel,0.5) : 0.0;
    return ptrel;
}

float Analysis::getPtRel(int id, int idx) {
    // NOTE missing JEC L2L3 (or L1) to correctly compute the closest jet p4
    int closestJetIdx = abs(id) == 11 ? RElectron_jetIdx[idx] : RMuon_jetIdx[idx];
    if (closestJetIdx >= 0){
        TLorentzVector closestJet;// = Jet_p4[closestJetIdx];
        closestJet.SetPtEtaPhiM(RJet_pt[closestJetIdx],RJet_eta[closestJetIdx],RJet_phi[closestJetIdx],RJet_mass[closestJetIdx]);
        TLorentzVector lepton;// = abs(id) == 11 ? RElectron_p4[idx] : RMuon_p4[idx]
        if(abs(id) == 11)
            lepton.SetPtEtaPhiM(RElectron_pt[idx],RElectron_eta[idx],RElectron_phi[idx],RElectron_mass[idx]);
        else
            lepton.SetPtEtaPhiM(RMuon_pt[idx],RMuon_eta[idx],RMuon_phi[idx],RMuon_mass[idx]);
        return computePtRel(lepton,closestJet);
    } else {
        return 0.;
    }
}

float Analysis::getPtRatio(int id, int idx) {
    // NOTE missing JEC L2L3 (or L1) to correctly compute the closest jet p4
    int closestJetIdx = abs(id) == 11 ? RElectron_jetIdx[idx] : RMuon_jetIdx[idx];
    if (closestJetIdx >= 0){
        float leppt = abs(id) == 11 ? RElectron_pt[idx] : RMuon_pt[idx];
        return leppt/RJet_pt[closestJetIdx];
    }
    return 1.;
}


