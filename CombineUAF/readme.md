# this package aiming at combine multiple submissions on condor

what you need to do:
copy the filelist to Orifilelist/xsecincluded (should get these files from ./FilelistMakers, and ./List/* is recommended instead of ./filelist/*)
copy the FileNumList.txt (Packages/CondorMaker/Jona_23_03_24/preskimfilelistmaker/transfer_uaf) to the current directory (do not need to care about the numbers after each sample name. It will recalculate them in the end. I did not remember why I wrote the code like this LOL)
sh getFileNumlist.sh
mv newFileNumlist.txt FileNumList.txt (simply recalculating the filenumlist to avoid null files)
copy the directories outputed by condor (result_{Date} for default) to ./Combine/
it is recommended to tar first on ceph, cp them and untar the directory. but it is up to u.
remove the .tar.gz files if u have them
leave all the directories seems like "result_*" under ./Combine/
sh run.sh
{you might need to submit some job for local uaf after this. see below for details}
sh run_Cal.sh (produce tables for it, will be easily read in excel)

what it did:
search for all the results_*(up to 10 or 20, I cannot remember, u can check if interested) under ./Combine/
it will check whether the file listed in ./Orifilelist/xsecincluded have at least one copy in the results_* directories. if not, it will generate the command for running it locally on uaf.

if there are some lists you need to run on uaf: go to ~/Packages/CombineUAF/Orifilelist/translocaluaf/ u will find the missing file list that you should run on uaf locally
uaflocalrun.sh shows you the command you should run on uaf

uafmvcommand.sh helps you get the uaflocalrunning rootfiles have the same nameing patterns as the condor sumitted ones.

after you submit the jobs on local uaf, copy and paste them in ./UAFResult

All the files should show up in ./UAFResult/

there is also a haddcomand.sh in this file. sh haddcommand.sh will get you some combined rootfiles in ./hadddir/ BDT and further studies are done based on this.


you will notice that it generate getfilelist.sh and run_Cal.sh after you run all this. run_Cal.sh will be running in later scan. getfilelist.sh helps you get the list under UAFResult/
