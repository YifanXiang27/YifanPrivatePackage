source ~/setup.sh
cd /ceph/cms/store/user/yxiang/Condor_Preselection/
mkdir error_Jul_20_01_36
mkdir log_Jul_20_01_36
mkdir output_Jul_20_01_36
mkdir result_Jul_20_01_36
cd -
echo " subbmiting DYJetsToLL_M-10to502016APV jobs"
condor_submit DYJetsToLL_M-10to502016APV_submit.sub
echo " subbmiting DYJetsToLL_M-10to502016 jobs"
condor_submit DYJetsToLL_M-10to502016_submit.sub
echo " subbmiting DYJetsToLL_M-10to502017 jobs"
condor_submit DYJetsToLL_M-10to502017_submit.sub
echo " subbmiting DYJetsToLL_M-10to502018 jobs"
condor_submit DYJetsToLL_M-10to502018_submit.sub
echo " subbmiting DYJetsToLL_M-502016APV jobs"
condor_submit DYJetsToLL_M-502016APV_submit.sub
echo " subbmiting DYJetsToLL_M-502016 jobs"
condor_submit DYJetsToLL_M-502016_submit.sub
echo " subbmiting DYJetsToLL_M-502017 jobs"
condor_submit DYJetsToLL_M-502017_submit.sub
echo " subbmiting DYJetsToLL_M-502018 jobs"
condor_submit DYJetsToLL_M-502018_submit.sub
echo " subbmiting EWKWMinus2Jets_WToLNu_M-502016APV jobs"
condor_submit EWKWMinus2Jets_WToLNu_M-502016APV_submit.sub
echo " subbmiting EWKWMinus2Jets_WToLNu_M-502016 jobs"
condor_submit EWKWMinus2Jets_WToLNu_M-502016_submit.sub
echo " subbmiting EWKWMinus2Jets_WToLNu_M-502017 jobs"
condor_submit EWKWMinus2Jets_WToLNu_M-502017_submit.sub
echo " subbmiting EWKWMinus2Jets_WToLNu_M-502018 jobs"
condor_submit EWKWMinus2Jets_WToLNu_M-502018_submit.sub
echo " subbmiting EWKWminus2Jets_WToQQ_dipoleRecoilOn2016APV jobs"
condor_submit EWKWminus2Jets_WToQQ_dipoleRecoilOn2016APV_submit.sub
echo " subbmiting EWKWminus2Jets_WToQQ_dipoleRecoilOn2016 jobs"
condor_submit EWKWminus2Jets_WToQQ_dipoleRecoilOn2016_submit.sub
echo " subbmiting EWKWminus2Jets_WToQQ_dipoleRecoilOn2017 jobs"
condor_submit EWKWminus2Jets_WToQQ_dipoleRecoilOn2017_submit.sub
echo " subbmiting EWKWminus2Jets_WToQQ_dipoleRecoilOn2018 jobs"
condor_submit EWKWminus2Jets_WToQQ_dipoleRecoilOn2018_submit.sub
echo " subbmiting EWKWPlus2Jets_WToLNu_M-502016APV jobs"
condor_submit EWKWPlus2Jets_WToLNu_M-502016APV_submit.sub
echo " subbmiting EWKWPlus2Jets_WToLNu_M-502016 jobs"
condor_submit EWKWPlus2Jets_WToLNu_M-502016_submit.sub
echo " subbmiting EWKWPlus2Jets_WToLNu_M-502017 jobs"
condor_submit EWKWPlus2Jets_WToLNu_M-502017_submit.sub
echo " subbmiting EWKWPlus2Jets_WToLNu_M-502018 jobs"
condor_submit EWKWPlus2Jets_WToLNu_M-502018_submit.sub
echo " subbmiting EWKWplus2Jets_WToQQ_dipoleRecoilOn2016APV jobs"
condor_submit EWKWplus2Jets_WToQQ_dipoleRecoilOn2016APV_submit.sub
echo " subbmiting EWKWplus2Jets_WToQQ_dipoleRecoilOn2016 jobs"
condor_submit EWKWplus2Jets_WToQQ_dipoleRecoilOn2016_submit.sub
echo " subbmiting EWKWplus2Jets_WToQQ_dipoleRecoilOn2017 jobs"
condor_submit EWKWplus2Jets_WToQQ_dipoleRecoilOn2017_submit.sub
echo " subbmiting EWKWplus2Jets_WToQQ_dipoleRecoilOn2018 jobs"
condor_submit EWKWplus2Jets_WToQQ_dipoleRecoilOn2018_submit.sub
echo " subbmiting EWKZ2Jets_ZToLL_M-502016APV jobs"
condor_submit EWKZ2Jets_ZToLL_M-502016APV_submit.sub
echo " subbmiting EWKZ2Jets_ZToLL_M-502016 jobs"
condor_submit EWKZ2Jets_ZToLL_M-502016_submit.sub
echo " subbmiting EWKZ2Jets_ZToLL_M-502017 jobs"
condor_submit EWKZ2Jets_ZToLL_M-502017_submit.sub
echo " subbmiting EWKZ2Jets_ZToLL_M-502018 jobs"
condor_submit EWKZ2Jets_ZToLL_M-502018_submit.sub
echo " subbmiting EWKZ2Jets_ZToNuNu_M-502016APV jobs"
condor_submit EWKZ2Jets_ZToNuNu_M-502016APV_submit.sub
echo " subbmiting EWKZ2Jets_ZToNuNu_M-502016 jobs"
condor_submit EWKZ2Jets_ZToNuNu_M-502016_submit.sub
echo " subbmiting EWKZ2Jets_ZToNuNu_M-502017 jobs"
condor_submit EWKZ2Jets_ZToNuNu_M-502017_submit.sub
echo " subbmiting EWKZ2Jets_ZToNuNu_M-502018 jobs"
condor_submit EWKZ2Jets_ZToNuNu_M-502018_submit.sub
echo " subbmiting EWKZ2Jets_ZToQQ_dipoleRecoilOn2016APV jobs"
condor_submit EWKZ2Jets_ZToQQ_dipoleRecoilOn2016APV_submit.sub
echo " subbmiting EWKZ2Jets_ZToQQ_dipoleRecoilOn2016 jobs"
condor_submit EWKZ2Jets_ZToQQ_dipoleRecoilOn2016_submit.sub
echo " subbmiting EWKZ2Jets_ZToQQ_dipoleRecoilOn2017 jobs"
condor_submit EWKZ2Jets_ZToQQ_dipoleRecoilOn2017_submit.sub
echo " subbmiting EWKZ2Jets_ZToQQ_dipoleRecoilOn2018 jobs"
condor_submit EWKZ2Jets_ZToQQ_dipoleRecoilOn2018_submit.sub
echo " subbmiting ggZH_HToBB_ZToLL_M-1252016APV jobs"
condor_submit ggZH_HToBB_ZToLL_M-1252016APV_submit.sub
echo " subbmiting ggZH_HToBB_ZToLL_M-1252016 jobs"
condor_submit ggZH_HToBB_ZToLL_M-1252016_submit.sub
echo " subbmiting ggZH_HToBB_ZToLL_M-1252017 jobs"
condor_submit ggZH_HToBB_ZToLL_M-1252017_submit.sub
echo " subbmiting ggZH_HToBB_ZToLL_M-1252018 jobs"
condor_submit ggZH_HToBB_ZToLL_M-1252018_submit.sub
echo " subbmiting ST_t-channel_antitop_4f_InclusiveDecays2016APV jobs"
condor_submit ST_t-channel_antitop_4f_InclusiveDecays2016APV_submit.sub
echo " subbmiting ST_t-channel_antitop_4f_InclusiveDecays2016 jobs"
condor_submit ST_t-channel_antitop_4f_InclusiveDecays2016_submit.sub
echo " subbmiting ST_t-channel_antitop_4f_InclusiveDecays2017 jobs"
condor_submit ST_t-channel_antitop_4f_InclusiveDecays2017_submit.sub
echo " subbmiting ST_t-channel_antitop_4f_InclusiveDecays2018 jobs"
condor_submit ST_t-channel_antitop_4f_InclusiveDecays2018_submit.sub
echo " subbmiting ST_t-channel_top_4f_InclusiveDecays2016APV jobs"
condor_submit ST_t-channel_top_4f_InclusiveDecays2016APV_submit.sub
echo " subbmiting ST_t-channel_top_4f_InclusiveDecays2016 jobs"
condor_submit ST_t-channel_top_4f_InclusiveDecays2016_submit.sub
echo " subbmiting ST_t-channel_top_4f_InclusiveDecays2017 jobs"
condor_submit ST_t-channel_top_4f_InclusiveDecays2017_submit.sub
echo " subbmiting ST_t-channel_top_4f_InclusiveDecays2018 jobs"
condor_submit ST_t-channel_top_4f_InclusiveDecays2018_submit.sub
echo " subbmiting ST_tW_antitop_5f_inclusiveDecays2016APV jobs"
condor_submit ST_tW_antitop_5f_inclusiveDecays2016APV_submit.sub
echo " subbmiting ST_tW_antitop_5f_inclusiveDecays2016 jobs"
condor_submit ST_tW_antitop_5f_inclusiveDecays2016_submit.sub
echo " subbmiting ST_tW_antitop_5f_inclusiveDecays2017 jobs"
condor_submit ST_tW_antitop_5f_inclusiveDecays2017_submit.sub
echo " subbmiting ST_tW_antitop_5f_inclusiveDecays2018 jobs"
condor_submit ST_tW_antitop_5f_inclusiveDecays2018_submit.sub
echo " subbmiting ST_tW_top_5f_inclusiveDecays2016APV jobs"
condor_submit ST_tW_top_5f_inclusiveDecays2016APV_submit.sub
echo " subbmiting ST_tW_top_5f_inclusiveDecays2016 jobs"
condor_submit ST_tW_top_5f_inclusiveDecays2016_submit.sub
echo " subbmiting ST_tW_top_5f_inclusiveDecays2017 jobs"
condor_submit ST_tW_top_5f_inclusiveDecays2017_submit.sub
echo " subbmiting ST_tW_top_5f_inclusiveDecays2018 jobs"
condor_submit ST_tW_top_5f_inclusiveDecays2018_submit.sub
echo " subbmiting TTbb_4f_TTTo2L2Nu2016APV jobs"
condor_submit TTbb_4f_TTTo2L2Nu2016APV_submit.sub
echo " subbmiting TTbb_4f_TTTo2L2Nu2016 jobs"
condor_submit TTbb_4f_TTTo2L2Nu2016_submit.sub
echo " subbmiting TTbb_4f_TTTo2L2Nu2017 jobs"
condor_submit TTbb_4f_TTTo2L2Nu2017_submit.sub
echo " subbmiting TTbb_4f_TTTo2L2Nu2018 jobs"
condor_submit TTbb_4f_TTTo2L2Nu2018_submit.sub
echo " subbmiting TTbb_4f_TTToSemiLeptonic2016APV jobs"
condor_submit TTbb_4f_TTToSemiLeptonic2016APV_submit.sub
echo " subbmiting TTbb_4f_TTToSemiLeptonic2016 jobs"
condor_submit TTbb_4f_TTToSemiLeptonic2016_submit.sub
echo " subbmiting TTbb_4f_TTToSemiLeptonic2017 jobs"
condor_submit TTbb_4f_TTToSemiLeptonic2017_submit.sub
echo " subbmiting TTbb_4f_TTToSemiLeptonic2018 jobs"
condor_submit TTbb_4f_TTToSemiLeptonic2018_submit.sub
echo " subbmiting ttHTobb_M1252016APV jobs"
condor_submit ttHTobb_M1252016APV_submit.sub
echo " subbmiting ttHTobb_M1252016 jobs"
condor_submit ttHTobb_M1252016_submit.sub
echo " subbmiting ttHTobb_M1252017 jobs"
condor_submit ttHTobb_M1252017_submit.sub
echo " subbmiting ttHTobb_M1252018 jobs"
condor_submit ttHTobb_M1252018_submit.sub
echo " subbmiting ttHToNonbb_M1252016APV jobs"
condor_submit ttHToNonbb_M1252016APV_submit.sub
echo " subbmiting ttHToNonbb_M1252016 jobs"
condor_submit ttHToNonbb_M1252016_submit.sub
echo " subbmiting ttHToNonbb_M1252017 jobs"
condor_submit ttHToNonbb_M1252017_submit.sub
echo " subbmiting ttHToNonbb_M1252018 jobs"
condor_submit ttHToNonbb_M1252018_submit.sub
echo " subbmiting TTTo2L2Nu2016APV jobs"
condor_submit TTTo2L2Nu2016APV_submit.sub
echo " subbmiting TTTo2L2Nu2016 jobs"
condor_submit TTTo2L2Nu2016_submit.sub
echo " subbmiting TTTo2L2Nu2017 jobs"
condor_submit TTTo2L2Nu2017_submit.sub
echo " subbmiting TTTo2L2Nu2018 jobs"
condor_submit TTTo2L2Nu2018_submit.sub
echo " subbmiting TTToHadronic2016APV jobs"
condor_submit TTToHadronic2016APV_submit.sub
echo " subbmiting TTToHadronic2016 jobs"
condor_submit TTToHadronic2016_submit.sub
echo " subbmiting TTToHadronic2017 jobs"
condor_submit TTToHadronic2017_submit.sub
echo " subbmiting TTToHadronic2018 jobs"
condor_submit TTToHadronic2018_submit.sub
echo " subbmiting TTToSemiLeptonic2016APV jobs"
condor_submit TTToSemiLeptonic2016APV_submit.sub
echo " subbmiting TTToSemiLeptonic2016 jobs"
condor_submit TTToSemiLeptonic2016_submit.sub
echo " subbmiting TTToSemiLeptonic2017 jobs"
condor_submit TTToSemiLeptonic2017_submit.sub
echo " subbmiting TTToSemiLeptonic2018 jobs"
condor_submit TTToSemiLeptonic2018_submit.sub
echo " subbmiting TTWJetsToLNu2016APV jobs"
condor_submit TTWJetsToLNu2016APV_submit.sub
echo " subbmiting TTWJetsToLNu2016 jobs"
condor_submit TTWJetsToLNu2016_submit.sub
echo " subbmiting TTWJetsToLNu2017 jobs"
condor_submit TTWJetsToLNu2017_submit.sub
echo " subbmiting TTWJetsToLNu2018 jobs"
condor_submit TTWJetsToLNu2018_submit.sub
echo " subbmiting TTWW2016APV jobs"
condor_submit TTWW2016APV_submit.sub
echo " subbmiting TTWW2016 jobs"
condor_submit TTWW2016_submit.sub
echo " subbmiting TTWW2017 jobs"
condor_submit TTWW2017_submit.sub
echo " subbmiting TTWW2018 jobs"
condor_submit TTWW2018_submit.sub
echo " subbmiting TTWZ2016APV jobs"
condor_submit TTWZ2016APV_submit.sub
echo " subbmiting TTWZ2016 jobs"
condor_submit TTWZ2016_submit.sub
echo " subbmiting TTWZ2017 jobs"
condor_submit TTWZ2017_submit.sub
echo " subbmiting TTWZ2018 jobs"
condor_submit TTWZ2018_submit.sub
echo " subbmiting TTZToLLNuNu_M-102016APV jobs"
condor_submit TTZToLLNuNu_M-102016APV_submit.sub
echo " subbmiting TTZToLLNuNu_M-102016 jobs"
condor_submit TTZToLLNuNu_M-102016_submit.sub
echo " subbmiting TTZToLLNuNu_M-102017 jobs"
condor_submit TTZToLLNuNu_M-102017_submit.sub
echo " subbmiting TTZToLLNuNu_M-102018 jobs"
condor_submit TTZToLLNuNu_M-102018_submit.sub
echo " subbmiting VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2016APV jobs"
condor_submit VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2016APV_submit.sub
echo " subbmiting VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2016 jobs"
condor_submit VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2016_submit.sub
echo " subbmiting VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2017 jobs"
condor_submit VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2017_submit.sub
echo " subbmiting VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2018 jobs"
condor_submit VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2018_submit.sub
echo " subbmiting VHToNonbb_M1252016APV jobs"
condor_submit VHToNonbb_M1252016APV_submit.sub
echo " subbmiting VHToNonbb_M1252016 jobs"
condor_submit VHToNonbb_M1252016_submit.sub
echo " subbmiting VHToNonbb_M1252017 jobs"
condor_submit VHToNonbb_M1252017_submit.sub
echo " subbmiting VHToNonbb_M1252018 jobs"
condor_submit VHToNonbb_M1252018_submit.sub
echo " subbmiting WJetsToLNu_HT-100To2002016APV jobs"
condor_submit WJetsToLNu_HT-100To2002016APV_submit.sub
echo " subbmiting WJetsToLNu_HT-100To2002016 jobs"
condor_submit WJetsToLNu_HT-100To2002016_submit.sub
echo " subbmiting WJetsToLNu_HT-100To2002017 jobs"
condor_submit WJetsToLNu_HT-100To2002017_submit.sub
echo " subbmiting WJetsToLNu_HT-100To2002018 jobs"
condor_submit WJetsToLNu_HT-100To2002018_submit.sub
echo " subbmiting WJetsToLNu_HT-1200To25002016APV jobs"
condor_submit WJetsToLNu_HT-1200To25002016APV_submit.sub
echo " subbmiting WJetsToLNu_HT-1200To25002016 jobs"
condor_submit WJetsToLNu_HT-1200To25002016_submit.sub
echo " subbmiting WJetsToLNu_HT-1200To25002017 jobs"
condor_submit WJetsToLNu_HT-1200To25002017_submit.sub
echo " subbmiting WJetsToLNu_HT-1200To25002018 jobs"
condor_submit WJetsToLNu_HT-1200To25002018_submit.sub
echo " subbmiting WJetsToLNu_HT-200To4002016APV jobs"
condor_submit WJetsToLNu_HT-200To4002016APV_submit.sub
echo " subbmiting WJetsToLNu_HT-200To4002016 jobs"
condor_submit WJetsToLNu_HT-200To4002016_submit.sub
echo " subbmiting WJetsToLNu_HT-200To4002017 jobs"
condor_submit WJetsToLNu_HT-200To4002017_submit.sub
echo " subbmiting WJetsToLNu_HT-200To4002018 jobs"
condor_submit WJetsToLNu_HT-200To4002018_submit.sub
echo " subbmiting WJetsToLNu_HT-2500ToInf2016APV jobs"
condor_submit WJetsToLNu_HT-2500ToInf2016APV_submit.sub
echo " subbmiting WJetsToLNu_HT-2500ToInf2016 jobs"
condor_submit WJetsToLNu_HT-2500ToInf2016_submit.sub
echo " subbmiting WJetsToLNu_HT-2500ToInf2017 jobs"
condor_submit WJetsToLNu_HT-2500ToInf2017_submit.sub
echo " subbmiting WJetsToLNu_HT-2500ToInf2018 jobs"
condor_submit WJetsToLNu_HT-2500ToInf2018_submit.sub
echo " subbmiting WJetsToLNu_HT-400To6002016APV jobs"
condor_submit WJetsToLNu_HT-400To6002016APV_submit.sub
echo " subbmiting WJetsToLNu_HT-400To6002016 jobs"
condor_submit WJetsToLNu_HT-400To6002016_submit.sub
echo " subbmiting WJetsToLNu_HT-400To6002017 jobs"
condor_submit WJetsToLNu_HT-400To6002017_submit.sub
echo " subbmiting WJetsToLNu_HT-400To6002018 jobs"
condor_submit WJetsToLNu_HT-400To6002018_submit.sub
echo " subbmiting WJetsToLNu_HT-600To8002016APV jobs"
condor_submit WJetsToLNu_HT-600To8002016APV_submit.sub
echo " subbmiting WJetsToLNu_HT-600To8002016 jobs"
condor_submit WJetsToLNu_HT-600To8002016_submit.sub
echo " subbmiting WJetsToLNu_HT-600To8002017 jobs"
condor_submit WJetsToLNu_HT-600To8002017_submit.sub
echo " subbmiting WJetsToLNu_HT-600To8002018 jobs"
condor_submit WJetsToLNu_HT-600To8002018_submit.sub
echo " subbmiting WJetsToLNu_HT-70To1002016APV jobs"
condor_submit WJetsToLNu_HT-70To1002016APV_submit.sub
echo " subbmiting WJetsToLNu_HT-70To1002016 jobs"
condor_submit WJetsToLNu_HT-70To1002016_submit.sub
echo " subbmiting WJetsToLNu_HT-70To1002017 jobs"
condor_submit WJetsToLNu_HT-70To1002017_submit.sub
echo " subbmiting WJetsToLNu_HT-70To1002018 jobs"
condor_submit WJetsToLNu_HT-70To1002018_submit.sub
echo " subbmiting WJetsToLNu_HT-800To12002016APV jobs"
condor_submit WJetsToLNu_HT-800To12002016APV_submit.sub
echo " subbmiting WJetsToLNu_HT-800To12002016 jobs"
condor_submit WJetsToLNu_HT-800To12002016_submit.sub
echo " subbmiting WJetsToLNu_HT-800To12002017 jobs"
condor_submit WJetsToLNu_HT-800To12002017_submit.sub
echo " subbmiting WJetsToLNu_HT-800To12002018 jobs"
condor_submit WJetsToLNu_HT-800To12002018_submit.sub
echo " subbmiting WminusH_HToBB_WToLNu_M-1252016APV jobs"
condor_submit WminusH_HToBB_WToLNu_M-1252016APV_submit.sub
echo " subbmiting WminusH_HToBB_WToLNu_M-1252016 jobs"
condor_submit WminusH_HToBB_WToLNu_M-1252016_submit.sub
echo " subbmiting WminusH_HToBB_WToLNu_M-1252017 jobs"
condor_submit WminusH_HToBB_WToLNu_M-1252017_submit.sub
echo " subbmiting WminusH_HToBB_WToLNu_M-1252018 jobs"
condor_submit WminusH_HToBB_WToLNu_M-1252018_submit.sub
echo " subbmiting WplusH_HToBB_WToLNu_M-1252016APV jobs"
condor_submit WplusH_HToBB_WToLNu_M-1252016APV_submit.sub
echo " subbmiting WplusH_HToBB_WToLNu_M-1252016 jobs"
condor_submit WplusH_HToBB_WToLNu_M-1252016_submit.sub
echo " subbmiting WplusH_HToBB_WToLNu_M-1252017 jobs"
condor_submit WplusH_HToBB_WToLNu_M-1252017_submit.sub
echo " subbmiting WplusH_HToBB_WToLNu_M-1252018 jobs"
condor_submit WplusH_HToBB_WToLNu_M-1252018_submit.sub
echo " subbmiting WWJJToLNuLNu_EWK_noTop2016APV jobs"
condor_submit WWJJToLNuLNu_EWK_noTop2016APV_submit.sub
echo " subbmiting WWJJToLNuLNu_EWK_noTop2016 jobs"
condor_submit WWJJToLNuLNu_EWK_noTop2016_submit.sub
echo " subbmiting WWJJToLNuLNu_EWK_noTop2017 jobs"
condor_submit WWJJToLNuLNu_EWK_noTop2017_submit.sub
echo " subbmiting WWJJToLNuLNu_EWK_noTop2018 jobs"
condor_submit WWJJToLNuLNu_EWK_noTop2018_submit.sub
echo " subbmiting WWTo1L1Nu2Q_4f2016APV jobs"
condor_submit WWTo1L1Nu2Q_4f2016APV_submit.sub
echo " subbmiting WWTo1L1Nu2Q_4f2016 jobs"
condor_submit WWTo1L1Nu2Q_4f2016_submit.sub
echo " subbmiting WWTo1L1Nu2Q_4f2017 jobs"
condor_submit WWTo1L1Nu2Q_4f2017_submit.sub
echo " subbmiting WWTo1L1Nu2Q_4f2018 jobs"
condor_submit WWTo1L1Nu2Q_4f2018_submit.sub
echo " subbmiting WWTo2L2Nu2016APV jobs"
condor_submit WWTo2L2Nu2016APV_submit.sub
echo " subbmiting WWTo2L2Nu2016 jobs"
condor_submit WWTo2L2Nu2016_submit.sub
echo " subbmiting WWTo2L2Nu2017 jobs"
condor_submit WWTo2L2Nu2017_submit.sub
echo " subbmiting WWTo2L2Nu2018 jobs"
condor_submit WWTo2L2Nu2018_submit.sub
echo " subbmiting WWTolnulnu2016APV jobs"
condor_submit WWTolnulnu2016APV_submit.sub
echo " subbmiting WWTolnulnu2016 jobs"
condor_submit WWTolnulnu2016_submit.sub
echo " subbmiting WWTolnulnu2017 jobs"
condor_submit WWTolnulnu2017_submit.sub
echo " subbmiting WWTolnulnu2018 jobs"
condor_submit WWTolnulnu2018_submit.sub
echo " subbmiting WWW_4F2016APV jobs"
condor_submit WWW_4F2016APV_submit.sub
echo " subbmiting WWW_4F2016 jobs"
condor_submit WWW_4F2016_submit.sub
echo " subbmiting WWW_4F2017 jobs"
condor_submit WWW_4F2017_submit.sub
echo " subbmiting WWW_4F2018 jobs"
condor_submit WWW_4F2018_submit.sub
echo " subbmiting WWZ_4F2016APV jobs"
condor_submit WWZ_4F2016APV_submit.sub
echo " subbmiting WWZ_4F2016 jobs"
condor_submit WWZ_4F2016_submit.sub
echo " subbmiting WWZ_4F2017 jobs"
condor_submit WWZ_4F2017_submit.sub
echo " subbmiting WWZ_4F2018 jobs"
condor_submit WWZ_4F2018_submit.sub
echo " subbmiting WZJJ_EWK_InclusivePolarization2016APV jobs"
condor_submit WZJJ_EWK_InclusivePolarization2016APV_submit.sub
echo " subbmiting WZJJ_EWK_InclusivePolarization2016 jobs"
condor_submit WZJJ_EWK_InclusivePolarization2016_submit.sub
echo " subbmiting WZJJ_EWK_InclusivePolarization2017 jobs"
condor_submit WZJJ_EWK_InclusivePolarization2017_submit.sub
echo " subbmiting WZJJ_EWK_InclusivePolarization2018 jobs"
condor_submit WZJJ_EWK_InclusivePolarization2018_submit.sub
echo " subbmiting WZTo1L1Nu2Q_4f2016APV jobs"
condor_submit WZTo1L1Nu2Q_4f2016APV_submit.sub
echo " subbmiting WZTo1L1Nu2Q_4f2016 jobs"
condor_submit WZTo1L1Nu2Q_4f2016_submit.sub
echo " subbmiting WZTo1L1Nu2Q_4f2017 jobs"
condor_submit WZTo1L1Nu2Q_4f2017_submit.sub
echo " subbmiting WZTo1L1Nu2Q_4f2018 jobs"
condor_submit WZTo1L1Nu2Q_4f2018_submit.sub
echo " subbmiting WZTo1L3Nu_4f2016APV jobs"
condor_submit WZTo1L3Nu_4f2016APV_submit.sub
echo " subbmiting WZTo1L3Nu_4f2016 jobs"
condor_submit WZTo1L3Nu_4f2016_submit.sub
echo " subbmiting WZTo1L3Nu_4f2017 jobs"
condor_submit WZTo1L3Nu_4f2017_submit.sub
echo " subbmiting WZTo1L3Nu_4f2018 jobs"
condor_submit WZTo1L3Nu_4f2018_submit.sub
echo " subbmiting WZTo2Q2L_mllmin4p02016APV jobs"
condor_submit WZTo2Q2L_mllmin4p02016APV_submit.sub
echo " subbmiting WZTo2Q2L_mllmin4p02016 jobs"
condor_submit WZTo2Q2L_mllmin4p02016_submit.sub
echo " subbmiting WZTo2Q2L_mllmin4p02017 jobs"
condor_submit WZTo2Q2L_mllmin4p02017_submit.sub
echo " subbmiting WZTo2Q2L_mllmin4p02018 jobs"
condor_submit WZTo2Q2L_mllmin4p02018_submit.sub
echo " subbmiting WZTo3LNu2016APV jobs"
condor_submit WZTo3LNu2016APV_submit.sub
echo " subbmiting WZTo3LNu2016 jobs"
condor_submit WZTo3LNu2016_submit.sub
echo " subbmiting WZTo3LNu2017 jobs"
condor_submit WZTo3LNu2017_submit.sub
echo " subbmiting WZTo3LNu2018 jobs"
condor_submit WZTo3LNu2018_submit.sub
echo " subbmiting WZZ2016APV jobs"
condor_submit WZZ2016APV_submit.sub
echo " subbmiting WZZ2016 jobs"
condor_submit WZZ2016_submit.sub
echo " subbmiting WZZ2017 jobs"
condor_submit WZZ2017_submit.sub
echo " subbmiting WZZ2018 jobs"
condor_submit WZZ2018_submit.sub
echo " subbmiting ZH_HToBB_ZToLL_M-1252016APV jobs"
condor_submit ZH_HToBB_ZToLL_M-1252016APV_submit.sub
echo " subbmiting ZH_HToBB_ZToLL_M-1252016 jobs"
condor_submit ZH_HToBB_ZToLL_M-1252016_submit.sub
echo " subbmiting ZH_HToBB_ZToLL_M-1252017 jobs"
condor_submit ZH_HToBB_ZToLL_M-1252017_submit.sub
echo " subbmiting ZH_HToBB_ZToLL_M-1252018 jobs"
condor_submit ZH_HToBB_ZToLL_M-1252018_submit.sub
echo " subbmiting ZZJJTo4L2016APV jobs"
condor_submit ZZJJTo4L2016APV_submit.sub
echo " subbmiting ZZJJTo4L2016 jobs"
condor_submit ZZJJTo4L2016_submit.sub
echo " subbmiting ZZJJTo4L2017 jobs"
condor_submit ZZJJTo4L2017_submit.sub
echo " subbmiting ZZJJTo4L2018 jobs"
condor_submit ZZJJTo4L2018_submit.sub
echo " subbmiting ZZTo2L2Nu2016APV jobs"
condor_submit ZZTo2L2Nu2016APV_submit.sub
echo " subbmiting ZZTo2L2Nu2016 jobs"
condor_submit ZZTo2L2Nu2016_submit.sub
echo " subbmiting ZZTo2L2Nu2017 jobs"
condor_submit ZZTo2L2Nu2017_submit.sub
echo " subbmiting ZZTo2L2Nu2018 jobs"
condor_submit ZZTo2L2Nu2018_submit.sub
echo " subbmiting ZZTo2Q2L_mllmin4p02016APV jobs"
condor_submit ZZTo2Q2L_mllmin4p02016APV_submit.sub
echo " subbmiting ZZTo2Q2L_mllmin4p02016 jobs"
condor_submit ZZTo2Q2L_mllmin4p02016_submit.sub
echo " subbmiting ZZTo2Q2L_mllmin4p02017 jobs"
condor_submit ZZTo2Q2L_mllmin4p02017_submit.sub
echo " subbmiting ZZTo2Q2L_mllmin4p02018 jobs"
condor_submit ZZTo2Q2L_mllmin4p02018_submit.sub
echo " subbmiting ZZTo4L_M-1toInf2016APV jobs"
condor_submit ZZTo4L_M-1toInf2016APV_submit.sub
echo " subbmiting ZZTo4L_M-1toInf2016 jobs"
condor_submit ZZTo4L_M-1toInf2016_submit.sub
echo " subbmiting ZZTo4L_M-1toInf2017 jobs"
condor_submit ZZTo4L_M-1toInf2017_submit.sub
echo " subbmiting ZZTo4L_M-1toInf2018 jobs"
condor_submit ZZTo4L_M-1toInf2018_submit.sub
echo " subbmiting ZZZ2016APV jobs"
condor_submit ZZZ2016APV_submit.sub
echo " subbmiting ZZZ2016 jobs"
condor_submit ZZZ2016_submit.sub
echo " subbmiting ZZZ2017 jobs"
condor_submit ZZZ2017_submit.sub
echo " subbmiting ZZZ2018 jobs"
condor_submit ZZZ2018_submit.sub
