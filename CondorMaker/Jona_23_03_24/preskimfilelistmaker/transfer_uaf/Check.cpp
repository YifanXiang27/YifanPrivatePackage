#include <TROOT.h>
#include <TFile.h>
#include <TCanvas.h>
#include <TTree.h>
#include <iostream>
#include <fstream>
#include <vector>
int main(int argc, char** argv){
    ofstream outputlist;
    outputlist.open(argv[2]);
    ofstream outputfile;
    outputfile.open("Check_notreerootfile.txt",ios::app);
    TTree *tree = NULL;
    TFile *file = TFile::Open(argv[1]);
    tree = (TTree *)file->Get("Events");
    if(tree == NULL)
        outputfile<<argv[1]<<endl;
    else
        outputlist<<argv[1]<<endl;
}
