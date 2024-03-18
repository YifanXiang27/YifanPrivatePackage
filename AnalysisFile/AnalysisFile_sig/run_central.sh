#!/bin/bash

# Set the directory path
directory="./Src/"

cp Src/Analysis_central.C Src/Analysis.C

rm -rf *_results.root
rm -rf data*.txt output*.out

make clean
make -j
sh run_sig.sh


