ROUTE1=""
if [ -n "$1" ]
  then
    ROUTE1=$1
  else
    echo "not giving the route!"
    exit 1
fi

ROUTE2=""
if [ -n "$2" ]
  then
    ROUTE2=$2
  else
    ROUTE2=`pwd`
fi

echo "#######################################################"
echo "##################### Start ###########################"
echo "#######################################################"
echo working route : $ROUTE2

cd $ROUTE2
rm list.txt
cd $ROUTE1
ls > $ROUTE2/list.txt

cd $ROUTE2

rm ErrMsgGetlist.txt
g++ -g -std=c++17  CheckList.cpp -I$ROOTSYS/include `root-config --libs ` -lMinuit -o CheckList.exe
./CheckList.exe $ROUTE1 $ROUTE2/list.txt

LineErrMsg=$(wc -l < ErrMsgGetlist.txt)

if test $LineErrMsg -gt 0
  then
    echo "Error Message from CheckList.cpp : "
    cat ErrMsgCheckList.txt
fi
rm -rf filelist
rm run_ana.sh
mkdir filelist
cat Output1Getlist.txt | while read line
do
    array=(${line//,/ })
    ls ${array[0]}/*.root > filelist/Filelist_${array[1]}${array[2]}.list
    echo "./Task.exe List/Filelist_${array[1]}${array[2]}.list ${array[1]}${array[2]} ${array[1]}${array[2]} > output_${array[1]}${array[2]}.out &">>run_ana.sh 
done
