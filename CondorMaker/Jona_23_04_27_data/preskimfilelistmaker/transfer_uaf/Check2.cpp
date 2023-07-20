#include <TROOT.h>
#include <TFile.h>
#include <TCanvas.h>
#include <TTree.h>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main(int argc, char** argv){

    ifstream F_RNread;
    F_RNread.open("./FileNumList.txt");

    std::string S_FRN;
    int read_num;
    ifstream F_total;
    ifstream F_common;
    ofstream F_totallost;
    F_totallost.open("./filelist/File_Totallost.txt",ios::app);
    while(F_RNread >> S_FRN){
        F_RNread>>read_num;
        std::string F_Name;
        F_Name = "./filelist/Sort_CommonFilelist_" + S_FRN + ".list";
        F_common.open(F_Name);
        F_Name = "./filelist/Sort_FullFilelist_" + S_FRN + ".list";
        F_total.open(F_Name);
        std::string S_FCommon;
        std::string S_FTotal;
        F_total>>S_FTotal;
        while(F_common >> S_FCommon){
            if(S_FTotal == S_FCommon){
                F_total >> S_FTotal;
            }else{
                F_totallost<<S_FTotal<<endl;
                F_total >> S_FTotal;
            }
        }
    }

}
