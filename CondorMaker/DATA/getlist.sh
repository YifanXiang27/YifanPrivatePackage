ls initialfiles/Filelist*.list > list.txt
sed -i 's/\.list//g' list.txt
#sed -i "" -e "s/\.list//g" list.txt
sed -i 's#initialfiles/Filelist_##g' list.txt
#sed -i "" -e "s/initialfiles\/Filelist_//g" list.txt
rm -f localrun.sh
rm -f uafrun.sh
rm -rf condorsubmit/*.sh
rm -rf middlefiles/*
rm -rf filelist/*.list
rm -rf condorsubmit/outputfiles/*

cat list.txt | while read line
do 
    echo "sh getfile.sh $line" >> localrun.sh
done
sh localrun.sh

echo "source ~/setup.sh" > condorsubmit/outputfiles/run.sh

Date=""
if [ -n "$1" ]
  then
    Date=$1
  else
    Date=$(date +"%b_%d_%I_%M")
fi
echo 'cd /ceph/cms/store/user/legianni/Condor_Preselection/' >> condorsubmit/outputfiles/run.sh
echo "mkdir error_$Date"  >> condorsubmit/outputfiles/run.sh
echo "mkdir log_$Date" >> condorsubmit/outputfiles/run.sh
echo "mkdir output_$Date" >> condorsubmit/outputfiles/run.sh
echo "mkdir result_$Date" >> condorsubmit/outputfiles/run.sh
echo "cd -" >> condorsubmit/outputfiles/run.sh

echo "testing part1*************************"


rm ./preskimfilelistmaker/transfer_uaf/FileNumList.txt
cat list.txt | while read line
do
    sh getcondorfile.sh ${line} ${Date}
    echo "echo \" subbmiting ${line} jobs\"" >> condorsubmit/outputfiles/run.sh
    echo "condor_submit ${line}_submit.sub" >> condorsubmit/outputfiles/run.sh
done

#sh getpreskimcheck.sh $Date

#don't understand
echo "testing part2*************************"
#cp preskimfilelistmaker/initialfiles/* preskimfilelistmaker/transfer_uaf
#cp preskimfilelistmaker/initialfiles/Compile.sh preskimfilelistmaker/transfer_uaf
#sed -e "s/DATE/${Date}/g" ./preskimfilelistmaker/initialfiles/test.sh > ./preskimfilelistmaker/transfer_uaf/test.sh



echo "#########################"
echo "#     Part 2            #"
echo "#########################"
echo "scp /condorsubmit/outputfiles to uaf directory"
echo "in the uaf directory, do :"
echo "*************************"
echo "mkdir CondorSubmit"
echo "cd CondorSubmit"
echo "{copying condorsubmit/outputfiles/* to this directory}"
echo "*************************"

echo "#########################"
echo "#     Part 3            #"
echo "#########################"
echo "To get the preskimed sample filelist: "
echo "in the preskimfilelistmaker/transfer_uaf, there's a file name : getpreskimfilelist.sh"
echo "*************************"
echo "sh getpreskimfilelist.sh {result from condor} {filelist position you want to save}"
echo "*************************"

echo "#########################"
echo "#     Part 3            #"
echo "#########################"
echo "in hadoop, build the folder : "
echo "results_$Date"


rm localrun.sh

