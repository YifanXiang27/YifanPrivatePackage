cp -r AnalysisFile AnalysisFile_sig
cp -r List_sig AnalysisFile_sig/
cp run_sig.sh AnalysisFile_sig/
rm AnalysisFile.tar.gz
tar -cvzf AnalysisFile.tar.gz  AnalysisFile
rm /ceph/cms/store/user/yxiang/Condor_Preselection/input/AnalysisFile.tar.gz
cp AnalysisFile.tar.gz /ceph/cms/store/user/yxiang/Condor_Preselection/input/
cd /ceph/cms/store/user/yxiang/Condor_Preselection/input/
chmod 755 * 
cd -

