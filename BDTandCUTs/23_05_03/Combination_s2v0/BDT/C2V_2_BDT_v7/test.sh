#!/bin/bash
MAXDEPTH=0
NTREE=0
ARRDEPTH=(2)
#ARRDEPTH=(2 3)
ARRTREE=(10)
# 700 800)
#ARRTREE=(10 20)
rm *output*.txt

for MAXDEPTH in "${ARRDEPTH[@]}"
do
    for NTREE in "${ARRTREE[@]}"
    do
        NameDIR=TABMD${MAXDEPTH}NTr${NTREE}PU095
        cp -r Origin $NameDIR
        cd $NameDIR
        sed  -e "s/CHANGEMAXDEPTH/${MAXDEPTH}/g" ./TMVAClassification_ori.C > ./TMVAClassification_step1.C
        sed -e "s/CHANGENTREES/${NTREE}/g" ./TMVAClassification_step1.C > ./TMVAClassification_step2.C
        sed -e "s/CHANGEORITREEA/trainEvents/g" ./TMVAClassification_step2.C > ./TMVAClassification_step3.C
        sed -e "s/CHANGEORITREEB/testEvents/g" ./TMVAClassification_step3.C > ./TMVAClassification.C
        rm TMVAClassification_*.C
        rm output.out
        make clean
        make -j
        ./TMVAClassification > TMVAOutput.out
#        cp ../GetFromTMVA.cpp .
#        cp ../Check.cpp .
#        cp ../Checkbkg.cpp .
        #root -l -b -q GetFromTMVA.cpp
        #root -l -b -q Check.cpp
        #root -l -b -q Checkbkg.cpp
        #root -l -b -q drawtest.cpp > output.out
        #sh run.sh > output.out
        #echo "MaxDepth = ${MAXDEPTH}    NTree = ${NTREE}" >> ../totaloutputAB.txt
        #sed -n '/Max\ Lsig/p' output.out >> ../totaloutputAB.txt
        #echo "MaxDepth = ${MAXDEPTH}    NTree = ${NTREE}" >> ../secoutputAB.txt
        #sed -n '/BDTOUTPUT/p' output.out >> ../secoutputAB.txt
        #cp PlotResult/G_BDTresult.png ../PlotResult/plotx_TABMD${MAXDEPTH}NT${NTREE}.png
        #cp PlotResult/GA_BDTresult.png ../PlotResult/plotall_TABMD${MAXDEPTH}NT${NTREE}.png
        #cp PlotResult/G2_BDTresult.png ../PlotResult/ploty_TABMD${MAXDEPTH}NT${NTREE}.png
        cd ..
    done
done


for MAXDEPTH in "${ARRDEPTH[@]}"
do
    for NTREE in "${ARRTREE[@]}"
    do
        NameDIR=TBAMD${MAXDEPTH}NTr${NTREE}PU095
        cp -r Origin $NameDIR
        cd $NameDIR
        sed  -e "s/CHANGEMAXDEPTH/${MAXDEPTH}/g" ./TMVAClassification_ori.C > ./TMVAClassification_step1.C
        sed -e "s/CHANGENTREES/${NTREE}/g" ./TMVAClassification_step1.C > ./TMVAClassification_step2.C
        sed -e "s/CHANGEORITREEA/testEvents/g" ./TMVAClassification_step2.C > ./TMVAClassification_step3.C
        sed -e "s/CHANGEORITREEB/trainEvents/g" ./TMVAClassification_step3.C > ./TMVAClassification.C
        rm TMVAClassification_*.C
        rm output.out
        make clean
        make -j
        ./TMVAClassification > TMVAOutput.out
#        cp ../GetFromTMVA.cpp .
#        cp ../Check.cpp .
#        cp ../Checkbkg.cpp .
        #root -l -b -q GetFromTMVA.cpp
        #root -l -b -q Check.cpp
        #root -l -b -q Checkbkg.cpp
        #root -l -b -q drawtrain.cpp > output.out
        #sh run.sh > output.out
        #echo "MaxDepth = ${MAXDEPTH}    NTree = ${NTREE}" >> ../totaloutputBA.txt
        #sed -n '/Max\ Lsig/p' output.out >> ../totaloutputBA.txt
        #echo "MaxDepth = ${MAXDEPTH}    NTree = ${NTREE}" >> ../secoutputBA.txt
        #sed -n '/BDTOUTPUT/p' output.out >> ../secoutputBA.txt
        #cp PlotResult/G_BDTresult.png ../PlotResult/plotx_TBAMD${MAXDEPTH}NT${NTREE}.png
        #cp PlotResult/G2_BDTresult.png ../PlotResult/ploty_TBAMD${MAXDEPTH}NT${NTREE}.png
        #cp PlotResult/GA_BDTresult.png ../PlotResult/plotall_TBAMD${MAXDEPTH}NT${NTREE}.png
        cd ..
    done
done
