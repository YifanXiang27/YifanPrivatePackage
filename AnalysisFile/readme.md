# this package is aiming at pre-selection and branching reduction for root files( to get the small root files)

### create a directory named "Obj" in ./AnalysisFile/allboosted/AnalysisFile/

### all the files here should be able to easily run on condor

### input files (you should be careful) : 
./allboosted/AnalysisFile/

./allboosted/List_sig/ (signal list. You can copy them from the scanning of signal sample in FilelistMaker)

./allboosted/run_sig.sh (signal run command)

./allboosted/cpcommand.sh (talk about it later)

./allboosted/cpAnalysisFile.sh (talk about it later)

feel free to delete/change/move other files

### briefly talking about this packae : 

The core of this package if allboosted/AnalysisFile/

this directory has all the code needed for the preselection.

All the .h file(in ./allboosted/AnalysisFile/Include) should have a .C file (in ./allboosted/AnalysisFile/Src)

The main part of the code is in Analysis.h and Analysis.C

makeHistst aiming at saving the root trees, plots

Analysis.h aiming at reading the initial rootfiles

Analysis.C aiming at doing selections. There are lepton id selections defined in Electron/MuonSelection.h/C in ./allboosted/AnalysisFile/Include and ./allboosted/AnalysisFile/Src


after you finish the coding in ./allboosted/AnalysisFile/ : 
```
sh cpcommand.sh

cd Analysis_sig

{setup environment}

sh run_sig.sh
```

if everything looks allright
create some scripts directories (for example, mkdir test)
cd test
cp /{some route to the Package position}/CondorMaker/{Jona_23_03_24 for example}/condorsubmit/outputfiles/* .
sh run.sh {remember to setup voms}

feel free to submit multiple jobs for same rootfile considering condor sometimes return you null files. what you need to do is simply create two directories here and sh run.sh in CondorMaker twice(make sure you run it 1 mins later because the date in run.sh has accurate to the minute), copy the outputs and sh run.sh.

and that is all. You will get some small root files after this, as well as some data*.txt. I will show u how to use them in later section
