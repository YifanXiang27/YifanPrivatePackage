#!/bin/bash

Tag=$1

declare -i Num
#Num=$(cat scripts/${Tag}.sh |wc -l)
Num=$(cat initialfiles/Filelist_${Tag}.list | wc -l)
#echo "$Num"
#Num=Num-3
#echo "$Num"
Date=$2

sed -e "s/TAG/${Tag}/g" ./condorsubmit/initialfiles/submit.sub > ./middlefiles/Step7.txt
sed -e "s/TAG/${Tag}/g" ./condorsubmit/initialfiles/submit.sh > ./middlefiles/Step9.txt

sed -e "s/NUM/${Num}/g" ./middlefiles/Step7.txt > ./middlefiles/Step8.txt

sed -e "s/DATE/${Date}/g" ./middlefiles/Step8.txt > ./condorsubmit/outputfiles/${Tag}_submit.sub
sed -e "s/DATE/${Date}/g" ./middlefiles/Step9.txt > ./condorsubmit/outputfiles/${Tag}_script.sh

echo "${Tag}   ${Num}" >> ./preskimfilelistmaker/transfer_uaf/FileNumList.txt
