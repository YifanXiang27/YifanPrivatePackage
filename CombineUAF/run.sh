dirclist=()
datelist=()
pathname=$(ls ./Combine)
declare -i itag
ndirc=0
for idirc in $pathname
do
    dirclist[$ndirc]=$idirc
    datelist[$ndirc]=${idirc:7}
    echo "combine ${datelist[$ndirc]}"
    ndirc=$(($ndirc+1))
done

rm UAFResult/*
rm Notfindfiles.txt
rm filenotexist.txt

declare -i filenum
cat FileNumList.txt | while read line
do
    myarray=(${line//\ \ \ / })
    filename=${myarray[0]}
    filenum=$((${myarray[1]}))
    #echo "${myarray[0]}   ${myarray[1]}"
    #echo "$filename   $filenum"
    findfile=false

    for((ifile=0;ifile<$filenum;ifile++)) 
    do
        firstlinefilelist=`head -n +1 ./Orifilelist/filelist/Filelist_${filename}_${ifile}.list`
        helporifilearray=(${firstlinefilelist//\/output/ })
        lastnumtag=${helporifilearray[1]}
        if [ $(grep -c output${lastnumtag} ./Orifilelist/xsecincluded/Filelist_${filename}.list) -eq 0 ]; then
#            echo "not included in xsec"
            echo "SingleFileNotexist : ${filename} ${ifile}" >> filenotexist.txt
            continue
        fi
        findfile=false
        for((idirc=0;idirc<ndirc;idirc++))
        do
            path=./Combine/${dirclist[idirc]}
            if [ -f ${path}/${filename}_${datelist[idirc]}_${ifile}.root ] && [ -f ${path}/data_${filename}_${datelist[idirc]}_${ifile}.txt ];then
                cp ${path}/${filename}_${datelist[idirc]}_${ifile}.root UAFResult/
                #echo "${path}/${filename}_${datelist[idirc]}_${ifile}.root"
                cp ${path}/data_${filename}_${datelist[idirc]}_${ifile}.txt UAFResult/
#                cp ${path}/xinformation_${filename}_${datelist[idirc]}_${ifile}.out UAFResult/
                findfile=true
                break
            fi
        done
        if [ "$findfile" = false ]; then
            echo "${filename}  ${ifile}" >> Notfindfiles.txt
        fi
    done
done


