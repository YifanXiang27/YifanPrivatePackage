if the ori filelist has changed : go to Orifilelist
do some copy on xsec included files
as well as the original files

#########
sh getFileNumlist.sh
mv newFileNumlist.txt FileNumList.txt
#########


#########
sh run.sh 
#########
Calcualte the total missing files (include the preskimed not succeed one)





#########
sh getlocalrun.sh
#########
generate all the missions that need uaf run locally. should first get the 
filelists included in the xsec calculation in Orifilelist/xsecincluded/

this script will generate two files :  uaflocalrun.sh and uafmvcommand.sh and a filelist in Orifilelist/translocaluaf
both copy to uaf
cp -r Orifilelist/translocaluaf uaf:{Analysisfile}/List
cp uafmvcommand.sh uaf:{Analysisfile}/
cp uaflocalrun.sh uaf:{Analysisfile}/


#########
sh run_Cal.sh
#########
combine the data_a_{number}.txt to data_a.txt
cat data*.txt > data.txt and copy it to table maker to get the final table

