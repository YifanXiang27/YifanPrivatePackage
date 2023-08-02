#cd ScanUAFResult/
#ARRWscore=(0.5)
#ARRWscore=(0.5)
#ARRHscore=(0.5)
#ARRMlbmin=(150 160 170 180 190 200)
ARRWscore=(0.5 0.6 0.7)
ARRHscore=(0.5 0.6 0.7 0.8 0.9)
ARRMlbmin=(150 160 170 180 200)

rm -rf run2logfile.log
#ARRBDTLIST=(MD2NTr10 MD2NTr20 MD2NTr50 MD2NTr75 MD2NTr100)
ARRBDTLIST=(MD2NTr10)
#ARRBDTLIST=(MD2NTr10 MD2NTr20 MD2NTr30 MD2NTr40 MD2NTr50 MD2NTr75 MD2NTr100 MD3NTr10 MD3NTr20 MD3NTr30 MD3NTr40 MD3NTr50 MD3NTr75 MD3NTr100 MD4NTr10 MD4NTr20 MD4NTr30 MD4NTr40 MD4NTr50 MD4NTr75 MD4NTr100 MD5NTr10 MD5NTr20 MD5NTr30 MD5NTr40 MD5NTr50 MD5NTr75 MD5NTr100)

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
            cd Combination_s2H${indexHscore}W${indexWscore}Mlb${indexMlbmin}
            cd ScanUAFResult
            cd ../BDT/C2V_2_BDT_v7/
            cd ../../ScanBDTResult/ScanBDTResult_v7
            mypath=$(pwd)
            echo "$mypath"
            echo "Hscore = ${Hscore} Wscore = ${Wscore} Mlb = ${Mlbmin}" >> ../../../run2logfile.log
            RegionAPRE=999.9
            RegionADIF=999.9
            MVACUTVALUEAB=0.53
            indexBDT=0
            cp ../../ScanUAFResult/Had_allbkg.root UAFResult/
            while (( $(echo "$RegionAPRE < 0.3 || $RegionADIF > 0.15 || $RegionADIF < -0.15" | bc -l) )); do
                echo "RegionA diff too large : $RegionADIF" >> ScanLogfile.log
                echo "TEST    $indexBDT   ${#ARRBDTLIST[@]}"
                echo "TEST    $indexBDT   ${#ARRBDTLIST[@]}"
                echo "TEST    $indexBDT   ${#ARRBDTLIST[@]}"
                echo "TEST    $indexBDT   ${#ARRBDTLIST[@]}"
                if [ $indexBDT -ge ${#ARRBDTLIST[@]} ]
                then
                    MVACUTVALUEAB=0.5
                    break
                fi
                echo "${ARRBDTLIST[${indexBDT}]}" >> ../../../run2logfile.log
                echo "cp -r ../../BDT/C2V_2_BDT_v7/TAB${ARRBDTLIST[${indexBDT}]}PU095/dataset dataset_AB"
                rm -rf dataset_AB
                cp -r ../../BDT/C2V_2_BDT_v7/TAB${ARRBDTLIST[${indexBDT}]}PU095/dataset dataset_AB
                indexBDT=$((indexBDT + 1))
                RegionAPRE=999.9
                MVACUTVALUEAB=0.53
                while (( $(echo "$RegionAPRE > 0.6 || $RegionADIF > 0.15 || $RegionADIF < -0.15" | bc -l) )); do
                    if [ $(echo "$RegionAPRE < 0.3" | bc -l) -eq 1 ]
                    then
                        break
                    fi
                    echo "Region A predicted too large: $RegionAPRE" >> ScanLogfile.log
                    MVACUTVALUEAB=$(echo "$MVACUTVALUEAB + 0.01" | bc -l)
                    sed -e "s/MVACUTVALUE/${MVACUTVALUEAB}/g" ./Calculate_ini1.cpp > Calculate.cpp
                    sh run.sh
                    RegionAPRE=$(cat readpredata.txt)
                    RegionADIF=$(cat readdiffdata.txt)
                    if [ $(echo "$RegionADIF > 0.2" | bc -l) -eq 1 ]
                    then
                        break
                    fi
                done
            done

            echo "$indexBDT"
            echo "$indexBDT"
            echo "$indexBDT"
            echo "$indexBDT"
            echo "$indexBDT"
            echo "Region AB BDT at : ${ARRBDTLIST[${indexBDT}]}" >> ../../../run2logfile.log
            RegionAPRE=999.9
            RegionADIF=999.9
            MVACUTVALUEBA=0.53
            indexBDT=0
            while (( $(echo "$RegionAPRE > 0.6 || $RegionADIF > 0.15 || $RegionADIF < -0.15" | bc -l) )); do
                echo "RegionA diff too large : $RegionADIF" >> ScanLogfile.log
                if [ $indexBDT -ge ${#ARRBDTLIST[@]} ]
                then
                    MVACUTVALUEBA=0.5
                    break
                fi
                echo "${ARRBDTLIST[${indexBDT}]} " >> ../../../run2logfile.log
                echo "cp -r ../../BDT/C2V_2_BDT_v7/TBA${ARRBDTLIST[${indexBDT}]}PU095/dataset dataset_BA"
                rm -rf dataset_BA
                cp -r ../../BDT/C2V_2_BDT_v7/TBA${ARRBDTLIST[${indexBDT}]}PU095/dataset dataset_BA
                indexBDT=$((indexBDT + 1))
                RegionAPRE=999.9
                MVACUTVALUEBA=0.53
                while (( $(echo "$RegionAPRE > 0.6 || $RegionADIF > 0.15 || $RegionADIF < -0.15" | bc -l) )); do
                    if [ $(echo "$RegionAPRE < 0.3" | bc -l) -eq 1 ]
                    then
                        break
                    fi
                    echo "Region A predicted too large: $RegionAPRE" >> ScanLogfile.log
                    MVACUTVALUEBA=$(echo "$MVACUTVALUEBA + 0.01" | bc -l)
                    sed -e "s/MVACUTVALUE/${MVACUTVALUEBA}/g" ./Calculate_ini2.cpp > Calculate.cpp
                    sh run.sh
                    RegionAPRE=$(cat readpredata.txt)
                    RegionADIF=$(cat readdiffdata.txt)
                    if [ $(echo "$RegionADIF > 0.2" | bc -l) -eq 1 ]
                    then
                        break
                    fi
                done
            done

            echo "Region BA BDT at : ${ARRBDTLIST[${indexBDT}]}" >> ../../../run2logfile.log
            if [ $(echo "$MVACUTVALUEAB < 0.5105" | bc -l) -eq 1 ]
            then
                echo "Warning ! RegionAB doesn't find a suitalbe BDT"
                continue
            fi
            if [ $(echo "$MVACUTVALUEBA < 0.5105" | bc -l) -eq 1 ]
            then
                echo "Warning ! RegionBA doesn't find a suitalbe BDT"
                continue
            fi
            echo "AB score = $MVACUTVALUEAB  BA score = $MVACUTVALUEBA" >> ../../../run2logfile.log

            

            sed -e "s/MVACUTVALUEBA/${MVACUTVALUEBA}/g" ./Calculate_ini.cpp > Calculate_s1.cpp
            sed -e "s/MVACUTVALUEAB/${MVACUTVALUEAB}/g" ./Calculate_s1.cpp > Calculate.cpp
            sh run_all.sh >> ../../../run2logfile.log

            cd ../../..
            my_path=$(pwd)
            echo $my_path
            echo "indexMlbmin = $indexMlbmin" 
        done
        indexMlbmin=0
    done
    indexHscore=0
done

