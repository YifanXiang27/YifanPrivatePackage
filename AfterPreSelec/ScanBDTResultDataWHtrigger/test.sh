SetMVAValue=(0.5 0.51 0.52 0.53 0.54 0.545 0.55 0.555 0.56 0.565 0.57 0.575 0.58)
for imvavalue in "${SetMVAValue[@]}"
do
    sed -e "s/MVAVALUE/${imvavalue}/g" ./Calculate_ini.cpp > ./Calculate.cpp
    g++ -g -std=c++17  Calculate.cpp -I$ROOTSYS/include `root-config --cflags ` `root-config --libs ` -lTMVA -lMinuit   -o Calculate.exe
    echo "Sample testing : MVA Value cut at : $imvavalue"
    ./Calculate.exe UAFResult/Had_allbkg.root PlotResult/allbkg.root
done
