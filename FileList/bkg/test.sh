g++ -g -std=c++17  GetWeight.cpp -I$ROOTSYS/include `root-config --libs ` -lMinuit -o GetWeight.exe
./GetWeight.exe Output2Getlist.txt filelist/
