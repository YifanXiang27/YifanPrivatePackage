rm Had*.root haddbackup.txt
rm -rf hadddir
mkdir hadddir
cp VBS*.root hadddir/
hadd Had_allsig.root hadddir/* >> haddbackup.txt

rm hadddir/*
cp Single*.root hadddir/
cp EGamma*.root hadddir/
hadd Had_alldata.root hadddir/* >> haddbackup.txt


cp *.root hadddir/
rm hadddir/Had_*.root hadddir/VBS*.root hadddir/Single*.root hadddir/EGamma*.root >> haddbackup.txt
hadd Had_allbkg.root hadddir/* >> haddbackup.txt

cd hadddir
mkdir allbkg
mv *.root allbkg/

mkdir TTbar
mkdir TTbar2l
mkdir TTbar1l
mkdir TTbar0l
mkdir TTX
mkdir WJets
mkdir ST
mkdir DY
mkdir DB
mkdir Others

mv allbkg/TTTo*.root TTbar/
hadd ttbar.root TTbar/*.root

mv TTbar/TTTo2L*.root TTbar2l/
hadd ttbar2l.root TTbar2l/*.root

mv TTbar/TTToSemi*.root TTbar1l/
hadd ttbar1l.root TTbar1l/*.root

mv TTbar/TTTo*.root TTbar0l/
hadd ttbar0l.root TTbar0l/*.root

mv allbkg/tt*.root TTX/
mv allbkg/TT*.root TTX/
hadd ttx.root TTX/*.root

mv allbkg/WJets*.root WJets/
hadd wjets.root WJets/*.root

mv allbkg/ST*.root ST/
hadd st.root ST/*.root

mv allbkg/DY*.root DY/
hadd dy.root DY/*.root

cd ..
#rm -rf hadddir

