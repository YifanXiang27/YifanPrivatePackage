declare -i lastnum
declare -i MAXNUM
rm newFileNumlist.txt
cat FileNumList.txt | while read line
do
    myarray=(${line//\ \ \ / })
    filename=${myarray[0]}
    echo "search $filename"
    MAXNUM=-1
    while read fileroute
    do
        fileroutelist=${fileroute#*\/output_}
        lastnum=$((`echo ${fileroutelist%?????}`))
        if [ $lastnum -gt $MAXNUM ]; then
            MAXNUM=$lastnum
        fi
    done < Orifilelist/xsecincluded/Filelist_${filename}.list
    echo $MAXNUM
    echo "$filename   $(($MAXNUM+1))" >> newFileNumlist.txt
done
#mv newFileNumlist.txt FileNumList.txt
