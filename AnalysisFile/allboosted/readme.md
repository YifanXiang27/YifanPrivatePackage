#### for signal - run local

```
rm -rf AnalysisFile_sig
cp -r AnalysisFile AnalysisFile_sig
mkdir List
cp ../../FileList/sig/filelist/*list List
mv List AnalysisFile_sig

cd AnalysisFile_sig 
mkdir Obj

make clean
make -j
rm VBS*_results.root
rm data*VBS*.txt
rm output*VBS*.out
cp ../../../FileList/sig/run_ana.sh . #or where it is
source run_ana.sh 
```


#### bkg or data needs condor

```
mkdir test
cp ../../CondorMaker/DATA/condorsubmit/outputfiles/* test/
cp ../../CondorMaker/DATA/filelist/* /ceph/cms/store/user/legianni/Condor_Preselection/input/Filelist
```

```
mkdir test
cp ../../CondorMaker/MC/condorsubmit/outputfiles/* test/
cp ../../CondorMaker/MC/filelist/* /ceph/cms/store/user/legianni/Condor_Preselection/input/Filelist
```

