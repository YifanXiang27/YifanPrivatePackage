#include "State.h"
#include "Analysis.h"

int main(int argc, char **argv){
    if(argc < 2){
        std::cout<<"usage : "<<argv[0]<<" FileType  FileList  FileVersion"<<std::endl;
        return 0;
    }else if(argc == 2){
        std::cout<<"setting File type to "<<argv[1]<<std::endl;
        std::cout<<"setting File list to ./List/filelist.list"<<std::endl;
        std::cout<<"setting File version to 999"<<std::endl;
    }else if(argc == 3){
        std::cout<<"setting File type to "<<argv[1]<<std::endl;
        std::cout<<"setting File list to "<<argv[2]<<std::endl;
        std::cout<<"setting File version to 999"<<std::endl;
    }else if(argc == 4){
        std::cout<<"setting File type to "<<argv[1]<<std::endl;
        std::cout<<"setting File list to "<<argv[2]<<std::endl;
        std::cout<<"setting File version to "<<argv[3]<<std::endl;
    }else{
        std::cout<<"input argc > 5 error!"<<std::endl;
        return 0;
    }
    ifstream infile;
    infile.open(argv[1],ios::in);

    int count = 0;
    cout<<"*********************************"<<endl;
    cout<<"*********Analysis Begin**********"<<endl;
    cout<<"*********************************"<<endl;
    cout<<endl;

    TString InputRoot;
    Analysis Run(argv[1],argv[2],argv[3]);

    while(infile>>InputRoot){
        count ++;
        cout<<"start loop file "<<count<<endl;
        cout<<"opening "<<InputRoot<<endl;
        TString RootAdd = (TString)InputRoot;
        Run.Initial(RootAdd,count,argv[3]);
        Run.Loop(argv[2],argv[3]);
        Run.End(count);
        cout<<"end loop file"<<endl;
    }
    Run.Output();
    Run.OutputTable(argv[2]);
    Run.Finish(count);
    cout<<endl;
    cout<<"*********************************"<<endl;
    cout<<"*********Analysis End************"<<endl;
    cout<<"*********************************"<<endl;
    return 1;
}
