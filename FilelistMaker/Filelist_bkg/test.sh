g++ -g -std=c++17  GetWeight.cpp -I$ROOTSYS/include `root-config --libs ` -lMinuit -o GetWeight.exe
rm List/*
./GetWeight.exe Output2Getlist.txt /home/users/yxiang/Filelist/VBSWWH1lep/Backup/Jan_20_12_56/filelist/
