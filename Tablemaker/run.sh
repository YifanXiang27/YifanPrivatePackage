declare -i SAMPLENUM
declare -i CUTNUM
SAMPLENUM=$(grep -o -i SAMPLE data.txt | wc -l)
echo "Sample Number : $SAMPLENUM"
CUTNUM=$(grep -o -i number data.txt | wc -l)
echo "total cut Number : $CUTNUM"
#declare -
if [ $((CUTNUM%SAMPLENUM)) == 0 ]; then
    CUTNUM=CUTNUM/SAMPLENUM
else
    echo "data.txt file seems wrong. the cut number is not proportional to the file. Check the files"
    exit
fi
echo "Cut Number : $CUTNUM"

declare -i GROUPNUM
GROUPNUM=$(grep -o -i END groupinformation.txt | wc -l)

sed -e "s/NSAMPLE/$SAMPLENUM/g" Calculate_ini.cpp > CALSTEP1.cpp
sed -e "s/NCUT/$CUTNUM/g" CALSTEP1.cpp > CALSTEP2.cpp
sed -e "s/NGROUP/$GROUPNUM/g" CALSTEP2.cpp > Calculate.cpp

rm CALSTEP1.cpp

echo "please run : "
echo "******************************"
echo "root -l Calculate.cpp"
echo "******************************"
echo "to get the table. Stored in table.txt"


#declare -i Num
#Num=$(grep -o -i SAMPLE data.txt | wc -l)
#echo "Sample Number : $Num"
#for ((i=1 ; i < $Num ; i++))
#do
#    echo "test"
#done
