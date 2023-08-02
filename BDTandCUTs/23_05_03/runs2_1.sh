#cd ScanUAFResult/
ARRWscore=(0.5 0.6 0.7)
ARRHscore=(0.5 0.6 0.7 0.8 0.9)
ARRMlbmin=(150 160 170 180 200)

#ARRBDTLIST=(MD2NTr10 MD2NTr20 MD2NTr50 MD2NTr75 MD2NTr100 )
ARRBDTLIST=(MD2NTr10 MD2NTr20 MD2NTr30 MD2NTr40 MD2NTr50 MD2NTr75 MD2NTr100 MD3NTr10 MD3NTr20 MD3NTr30 MD3NTr40 MD3NTr50 MD3NTr75 MD3NTr100)

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
            cp -r Combination_s2v0 Combination_s2H${indexHscore}W${indexWscore}Mlb${indexMlbmin}
            cd Combination_s2H${indexHscore}W${indexWscore}Mlb${indexMlbmin}
            cd ScanUAFResult
            sed -e "s/HBBSCORE/${Hscore}/g" ./Calculate_ini.cpp > Calculate_s1.cpp
            sed -e "s/WJETSCORE/${Wscore}/g" ./Calculate_s1.cpp > Calculate_s2.cpp
            sed -e "s/MLBMINLOOSE/${Mlbmin}/g" ./Calculate_s2.cpp > Calculate.cpp
            sh run.sh
            cd ../BDT/C2V_2_BDT_v7/
            sh run.sh

            cd ../../..
        done
        indexMlbmin=0
    done
    indexHscore=0
done

