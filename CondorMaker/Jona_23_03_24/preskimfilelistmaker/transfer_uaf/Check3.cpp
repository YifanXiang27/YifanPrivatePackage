#include <TROOT.h>
#include <TFile.h>
#include <TCanvas.h>
#include <TTree.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <string.h>
using namespace std;
int main(int argc, char** argv){

    ifstream F_RNread;
    F_RNread.open("./FileNumList.txt");

    std::string S_FRN;
    int read_num;
    ifstream F_common;
    ofstream F_commonlost;
    F_commonlost.open("./filelist/File_Commonlost.txt",ios::app);
    ofstream F_zombie;
    F_zombie.open("./filelist/File_Zombie.txt",ios::app);
    ofstream FR_Filelist;
    ofstream FO_Filelist;
    while(F_RNread >> S_FRN){
        F_RNread>>read_num;
        std::string F_Name;
        F_Name = "./filelist/CFFilelist_" + S_FRN + ".list";
        F_common.open(F_Name);
        F_Name = "./filelist/Filelist_" + S_FRN + ".list";
        FR_Filelist.open(F_Name,ios::out);
        F_Name = "./filelist/out_Filelist_" + S_FRN + ".list";
        FO_Filelist.open(F_Name,ios::out);
        std::string S_rootname;
        while(F_common >> S_rootname){
            const char *C_rootname = S_rootname.c_str();
            TFile f(C_rootname);
            if(f.IsZombie()){
                F_zombie<<C_rootname<<endl;
                continue;
            }
            TTree *tree = NULL;
            TFile *file = TFile::Open(C_rootname);
            tree = (TTree *)file->Get("Events");
            if(tree == NULL){
                F_commonlost<<C_rootname<<endl;
            }else{
                std::string outname;
                outname = S_rootname.substr(S_rootname.find(S_FRN),S_rootname.find(".root")-S_rootname.find(S_FRN));
                FO_Filelist<<outname<<endl;
                FR_Filelist<<C_rootname<<endl;
            }
            file->Close();
        }
        F_common.close();
        FR_Filelist.close();
        FO_Filelist.close();
    }

}
