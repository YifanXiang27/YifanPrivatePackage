sh Compile.sh
awk '{print $1}' ./FileNumList.txt > ./Taglist.txt
cat Taglist.txt | while read line
do
    ./Check1.exe $line
    sort ./filelist/CommonFilelist_${line}.list > ./filelist/Sort_CommonFilelist_${line}.list
    sort ./filelist/FullFilelist_${line}.list > ./filelist/Sort_FullFilelist_${line}.list
done

rm ./filelist/File_Totallost.txt
./Check2.exe

./Check3.exe


rm Taglist.txt
