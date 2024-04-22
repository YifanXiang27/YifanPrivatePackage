g++ -g -std=c++17  Calculate.cpp -I$ROOTSYS/include `root-config --cflags ` `root-config --libs ` -lTMVA -lMinuit   -o Calculate.exe

#./Calculate.exe UAFResult/Had_data.root PlotResult/data.root
#sh cpcommand.sh


echo "SampleName alldata"
./Calculate.exe UAFResult/Had_alldata.root PlotResult/data.root
#echo "Samplename allbkg"
#./Calculate.exe UAFResult/Had_allbkg.root PlotResult/allbkg.root
#echo "Samplename allsig"
#./Calculate.exe UAFResult/Had_allsig.root PlotResult/allsig.root
:<<!
echo "Samplename dy"
./Calculate.exe UAFResult/dy.root PlotResult/dy.root
echo "Samplename st"
./Calculate.exe UAFResult/st.root PlotResult/st.root
echo "Samplename ttbar"
./Calculate.exe UAFResult/ttbar.root PlotResult/ttbar.root
echo "Samplename ttbar2l"
./Calculate.exe UAFResult/ttbar2l.root PlotResult/ttbar2l.root
echo "Samplename ttbar1l"
./Calculate.exe UAFResult/ttbar1l.root PlotResult/ttbar1l.root
echo "Samplename ttbar0l"
./Calculate.exe UAFResult/ttbar0l.root PlotResult/ttbar0l.root
echo "Samplename ttx"
./Calculate.exe UAFResult/ttx.root PlotResult/ttx.root
echo "Samplename wjets"
./Calculate.exe UAFResult/wjets.root PlotResult/wjets.root
!
