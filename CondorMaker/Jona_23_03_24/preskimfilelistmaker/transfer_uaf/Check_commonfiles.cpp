#include <TFile.h>
#include <TCanvas.h>
#include <TTree.h>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main(int argc, char** argv){

    ifstream file;
    file.open("FileNumList.txt");

    bool ifContain[10000] = {0};
    std::string datename = argv[1];
    std::string routename = argv[2];

    ofstream wfile;
    wfile.open((routename + "/File_Commonlost.list"),ios::out);

    cout<<"*****************************************"<<endl;
    cout<<"**********Common Lost files Scan*********"<<endl;
    cout<<"*****************************************"<<endl;

    std::string read;
    int fileNum = 0;
    ifstream comfile;
    while(file>>read){
        file>>fileNum;
        if(fileNum > 9999){
            cout<<"Error : please change the maxium file num in Check_commonfiles.cpp"<<endl;
            return 0;
        }
        for(int ii = 0 ; ii < fileNum ; ii ++){
            ifContain[ii] = false;
        }
        std::string tagname = read+"_"+datename;
        int taglength = tagname.length();
        std::string comfilename = routename + "CommonFilelist_" + read + ".list";
        comfile.open(comfilename);
        std::string readcom;
        while(comfile>>readcom){
            string Sfilenum = readcom.substr(taglength + 1);
            int    filenum = std::stoi(Sfilenum);
            ifContain[filenum] = true;
        }
        comfile.close();
        for(int ii = 0 ; ii < fileNum ; ii ++){
            if(!ifContain[ii]){
                cout<<"common file lost : "<<tagname<<"_"<<ii<<endl;
                wfile<<tagname<<"_"<<ii<<endl;
            }
        }
    }

    file.close();
    wfile.close();

}
