be careful for the file lists in this packages before running.

go into ./Combination_s2v0/ScanUAFResult/list
Copy the getfilelist.sh from PrivatePackage/CombineUAF/getfilelist.sh to this place and run it. it will update the lists.

-----------------------------
cp ./CombineUAF/getfilelist.sh ./BDTandCUTs/Combination_s2v0/ScanUAFResult/list/
cd ./BDTandCUTs/Combination_s2v0/ScanUAFResult/list/
rm -rf *.list
sh getfilelist.sh
cd -
-----------------------------

then u are ready to run the full package! 
(this process takes few hours or even days if u are setting multiple pre-selection stage and random numbers)

-----------------------------
cd BDTandCUTs
sh copy_random.sh {start number} {end number}
#sh copy_random.sh 10 20 #for example
-----------------------------

the example command will copy the 11 files, starting from 10 to 20. each number indicates the random number seed u want to use in splitting the BDT training and testing trees.

here are files u might want to change while running:
./23_05_03/Combination_s2v0/ScanUAFResult/Calculate_ini.cpp
check on this file to see whether u want to change the pre-selection
the result of this package should be easily printed by Tablemaker

./23_05_03/runs2_1.sh and ./23_05_03/runs2_2.sh
the first few lines here indicate the pre-selection stage that u might be interested in.
please keep the pre-selection stage same for both of them.
The reason I'm writing two bash file here is: training a BDT takes too long and applying it is quite fast. so one might want to train a BDT and have some change on scanning BDT result(picking different BDT scores)

