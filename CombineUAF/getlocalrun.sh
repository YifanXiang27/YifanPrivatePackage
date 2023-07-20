declare -i TagNum
TagNum=0
declare -i iTag
iTag=0

rm -rf ./Orifilelist/translocaluaf/*.list

Date=""
if [ -n "$1" ]
then
    Date=$1
else
    Date=$(date +"%b_%d_%I_%M")
fi

rm uaflocalrun.sh
rm uafmvcommand.sh
rm filenotexist.txt
cat Notfindfiles.txt  | while read line
do 
    if [ $((${iTag}%5)) -eq 1 ];then 
        echo "COUNT=\$(ps -ef |grep "Task" |grep -v "grep" |wc -l)" >> uaflocalrun.sh
        echo "while [ \$COUNT -gt 10 ]" >> uaflocalrun.sh
        echo "do" >> uaflocalrun.sh
        echo "  sleep 10s" >> uaflocalrun.sh
        echo "  COUNT=\$(ps -ef |grep "Task" |grep -v "grep" |wc -l)" >> uaflocalrun.sh
        echo "done" >> uaflocalrun.sh
    fi
    listarray=(${line//\ \ / })
    #echo "${listarray[0]}"
    TagNum=$((${listarray[1]}))
    TagName=${listarray[0]}

    if [ ! -f "./Orifilelist/filelist/Filelist_${TagName}_${TagNum}.list" ];then
        echo "ERRORMESSAGE : Single Filelist not exist : ${TagName}_${TagNum}" 
        continue
    fi

    route=$(sed -n '1p' Orifilelist/filelist/Filelist_${TagName}_${TagNum}.list)
    routearray=${route:26}
    newroute="/ceph/cms"${routearray}
    #echo "$route"
    #echo "${routearray[0]}"
    #echo "${routearray[1]}"
    echo "$newroute" > Orifilelist/translocaluaf/Filelist_${TagName}_${TagNum}.list
#    sed -e "s/root:\/\/cmsxrootd.fnal.gov\//\/ceph\/cms/" Orifilelist/filelist/Filelist_${TagName}_${TagNum}.list > Orifilelist/translocaluaf/Filelist_${TagName}_${TagNum}.list
    echo "./Task.exe List/Filelist_${TagName}_${TagNum}.list ${TagName}_${Date}_${TagNum} ${TagName} > output_${TagName}.out &" >> uaflocalrun.sh
    echo "mv ${TagName}_${Date}_${TagNum}_results.root ${TagName}_${Date}_${TagNum}.root" >> uafmvcommand.sh
    iTag=$(($iTag+1))
done
