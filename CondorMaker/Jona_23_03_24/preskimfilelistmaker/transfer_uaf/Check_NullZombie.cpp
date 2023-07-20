#include <TROOT.h>
#include <TFile.h>
#include <TCanvas.h>
#include <TTree.h>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main(int argc, char** argv){
    cout<<"Start Find Null/ Zombie files : "<<endl;

    ifstream file;
    file.open("FileNumList.txt");

    bool ifContain[10000] = {0};
    std::string datename = argv[1];
    std::string routename = argv[2];

    ofstream wfileNull;
    ofstream wfileZombie;

    wfileNull.open("File_NullRoot.list",ios::out);
    wfileZombie.open("File_ZombieRoot.list",ios::out);

    cout<<"*****************************************"<<endl;
    cout<<"********Null or Zombie file Scan*********"<<endl;
    cout<<"*****************************************"<<endl;

    std::string read;
    int fileNum = 0;
    ifstream comfile;
    ofstream wfilelist;

    while(file>>read){
        //cout<<read<<endl;
        file>>fileNum;
        comfile.open((routename + "/CFFilelist_" + read + ".list"));
        wfilelist.open((routename + "/Filelist_" + read + ".list"),ios::out);
        std::string readroot;
        while(comfile>>readroot){
            const char *C_rootname = readroot.c_str();
            TFile f(C_rootname);
            if(f.IsZombie()){
                wfileZombie<<C_rootname<<endl;
                cout<<"Zombie file : "<<C_rootname<<endl;
                f.Close();
                continue;
            }
            f.Close();
            TTree *tree = NULL;
            TFile *file = TFile::Open(C_rootname);
            tree = (TTree *)file->Get("Events");
            if(tree == NULL){
                wfileNull<<C_rootname<<endl;
                cout<<"NULL file : "<<C_rootname<<endl;
                file->Close();
                continue;
            }
            file->Close();
            wfilelist<<C_rootname<<endl;
        }
        comfile.close();
        wfilelist.close();
    }

    file.close();
    wfileNull.close();
    wfileZombie.close();
    wfilelist.close();
}
