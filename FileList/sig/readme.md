
#### run on the signal skim and create the scripts

```
sh getlist.sh /ceph/cms/store/user/jguiang/VBSVHSkim/sig_1lep_4ak4_or_1ak8_2ak4_v1/
g++ -g -std=c++17  GetWeight.cpp -I$ROOTSYS/include `root-config --libs ` -lMinuit -o GetWeight.exe
./GetWeight.exe Output2Getlist.txt filelist/
```
