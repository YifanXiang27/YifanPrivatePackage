cd  ../../CombineUAF/SigResult/
VBSVVHpath=`pwd`
cd -
ls $VBSVVHpath/*2016APV_results.root >  list/Filelist_VBSVVH2016APV.list
ls $VBSVVHpath/*2016_results.root >  list/Filelist_VBSVVH2016.list
ls $VBSVVHpath/*2017_results.root >  list/Filelist_VBSVVH2017.list
ls $VBSVVHpath/*2018_results.root >  list/Filelist_VBSVVH2018.list



#sed -e '/OUTPUTSOURCE/ r Cutcppfile.cpp' Calculate_ini.cpp > Calculate.cpp
#sed -e '/bbb/ r test2.txt' test1.txt > test3.txt
#g++ -g -std=c++17  Calculate.cpp -I$ROOTSYS/include `root-config --cflags ` `root-config --libs ` -lMinuit   -o Calculate.exe

#
