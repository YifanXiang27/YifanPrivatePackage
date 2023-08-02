#cd ScanUAFResult/
ARRWscore=(0.5 0.6 0.7 0.8 0.9)
ARRHscore=(0.5 0.6 0.7 0.8 0.9)
ARRMlbmin=(150 200 250)

rm totaloutput.txt
indexWscore=0
indexHscore=0
indexMlbmin=0

for Wscore in "${ARRWscore[@]}"
do
    indexWscore=$((indexWscore+1))
    for Hscore in "${ARRHscore[@]}"
    do
        indexHscore=$((indexHscore+1))
        for Mlbmin in "${ARRMlbmin[@]}"
        do
            indexMlbmin=$((indexMlbmin+1))
            cp -r Combination_s1v0 Combination_s1H${indexHscore}W${indexWscore}Mlb${indexMlbmin}
            cd Combination_s1H${indexHscore}W${indexWscore}Mlb${indexMlbmin}
            cd ScanUAFResult
            sed -e "s/HBBSCORE/${Hscore}/g" ./Calculate_ini.cpp > Calculate_s1.cpp
            sed -e "s/WJETSCORE/${Wscore}/g" ./Calculate_s1.cpp > Calculate_s2.cpp
            sed -e "s/MLBMINLOOSE/${Mlbmin}/g" ./Calculate_s2.cpp > Calculate.cpp
            sh run.sh
            cd ../BDT/C2V_2_BDT_v7/
            sh run.sh
            cd ../../ScanBDTResult/ScanBDTResult_v7
            RegionAPRE=999.9
            MVACUTVALUE=0.5
            while (( $(echo "$RegionAPRE > 1.3" | bc -l) )); do
                MVACUTVALUE=$(echo "$MVACUTVALUE + 0.01" | bc -l)
                sed -e "s/MVACUTVALUE/${MVACUTVALUE}/g" ./Calculate_ini.cpp > Calculate.cpp
                sh run.sh
                RegionAPRE=$(cat readdata.txt)
            done
            echo "Wscore = ${Wscore} Hscore = ${Hscore} Mlb = ${Mlbmin}" >> ../../../totaloutput.txt
            sed -n '/Region/p' outputtable.txt >> ../../../totaloutput.txt
            cd ../../..
        done
        indexMlbmin=0
    done
    indexHscore=0
done

