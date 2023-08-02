g++ -g -std=c++17  Calculate.cpp -I$ROOTSYS/include `root-config --cflags ` `root-config --libs ` -lTMVA -lMinuit   -o Calculate.exe

./Calculate.exe
