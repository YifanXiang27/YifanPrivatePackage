#!/bin/bash

Initialfile=$1

cat initialfiles/Filelist_${Initialfile}.list > ./middlefiles/Step1.txt
sed -e "s/\/ceph\/cms/root:\/\/cmsxrootd.fnal.gov\//" ./middlefiles/Step1.txt > ./middlefiles/Step2.txt

declare -i Index=0
declare -i Step=1
cat ./middlefiles/Step2.txt | while read line
do
    echo "${line}" > ./filelist/Filelist_${Initialfile}_${Index}.list
    Index=$((Index + Step))
done

:<<!
cat  initialfiles/$Initialfile |grep "store" > middlefiles/Step1.txt
awk '{print $3}' ./middlefiles/Step1.txt >  ./middlefiles/Step2.txt
sed -e "s/\"/xrdcp\ root:\/\/xcache-redirector.t2.ucsd.edu:2042\//" ./middlefiles/Step2.txt > ./middlefiles/Step3.txt
sed -e "s/\",/\ ./" ./middlefiles/Step3.txt > ./middlefiles/Step4.txt
sed -e "s/\"/root:\/\/cmsxrootd.fnal.gov\//" ./middlefiles/Step2.txt > ./middlefiles/Step5.txt
sed -e "s/\",//" ./middlefiles/Step5.txt > ./middlefiles/Step6.txt
echo "mkdir $Tag" >outputfiles/${Tag}.sh
echo "cd $Tag" >>outputfiles/${Tag}.sh
cat ./middlefiles/Step4.txt >> outputfiles/${Tag}.sh
echo "cd .." >>outputfiles/${Tag}.sh

declare -i Index=0
declare -i Step=1
cat ./middlefiles/Step6.txt | while read line
do
#    echo "Filelist_${Tag}_${Index}.list"
    echo "${line}" > ./filelist/Filelist_${Tag}_${Index}.list
    Index=$((Index + Step))
done
!
