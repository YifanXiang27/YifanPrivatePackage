initialroute=$1
endroute=$2
cd ${initialroute}
rm ${endroute}/ROOTFilelist_*.list
rm ${endroute}/OUTFilelist_*.list
ls DYJetsToLL_M-10to502016_Jan_18_09_48*.root >> ${endroute}/ROOTFilelist_DYJetsToLL_M-10to502016.list
ls output_DYJetsToLL_M-10to502016_Jan_18_09_48*.out >> ${endroute}/OUTFilelist_DYJetsToLL_M-10to502016.list
ls DYJetsToLL_M-10to502016APV_Jan_18_09_48*.root >> ${endroute}/ROOTFilelist_DYJetsToLL_M-10to502016APV.list
ls output_DYJetsToLL_M-10to502016APV_Jan_18_09_48*.out >> ${endroute}/OUTFilelist_DYJetsToLL_M-10to502016APV.list
ls DYJetsToLL_M-10to502017_Jan_18_09_48*.root >> ${endroute}/ROOTFilelist_DYJetsToLL_M-10to502017.list
ls output_DYJetsToLL_M-10to502017_Jan_18_09_48*.out >> ${endroute}/OUTFilelist_DYJetsToLL_M-10to502017.list
ls DYJetsToLL_M-10to502018_Jan_18_09_48*.root >> ${endroute}/ROOTFilelist_DYJetsToLL_M-10to502018.list
ls output_DYJetsToLL_M-10to502018_Jan_18_09_48*.out >> ${endroute}/OUTFilelist_DYJetsToLL_M-10to502018.list
ls DYJetsToLL_M-502016_Jan_18_09_48*.root >> ${endroute}/ROOTFilelist_DYJetsToLL_M-502016.list
ls output_DYJetsToLL_M-502016_Jan_18_09_48*.out >> ${endroute}/OUTFilelist_DYJetsToLL_M-502016.list
ls DYJetsToLL_M-502016APV_Jan_18_09_48*.root >> ${endroute}/ROOTFilelist_DYJetsToLL_M-502016APV.list
ls output_DYJetsToLL_M-502016APV_Jan_18_09_48*.out >> ${endroute}/OUTFilelist_DYJetsToLL_M-502016APV.list
ls DYJetsToLL_M-502017_Jan_18_09_48*.root >> ${endroute}/ROOTFilelist_DYJetsToLL_M-502017.list
ls output_DYJetsToLL_M-502017_Jan_18_09_48*.out >> ${endroute}/OUTFilelist_DYJetsToLL_M-502017.list
ls DYJetsToLL_M-502018_Jan_18_09_48*.root >> ${endroute}/ROOTFilelist_DYJetsToLL_M-502018.list
ls output_DYJetsToLL_M-502018_Jan_18_09_48*.out >> ${endroute}/OUTFilelist_DYJetsToLL_M-502018.list
ls ggZH_HToBB_ZToLL_M-1252016_Jan_18_09_48*.root >> ${endroute}/ROOTFilelist_ggZH_HToBB_ZToLL_M-1252016.list
ls output_ggZH_HToBB_ZToLL_M-1252016_Jan_18_09_48*.out >> ${endroute}/OUTFilelist_ggZH_HToBB_ZToLL_M-1252016.list
ls ggZH_HToBB_ZToLL_M-1252016APV_Jan_18_09_48*.root >> ${endroute}/ROOTFilelist_ggZH_HToBB_ZToLL_M-1252016APV.list
ls output_ggZH_HToBB_ZToLL_M-1252016APV_Jan_18_09_48*.out >> ${endroute}/OUTFilelist_ggZH_HToBB_ZToLL_M-1252016APV.list
ls ggZH_HToBB_ZToLL_M-1252017_Jan_18_09_48*.root >> ${endroute}/ROOTFilelist_ggZH_HToBB_ZToLL_M-1252017.list
ls output_ggZH_HToBB_ZToLL_M-1252017_Jan_18_09_48*.out >> ${endroute}/OUTFilelist_ggZH_HToBB_ZToLL_M-1252017.list
ls ggZH_HToBB_ZToLL_M-1252018_Jan_18_09_48*.root >> ${endroute}/ROOTFilelist_ggZH_HToBB_ZToLL_M-1252018.list
ls output_ggZH_HToBB_ZToLL_M-1252018_Jan_18_09_48*.out >> ${endroute}/OUTFilelist_ggZH_HToBB_ZToLL_M-1252018.list
cd -
sh getpreskimfilelist_part2.sh ${initialroute} ${endroute}
sh Compile.sh
./Check_commonfiles.exe Jan_18_09_48 ${endroute}/
./Check_NullZombie.exe Jan_18_09_48 ${endroute}/
