rm -rf AnalysisFile_test
cp -r AnalysisFile AnalysisFile_test
echo "/ceph/cms/store/user/jguiang/VBSVHSkim/bkg_1lep_4ak4_or_1ak8_2ak4_v1/TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18NanoAODv9-106X_upgrade2018_realistic_v16_L1v1-v1_NANOAODSIM_bkg_1lep_4ak4_or_1ak8_2ak4_v1//output_1.root" > List_test.list
mv List_test.list AnalysisFile_test
echo "make clean; make -j; ./Task.exe List_test.list TTToSemiLeptonic2018 TTToSemiLeptonic2018" > testrun.sh
mv testrun.sh AnalysisFile_test

