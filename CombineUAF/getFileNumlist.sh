declare -i lastnum
declare -i MAXNUM
rm newFileNumlist.txt
cat FileNumList.txt | while read line
do
    myarray=(${line//\ \ \ / })
    filename=${myarray[0]}
    echo "search $filename"
    MAXNUM=`ls -l ./Orifilelist/filelist | grep "Filelist_${filename}_" | wc -l`
    echo $MAXNUM
    echo "$filename   $(($MAXNUM))" >> newFileNumlist.txt
done
#mv newFileNumlist.txt FileNumList.txt
