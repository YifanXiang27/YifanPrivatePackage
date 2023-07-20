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
    F_RNread.open("FileNumList.txt");

    std::string TagName(argv[1]);
    int Num_Total = -999;

    std::string S_FRN;
    while(F_RNread >> S_FRN){
    //    cout<<S_FRN<<endl;
        if(S_FRN == TagName){
            F_RNread >> Num_Total;
            break;
        }
    }
    if(Num_Total == -999) {
        cout<<"Checking cpp file error :  cannot find the sample : "<<TagName<<endl;
        return 0;
    }else if(Num_Total <= 0 ){
        cout<<"Checking cpp file error : Total Number of Samle : "<<TagName<<" is "<<Num_Total<<endl;
        return 0;
    }

    ofstream outputtestfile;
    std::string FileWriteName = "./filelist/FullFilelist_" + TagName + ".list";
    outputtestfile.open(FileWriteName,ios::out);

    for(int ii = 0 ; ii < Num_Total ; ii ++){
        outputtestfile<<TagName<<"_"<<ii<<endl;
    }
}
