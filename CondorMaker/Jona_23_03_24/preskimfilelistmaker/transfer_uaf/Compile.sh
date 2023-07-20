g++ -g -std=c++17  Check_commonfiles.cpp -I$ROOTSYS/include `root-config --libs ` -lMinuit -o Check_commonfiles.exe
g++ -g -std=c++17  Check_NullZombie.cpp -I$ROOTSYS/include `root-config --libs ` -lMinuit -o Check_NullZombie.exe
