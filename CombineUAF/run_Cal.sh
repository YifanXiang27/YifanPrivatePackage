route=`pwd`

declare -i SAMPLENUM
declare -i CUTNUM
declare -i GROUPNUM
rm getfilelist.sh
rm run_combine.sh
declare -i SampleTag
SampleTag=0
#cat FileNumList.txt | while read line
while read line
do
    SampleTag=$(($SampleTag+1))
    #rm Calculate_inputlist.txt
    myarray=(${line//\ \ \ / })
    filename=${myarray[0]}
    echo "UAFResult/data_${filename}_*.txt"
    if [ $(ls -l ./UAFResult/data_${filename}_* | grep "^-" | wc -l) -eq 0 ]; then
        continue
    fi
    cat UAFResult/data_${filename}_*.txt > Calculate_inputlist.txt
    SAMPLENUM=$(grep -o -i SAMPLE Calculate_inputlist.txt | wc -l)
    CUTNUM=$(grep -o -i number Calculate_inputlist.txt | wc -l)
    if [ $((CUTNUM%SAMPLENUM)) == 0 ]; then
        CUTNUM=CUTNUM/SAMPLENUM
    else
        echo "data.txt file seems wrong. the cut number is not proportional to the file. Check the files"
        continue
    fi
    echo "$filename has $SAMPLENUM rootfiles, with $CUTNUM cuts"

    sed -e "s/NSAMPLE/$SAMPLENUM/g" Calculate_ini.cpp > CALSTEP1.cpp
    sed -e "s/NCUT/$CUTNUM/g" CALSTEP1.cpp > CALSTEP2.cpp
    sed -e "s/NGROUP/$GROUPNUM/g" CALSTEP2.cpp > Calculate.cpp
    rm CALSTEP1.cpp CALSTEP2.cpp

    g++ -g -std=c++17  Calculate.cpp -I$ROOTSYS/include `root-config --cflags ` `root-config --libs ` -lMinuit   -o Calculate.exe
    ./Calculate.exe $filename Calculate_inputlist.txt

    echo "ls ${route}/UAFResult/${filename}_*.root > Filelist_${filename}.list" >> getfilelist.sh
    echo "./Calculate.exe list/Filelist_${filename}.list ${filename}.root ${filename} ${SampleTag}" >> run_combine.sh
done < FileNumList.txt

