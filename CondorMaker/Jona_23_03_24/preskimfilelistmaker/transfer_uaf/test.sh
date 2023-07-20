rm filelist/*
ROUTE1=""
if [ -n "$1" ]
  then
    ROUTE1=$1
  else
    ROUTE1=/home/users/yxiang/Result_ceph/result_Jul_20_01_36/
fi

ROUTE2=""
if [ -n "$2" ]
  then 
    ROUTE2=$2
  else
    ROUTE2=/home/users/yxiang/Filelist/VBSWWH1lep/Backup/Jul_20_01_36/filelist/
fi



sh getpreskimfilelist.sh $ROUTE1 $ROUTE2
