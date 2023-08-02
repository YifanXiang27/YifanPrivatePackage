## This package is used to genererate a filelist
### look into run.sh and change the route you want to generate the list

this package will search for all the directories under the route and try to fit the patterns and generate the name tag, year tag automatically. the output will be in filelist/*.list

after above is done, you should run test.sh to calculate the xsec. backupinformation in BackupInformation.txt
if u use the Analysis packages written by me, just simply copy and paste the contents in CPPFIle.txt to Src/Analysis.C

after you run the test.sh, it will skip the null files. And the filelist without these null files are listed in ./List/*.list
it's recommended to use this list instead of ./filelist/*.list

# Instructions

in each directory run run.sh and test.sh

