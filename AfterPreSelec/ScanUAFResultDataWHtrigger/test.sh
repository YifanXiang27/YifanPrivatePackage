g++ $(correction config --cflags --ldflags --rpath) -g -std=c++17  Calculate.cpp -I$ROOTSYS/include `root-config --cflags ` `root-config --libs ` -lMinuit   -o Calculate.exe


rm *.root
rm data*.txt
./Calculate.exe list/Filelist_VBSVVH2016APV.list VBSVVH2016APV.root VBSVVH2016APV 1001
./Calculate.exe list/Filelist_VBSVVH2016.list VBSVVH2016.root VBSVVH2016 1002
./Calculate.exe list/Filelist_VBSVVH2017.list VBSVVH2017.root VBSVVH2017 1003
./Calculate.exe list/Filelist_VBSVVH2018.list VBSVVH2018.root VBSVVH2018 1004

