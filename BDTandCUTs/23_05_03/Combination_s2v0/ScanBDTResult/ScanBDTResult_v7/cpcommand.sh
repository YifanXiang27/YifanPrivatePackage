#rm -rf  dataset*
#SETNAME=MD2NTr10
#cp -r ../../BDT/C2V_2_BDT_v7/TBA${SETNAME}PU095/dataset dataset_BA
#cp -r ../../BDT/C2V_2_BDT_v7/TAB${SETNAME}PU095/dataset dataset_AB
rm -rf UAFResult/*
#cp /Users/yxiang/Analysis/result/23_03_19_corrtest/ScanUAFResultData/Had_*.root UAFResult
cp ../../ScanUAFResult/Had_allsig.root UAFResult
cp ../../ScanUAFResult/Had_allbkg.root UAFResult

cp ../../ScanUAFResult/hadddir/*.root UAFResult

