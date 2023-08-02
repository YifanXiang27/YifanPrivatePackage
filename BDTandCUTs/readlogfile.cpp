#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void readlogfile() {
    string fileListName = "filelist.txt"; // replace with the name of your file list
    ifstream fileList(fileListName);
    if (!fileList) {
        cerr << "Unable to open file list '" << fileListName << "'." << endl;
        return;
    }

    string outputFileName = "output.txt"; // replace with the name of your output file
    ofstream outputFile(outputFileName);
    if (!outputFile) {
        cerr << "Unable to open output file '" << outputFileName << "'." << endl;
        return;
    }

    vector<string> directoryNames;
    string directoryName;
    while (getline(fileList, directoryName)) {
        directoryNames.push_back(directoryName);
    }

    for (const auto& directoryName : directoryNames) {
        string logFileName = directoryName + "/run2logfile.log";
        outputFile<<directoryName<<endl;
        ifstream logFile(logFileName);
        if (!logFile) {
            cerr << "Unable to open log file '" << logFileName << "'." << endl;
            continue;
        }

        string readline_cutvalue;
        string readline_BDTstructure1;
        string readline_BDTstructure2;
        bool found_cutvalue = false;
        bool found_BDTstructure1 = false;
        bool found_BDTstructure2 = false;
        bool found_total = false;
        string line;
        while (getline(logFile, line)) {
            if (line.find("Hscore = ") == 0) {
                readline_cutvalue = line;
                found_cutvalue = true;
                continue;
            }
            if (found_cutvalue) {
                if (line.find("Region AB") == 0) {
                    readline_BDTstructure1 = line;
                }else if(line.find("Region BA") == 0){
                    readline_BDTstructure2 = line;
                }
            }
            if (line.find("total") == 0) {
                outputFile << readline_cutvalue << endl;
                outputFile << readline_BDTstructure1 << endl;
                outputFile << readline_BDTstructure2 << endl;
                outputFile << line << endl;
                for (int i = 0; i < 6 && getline(logFile, line); i++) {
                    outputFile << line << endl;
                }
            }
        }
        logFile.close();
    }

    outputFile.close();

    return;
}

