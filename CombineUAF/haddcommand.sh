rm -rf hadddir 

mkdir hadddir
cd hadddir
mkdir allbkg
mkdir TTbar
mkdir TTX
mkdir WJets
mkdir ST
mkdir DY
mkdir DB
mkdir Others
cp ../UAFResult/*.root ./allbkg/
hadd allbkg.root allbkg/*.root

mv allbkg/TTTo*.root TTbar/
hadd ttbar.root TTbar/*.root

mv allbkg/tt*.root TTX/
mv allbkg/TT*.root TTX/
hadd ttx.root TTX/*.root

mv allbkg/WJets*.root WJets/
hadd wjets.root WJets/*.root

mv allbkg/ST*.root ST/
hadd st.root ST/*.root

mv allbkg/DY*.root DY/
hadd dy.root DY/*.root
:<<!
mv allbkg/VBFWH*.root DB/
mv allbkg/VH*.root DB/
mv allbkg/WWTo*.root DB/
mv allbkg/WZJJ*.root DB/
mv allbkg/WZTo*.root DB/
mv allbkg/WminusH*.root DB/
mv allbkg/WplusH*.root DB/
mv allbkg/ZH*.root DB/
mv allbkg/ZZJJ*.root DB/
mv allbkg/ZZTo*.root DB/
mv allbkg/ggZH*.root DB/
hadd db.root DB/*.root
!
mv allbkg/*.root Others/
hadd others.root Others/*.root

