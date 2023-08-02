#!/bin/bash
MAXDEPTH=0
NTREE=0
ARRDEPTH=(2 3 4 5)
#ARRDEPTH=(2 3)
ARRTREE=(10 20 30 40 50 75 100 200 300 400 500 600)
# 700 800)
#ARRTREE=(10 20)
rm totaloutputAB.txt
rm *output*.txt

for MAXDEPTH in "${ARRDEPTH[@]}"
do
    for NTREE in "${ARRTREE[@]}"
    do
        NameDIR=TABMD${MAXDEPTH}NTr${NTREE}PU095
        cp Origin/Check.cpp $NameDIR/
        cp Origin/Checkbkg.cpp $NameDIR/
        cp Origin/Plot1D.h $NameDIR/
        cp Origin/draw.cpp $NameDIR/
        
        cd $NameDIR
        root -l -b -q GetFromTMVA.cpp
        root -l -b -q Check.cpp
        root -l -b -q Checkbkg.cpp
        root -l -b -q drawtest.cpp > output.out
        echo "MaxDepth = ${MAXDEPTH}    NTree = ${NTREE}" >> ../totaloutputAB.txt
        sed -n '/Max\ Lsig/p' output.out >> ../totaloutputAB.txt
        echo "MaxDepth = ${MAXDEPTH}    NTree = ${NTREE}" >> ../secoutputAB.txt
        sed -n '/BDTOUTPUT/p' output.out >> ../secoutputAB.txt
        cp PlotResult/G_BDTresult.png ../PlotResult/plotx_TABMD${MAXDEPTH}NT${NTREE}.png
        cp PlotResult/GA_BDTresult.png ../PlotResult/plotall_TABMD${MAXDEPTH}NT${NTREE}.png
        cp PlotResult/G2_BDTresult.png ../PlotResult/ploty_TABMD${MAXDEPTH}NT${NTREE}.png
        cd ..
    done
done

rm totaloutputBA.txt

for MAXDEPTH in "${ARRDEPTH[@]}"
do
    for NTREE in "${ARRTREE[@]}"
    do
        NameDIR=TBAMD${MAXDEPTH}NTr${NTREE}PU095
        cp Origin/Check.cpp $NameDIR/
        cp Origin/Checkbkg.cpp $NameDIR/
        cp Origin/Plot1D.h $NameDIR/
        cp Origin/draw.cpp $NameDIR/
        cd $NameDIR
        root -l -b -q GetFromTMVA.cpp
        root -l -b -q Check.cpp
        root -l -b -q Checkbkg.cpp
        root -l -b -q drawtrain.cpp > output.out
        echo "MaxDepth = ${MAXDEPTH}    NTree = ${NTREE}" >> ../totaloutputBA.txt
        sed -n '/Max\ Lsig/p' output.out >> ../totaloutputBA.txt
        echo "MaxDepth = ${MAXDEPTH}    NTree = ${NTREE}" >> ../secoutputBA.txt
        sed -n '/BDTOUTPUT/p' output.out >> ../secoutputBA.txt
        cp PlotResult/G_BDTresult.png ../PlotResult/plotx_TBAMD${MAXDEPTH}NT${NTREE}.png
        cp PlotResult/G2_BDTresult.png ../PlotResult/ploty_TBAMD${MAXDEPTH}NT${NTREE}.png
        cp PlotResult/GA_BDTresult.png ../PlotResult/plotall_TBAMD${MAXDEPTH}NT${NTREE}.png
        cd ..
    done
done
