#include "Analysis.h"

using namespace std;
bool Analysis::tauIDVBS(int ita, int id_level){
    if(RTau_pt[ita] <= 20)                       return false;
    if(fabs(RTau_dz[ita]) >= 0.2)               return false;
    if(fabs(RTau_eta[ita]) >= 2.3)               return false;
//    if(!RTau_idDecayModeNewDMs[ita])              return false;
    if(id_level > 0){
        if(RTau_decayMode[ita] == 5)              return false;
        if(RTau_decayMode[ita] == 6)              return false;
    }
    switch(id_level){
        case(0):
            if(!passesDeepTau(ita,2,"tauvsjets"))   return false;
            return true;
            break;
        case(1):
            if(!passesDeepTau(ita,2,"tauvsjets"))               return false;
            if(!passesDeepTau(ita,3,"tauvsmuon"))               return false;
            if(!passesDeepTau(ita,1,"tauvselec"))               return false;
            return true;
            break;
        case(2):
            if(!passesDeepTau(ita,4,"tauvsjets"))               return false;
            if(!passesDeepTau(ita,3,"tauvsmuon"))               return false;
            if(!passesDeepTau(ita,1,"tauvselec"))               return false;
            return true;
            break;
        default:
            cout<<"Tau Selection Error : ID wrong"<<endl;
            return false;
            break;
    }


    cout<<"Error from TauSelection: should not see this message!!!!!"<<endl;
    return 0;
}

bool Analysis::passesDeepTau(int ita, int id, string type){
    int bit_flag;
    if(type== "tauvsmuon"){
        if(id < 2 || id > 5){
            cout<<"Tau Selection Error : wrong id called for tau vs muon"<<endl;
            return false;
        }
	bit_flag = std::pow(2,(id-2));
    }else{
	bit_flag = std::pow(2,id);
    }
    if(type == "tauvselec"){
	return bool(RTau_idDeepTau2017v2p1VSe[ita] & bit_flag);
    }else if(type == "tauvsmuon"){
	return bool(RTau_idDeepTau2017v2p1VSmu[ita] & bit_flag);
    }else if(type == "tauvsjets"){
	return bool(RTau_idDeepTau2017v2p1VSjet[ita] & bit_flag);
    }
    cout<<"Error from TauSelection : passesDeepTau wrong"<<endl;
    return 0;
}
