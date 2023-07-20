initialroute=$1
endroute=$2
sed -i "s/output_//g" ${endroute}/OUTFilelist_DYJetsToLL_M-10to502016.list
sed -i "s/.out//g" ${endroute}/OUTFilelist_DYJetsToLL_M-10to502016.list
sed -i "s/.root//g" ${endroute}/ROOTFilelist_DYJetsToLL_M-10to502016.list
grep -wf ${endroute}/ROOTFilelist_DYJetsToLL_M-10to502016.list ${endroute}/OUTFilelist_DYJetsToLL_M-10to502016.list > ${endroute}/CommonFilelist_DYJetsToLL_M-10to502016.list
diff ${endroute}/ROOTFilelist_DYJetsToLL_M-10to502016.list ${endroute}/OUTFilelist_DYJetsToLL_M-10to502016.list > ${endroute}/DiffFilelist_DYJetsToLL_M-10to502016.list
sed "s#^#${initialroute}#g" ${endroute}/CommonFilelist_DYJetsToLL_M-10to502016.list >  ${endroute}/CFFilelist_DYJetsToLL_M-10to502016.list
sed -i "s#\$#.root#g" ${endroute}/CFFilelist_DYJetsToLL_M-10to502016.list
sed -i "s/output_//g" ${endroute}/OUTFilelist_DYJetsToLL_M-10to502016APV.list
sed -i "s/.out//g" ${endroute}/OUTFilelist_DYJetsToLL_M-10to502016APV.list
sed -i "s/.root//g" ${endroute}/ROOTFilelist_DYJetsToLL_M-10to502016APV.list
grep -wf ${endroute}/ROOTFilelist_DYJetsToLL_M-10to502016APV.list ${endroute}/OUTFilelist_DYJetsToLL_M-10to502016APV.list > ${endroute}/CommonFilelist_DYJetsToLL_M-10to502016APV.list
diff ${endroute}/ROOTFilelist_DYJetsToLL_M-10to502016APV.list ${endroute}/OUTFilelist_DYJetsToLL_M-10to502016APV.list > ${endroute}/DiffFilelist_DYJetsToLL_M-10to502016APV.list
sed "s#^#${initialroute}#g" ${endroute}/CommonFilelist_DYJetsToLL_M-10to502016APV.list >  ${endroute}/CFFilelist_DYJetsToLL_M-10to502016APV.list
sed -i "s#\$#.root#g" ${endroute}/CFFilelist_DYJetsToLL_M-10to502016APV.list
sed -i "s/output_//g" ${endroute}/OUTFilelist_DYJetsToLL_M-10to502017.list
sed -i "s/.out//g" ${endroute}/OUTFilelist_DYJetsToLL_M-10to502017.list
sed -i "s/.root//g" ${endroute}/ROOTFilelist_DYJetsToLL_M-10to502017.list
grep -wf ${endroute}/ROOTFilelist_DYJetsToLL_M-10to502017.list ${endroute}/OUTFilelist_DYJetsToLL_M-10to502017.list > ${endroute}/CommonFilelist_DYJetsToLL_M-10to502017.list
diff ${endroute}/ROOTFilelist_DYJetsToLL_M-10to502017.list ${endroute}/OUTFilelist_DYJetsToLL_M-10to502017.list > ${endroute}/DiffFilelist_DYJetsToLL_M-10to502017.list
sed "s#^#${initialroute}#g" ${endroute}/CommonFilelist_DYJetsToLL_M-10to502017.list >  ${endroute}/CFFilelist_DYJetsToLL_M-10to502017.list
sed -i "s#\$#.root#g" ${endroute}/CFFilelist_DYJetsToLL_M-10to502017.list
sed -i "s/output_//g" ${endroute}/OUTFilelist_DYJetsToLL_M-10to502018.list
sed -i "s/.out//g" ${endroute}/OUTFilelist_DYJetsToLL_M-10to502018.list
sed -i "s/.root//g" ${endroute}/ROOTFilelist_DYJetsToLL_M-10to502018.list
grep -wf ${endroute}/ROOTFilelist_DYJetsToLL_M-10to502018.list ${endroute}/OUTFilelist_DYJetsToLL_M-10to502018.list > ${endroute}/CommonFilelist_DYJetsToLL_M-10to502018.list
diff ${endroute}/ROOTFilelist_DYJetsToLL_M-10to502018.list ${endroute}/OUTFilelist_DYJetsToLL_M-10to502018.list > ${endroute}/DiffFilelist_DYJetsToLL_M-10to502018.list
sed "s#^#${initialroute}#g" ${endroute}/CommonFilelist_DYJetsToLL_M-10to502018.list >  ${endroute}/CFFilelist_DYJetsToLL_M-10to502018.list
sed -i "s#\$#.root#g" ${endroute}/CFFilelist_DYJetsToLL_M-10to502018.list
sed -i "s/output_//g" ${endroute}/OUTFilelist_DYJetsToLL_M-502016.list
sed -i "s/.out//g" ${endroute}/OUTFilelist_DYJetsToLL_M-502016.list
sed -i "s/.root//g" ${endroute}/ROOTFilelist_DYJetsToLL_M-502016.list
grep -wf ${endroute}/ROOTFilelist_DYJetsToLL_M-502016.list ${endroute}/OUTFilelist_DYJetsToLL_M-502016.list > ${endroute}/CommonFilelist_DYJetsToLL_M-502016.list
diff ${endroute}/ROOTFilelist_DYJetsToLL_M-502016.list ${endroute}/OUTFilelist_DYJetsToLL_M-502016.list > ${endroute}/DiffFilelist_DYJetsToLL_M-502016.list
sed "s#^#${initialroute}#g" ${endroute}/CommonFilelist_DYJetsToLL_M-502016.list >  ${endroute}/CFFilelist_DYJetsToLL_M-502016.list
sed -i "s#\$#.root#g" ${endroute}/CFFilelist_DYJetsToLL_M-502016.list
sed -i "s/output_//g" ${endroute}/OUTFilelist_DYJetsToLL_M-502016APV.list
sed -i "s/.out//g" ${endroute}/OUTFilelist_DYJetsToLL_M-502016APV.list
sed -i "s/.root//g" ${endroute}/ROOTFilelist_DYJetsToLL_M-502016APV.list
grep -wf ${endroute}/ROOTFilelist_DYJetsToLL_M-502016APV.list ${endroute}/OUTFilelist_DYJetsToLL_M-502016APV.list > ${endroute}/CommonFilelist_DYJetsToLL_M-502016APV.list
diff ${endroute}/ROOTFilelist_DYJetsToLL_M-502016APV.list ${endroute}/OUTFilelist_DYJetsToLL_M-502016APV.list > ${endroute}/DiffFilelist_DYJetsToLL_M-502016APV.list
sed "s#^#${initialroute}#g" ${endroute}/CommonFilelist_DYJetsToLL_M-502016APV.list >  ${endroute}/CFFilelist_DYJetsToLL_M-502016APV.list
sed -i "s#\$#.root#g" ${endroute}/CFFilelist_DYJetsToLL_M-502016APV.list
sed -i "s/output_//g" ${endroute}/OUTFilelist_DYJetsToLL_M-502017.list
sed -i "s/.out//g" ${endroute}/OUTFilelist_DYJetsToLL_M-502017.list
sed -i "s/.root//g" ${endroute}/ROOTFilelist_DYJetsToLL_M-502017.list
grep -wf ${endroute}/ROOTFilelist_DYJetsToLL_M-502017.list ${endroute}/OUTFilelist_DYJetsToLL_M-502017.list > ${endroute}/CommonFilelist_DYJetsToLL_M-502017.list
diff ${endroute}/ROOTFilelist_DYJetsToLL_M-502017.list ${endroute}/OUTFilelist_DYJetsToLL_M-502017.list > ${endroute}/DiffFilelist_DYJetsToLL_M-502017.list
sed "s#^#${initialroute}#g" ${endroute}/CommonFilelist_DYJetsToLL_M-502017.list >  ${endroute}/CFFilelist_DYJetsToLL_M-502017.list
sed -i "s#\$#.root#g" ${endroute}/CFFilelist_DYJetsToLL_M-502017.list
sed -i "s/output_//g" ${endroute}/OUTFilelist_DYJetsToLL_M-502018.list
sed -i "s/.out//g" ${endroute}/OUTFilelist_DYJetsToLL_M-502018.list
sed -i "s/.root//g" ${endroute}/ROOTFilelist_DYJetsToLL_M-502018.list
grep -wf ${endroute}/ROOTFilelist_DYJetsToLL_M-502018.list ${endroute}/OUTFilelist_DYJetsToLL_M-502018.list > ${endroute}/CommonFilelist_DYJetsToLL_M-502018.list
diff ${endroute}/ROOTFilelist_DYJetsToLL_M-502018.list ${endroute}/OUTFilelist_DYJetsToLL_M-502018.list > ${endroute}/DiffFilelist_DYJetsToLL_M-502018.list
sed "s#^#${initialroute}#g" ${endroute}/CommonFilelist_DYJetsToLL_M-502018.list >  ${endroute}/CFFilelist_DYJetsToLL_M-502018.list
sed -i "s#\$#.root#g" ${endroute}/CFFilelist_DYJetsToLL_M-502018.list
sed -i "s/output_//g" ${endroute}/OUTFilelist_ggZH_HToBB_ZToLL_M-1252016.list
sed -i "s/.out//g" ${endroute}/OUTFilelist_ggZH_HToBB_ZToLL_M-1252016.list
sed -i "s/.root//g" ${endroute}/ROOTFilelist_ggZH_HToBB_ZToLL_M-1252016.list
grep -wf ${endroute}/ROOTFilelist_ggZH_HToBB_ZToLL_M-1252016.list ${endroute}/OUTFilelist_ggZH_HToBB_ZToLL_M-1252016.list > ${endroute}/CommonFilelist_ggZH_HToBB_ZToLL_M-1252016.list
diff ${endroute}/ROOTFilelist_ggZH_HToBB_ZToLL_M-1252016.list ${endroute}/OUTFilelist_ggZH_HToBB_ZToLL_M-1252016.list > ${endroute}/DiffFilelist_ggZH_HToBB_ZToLL_M-1252016.list
sed "s#^#${initialroute}#g" ${endroute}/CommonFilelist_ggZH_HToBB_ZToLL_M-1252016.list >  ${endroute}/CFFilelist_ggZH_HToBB_ZToLL_M-1252016.list
sed -i "s#\$#.root#g" ${endroute}/CFFilelist_ggZH_HToBB_ZToLL_M-1252016.list
sed -i "s/output_//g" ${endroute}/OUTFilelist_ggZH_HToBB_ZToLL_M-1252016APV.list
sed -i "s/.out//g" ${endroute}/OUTFilelist_ggZH_HToBB_ZToLL_M-1252016APV.list
sed -i "s/.root//g" ${endroute}/ROOTFilelist_ggZH_HToBB_ZToLL_M-1252016APV.list
grep -wf ${endroute}/ROOTFilelist_ggZH_HToBB_ZToLL_M-1252016APV.list ${endroute}/OUTFilelist_ggZH_HToBB_ZToLL_M-1252016APV.list > ${endroute}/CommonFilelist_ggZH_HToBB_ZToLL_M-1252016APV.list
diff ${endroute}/ROOTFilelist_ggZH_HToBB_ZToLL_M-1252016APV.list ${endroute}/OUTFilelist_ggZH_HToBB_ZToLL_M-1252016APV.list > ${endroute}/DiffFilelist_ggZH_HToBB_ZToLL_M-1252016APV.list
sed "s#^#${initialroute}#g" ${endroute}/CommonFilelist_ggZH_HToBB_ZToLL_M-1252016APV.list >  ${endroute}/CFFilelist_ggZH_HToBB_ZToLL_M-1252016APV.list
sed -i "s#\$#.root#g" ${endroute}/CFFilelist_ggZH_HToBB_ZToLL_M-1252016APV.list
sed -i "s/output_//g" ${endroute}/OUTFilelist_ggZH_HToBB_ZToLL_M-1252017.list
sed -i "s/.out//g" ${endroute}/OUTFilelist_ggZH_HToBB_ZToLL_M-1252017.list
sed -i "s/.root//g" ${endroute}/ROOTFilelist_ggZH_HToBB_ZToLL_M-1252017.list
grep -wf ${endroute}/ROOTFilelist_ggZH_HToBB_ZToLL_M-1252017.list ${endroute}/OUTFilelist_ggZH_HToBB_ZToLL_M-1252017.list > ${endroute}/CommonFilelist_ggZH_HToBB_ZToLL_M-1252017.list
diff ${endroute}/ROOTFilelist_ggZH_HToBB_ZToLL_M-1252017.list ${endroute}/OUTFilelist_ggZH_HToBB_ZToLL_M-1252017.list > ${endroute}/DiffFilelist_ggZH_HToBB_ZToLL_M-1252017.list
sed "s#^#${initialroute}#g" ${endroute}/CommonFilelist_ggZH_HToBB_ZToLL_M-1252017.list >  ${endroute}/CFFilelist_ggZH_HToBB_ZToLL_M-1252017.list
sed -i "s#\$#.root#g" ${endroute}/CFFilelist_ggZH_HToBB_ZToLL_M-1252017.list
sed -i "s/output_//g" ${endroute}/OUTFilelist_ggZH_HToBB_ZToLL_M-1252018.list
sed -i "s/.out//g" ${endroute}/OUTFilelist_ggZH_HToBB_ZToLL_M-1252018.list
sed -i "s/.root//g" ${endroute}/ROOTFilelist_ggZH_HToBB_ZToLL_M-1252018.list
grep -wf ${endroute}/ROOTFilelist_ggZH_HToBB_ZToLL_M-1252018.list ${endroute}/OUTFilelist_ggZH_HToBB_ZToLL_M-1252018.list > ${endroute}/CommonFilelist_ggZH_HToBB_ZToLL_M-1252018.list
diff ${endroute}/ROOTFilelist_ggZH_HToBB_ZToLL_M-1252018.list ${endroute}/OUTFilelist_ggZH_HToBB_ZToLL_M-1252018.list > ${endroute}/DiffFilelist_ggZH_HToBB_ZToLL_M-1252018.list
sed "s#^#${initialroute}#g" ${endroute}/CommonFilelist_ggZH_HToBB_ZToLL_M-1252018.list >  ${endroute}/CFFilelist_ggZH_HToBB_ZToLL_M-1252018.list
sed -i "s#\$#.root#g" ${endroute}/CFFilelist_ggZH_HToBB_ZToLL_M-1252018.list
