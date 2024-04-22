#rm -rf  dataset*
SETNAME=MD2NTr100
cp -r ../../../Combination_s2H1W3Mlb4_R25/BDT/C2V_2_BDT_v7/TBA${SETNAME}PU095/dataset dataset_BA
cp -r ../../../Combination_s2H1W3Mlb4_R25/BDT/C2V_2_BDT_v7/TAB${SETNAME}PU095/dataset dataset_AB
rm -rf UAFResult/*
#cp /Users/yxiang/Analysis/result/23_03_19_corrtest/ScanUAFResultData/Had_*.root UAFResult
cp ../../ScanUAFResult/Had_allsig.root UAFResult
cp ../../ScanUAFResult/Had_alldata.root UAFResult
cp ../../ScanUAFResult/Had_allbkg.root UAFResult

cp ../../ScanUAFResult/hadddir/*.root UAFResult

