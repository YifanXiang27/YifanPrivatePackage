rm preskimfilelistmaker/transfer_uaf/getpreskimfilelist*.sh

Date=""
if [ -n "$1" ]
  then
    Date=$1
  else
    Date=$(date +"%b_%d_%I_%M")
fi

echo 'initialroute=$1' >> preskimfilelistmaker/transfer_uaf/getpreskimfilelist.sh
echo 'endroute=$2' >> preskimfilelistmaker/transfer_uaf/getpreskimfilelist.sh
echo "cd \${initialroute}" >> preskimfilelistmaker/transfer_uaf/getpreskimfilelist.sh
echo "rm \${endroute}/ROOTFilelist_*.list" >> preskimfilelistmaker/transfer_uaf/getpreskimfilelist.sh
echo "rm \${endroute}/OUTFilelist_*.list" >> preskimfilelistmaker/transfer_uaf/getpreskimfilelist.sh

echo 'initialroute=$1' >> preskimfilelistmaker/transfer_uaf/getpreskimfilelist_part2.sh
echo 'endroute=$2' >> preskimfilelistmaker/transfer_uaf/getpreskimfilelist_part2.sh

#echo 'initialroute=$1' >> preskimfilelistmaker/transfer_uaf/getpreskimfilelist_part3.sh
#echo 'endroute=$2' >> preskimfilelistmaker/transfer_uaf/getpreskimfilelist_part3.sh

cat list.txt | while read line
do
    echo "ls ${line}_${Date}*.root >> \${endroute}/ROOTFilelist_${line}.list" >> preskimfilelistmaker/transfer_uaf/getpreskimfilelist.sh
    echo "ls output_${line}_${Date}*.out >> \${endroute}/OUTFilelist_${line}.list" >> preskimfilelistmaker/transfer_uaf/getpreskimfilelist.sh

    echo "sed -i \"s/output_//g\" \${endroute}/OUTFilelist_${line}.list" >> preskimfilelistmaker/transfer_uaf/getpreskimfilelist_part2.sh
    echo "sed -i \"s/.out//g\" \${endroute}/OUTFilelist_${line}.list" >> preskimfilelistmaker/transfer_uaf/getpreskimfilelist_part2.sh
    echo "sed -i \"s/.root//g\" \${endroute}/ROOTFilelist_${line}.list" >> preskimfilelistmaker/transfer_uaf/getpreskimfilelist_part2.sh
    echo "grep -wf \${endroute}/ROOTFilelist_${line}.list \${endroute}/OUTFilelist_${line}.list > \${endroute}/CommonFilelist_${line}.list" >> preskimfilelistmaker/transfer_uaf/getpreskimfilelist_part2.sh
    echo "diff \${endroute}/ROOTFilelist_${line}.list \${endroute}/OUTFilelist_${line}.list > \${endroute}/DiffFilelist_${line}.list" >> preskimfilelistmaker/transfer_uaf/getpreskimfilelist_part2.sh
    echo "sed \"s#^#\${initialroute}#g\" \${endroute}/CommonFilelist_${line}.list >  \${endroute}/CFFilelist_${line}.list" >> preskimfilelistmaker/transfer_uaf/getpreskimfilelist_part2.sh
    echo "sed -i \"s#\\\$#.root#g\" \${endroute}/CFFilelist_${line}.list" >> preskimfilelistmaker/transfer_uaf/getpreskimfilelist_part2.sh

done


echo "cd -" >> preskimfilelistmaker/transfer_uaf/getpreskimfilelist.sh
echo "sh getpreskimfilelist_part2.sh \${initialroute} \${endroute}" >> preskimfilelistmaker/transfer_uaf/getpreskimfilelist.sh
echo "sh Compile.sh" >> preskimfilelistmaker/transfer_uaf/getpreskimfilelist.sh
echo "./Check_commonfiles.exe ${Date} \${endroute}/" >> preskimfilelistmaker/transfer_uaf/getpreskimfilelist.sh
echo "./Check_NullZombie.exe ${Date} \${endroute}/" >> preskimfilelistmaker/transfer_uaf/getpreskimfilelist.sh
