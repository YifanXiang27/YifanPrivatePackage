#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void getoutput() {
    // Open the input and output files
    ifstream infile("output_step4.txt");
    ofstream outfile("output_step5.txt");

    // Read the input file line by line
    string line;
    while (getline(infile, line)) {
        // Check if the line starts with "Hscore"
        if (line.find("Hscore") == 0) {
            // Output the Hscore line to the output file
            outfile << line << endl;

            // Read the next 8 lines
            for (int i = 0; i < 8; i++) {
                getline(infile, line);

                // Check which line we're on and output the relevant number
                if (i == 1 && line.find("Difference_RegionA") == 0) {
                    // Remove leading spaces and output the number
                    line.erase(0, line.find_first_not_of(" "));
                    outfile << line.substr(19) << endl;
                } else if (i == 2 && line.find("Predicted_RegionA") == 0) {
                    // Remove leading spaces and output the number
                    line.erase(0, line.find_first_not_of(" "));
                    outfile << line.substr(18) << endl;
                } else if (i == 3 && line.find("RegionA") == 0) {
                    // Remove leading spaces and output the number
                    line.erase(0, line.find_first_not_of(" "));
                    outfile << line.substr(9) << endl;
                } else if (i == 7 && line.find("RegionA") == 0) {
                    // Remove leading spaces and output the number
                    line.erase(0, line.find_first_not_of(" "));
                    outfile << line.substr(9) << endl;
                }
            }
        }
    }

    // Close the input and output files
    infile.close();
    outfile.close();

    return;
}

