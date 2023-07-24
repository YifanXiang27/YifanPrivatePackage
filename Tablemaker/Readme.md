This package is aiming to use the data provided by Analysis or combine to produce the table in excel automatically.

What u should do once this package is done:
open an excel, 'Data'->'Get Data'->'From text'->{find the txt file that you want to show}->'Get Data'->select Delimited and click 'next'-> select comma and click 'next'->click 'finish'->'import'

what you should do : 
1. cat data*.txt > data.txt (the CombineUAF should produce many files like "data_{samplename}.txt".)
2. cp data.txt to this directory
3. in this directory, doing : sh run.sh; root -l -b -q Calculate.cpp
4. and doing the excel table as described above

What is done by run.sh:
1. it will read the data.txt doing some basic check. for example, if you combine two file with one has 3 weighted number, the other has 2 weighted number, it will output error message.
2. it will read the groupinformation.txt file and calculate how many groups you want to make. please note that you should keep special format for groupinformation for it to read. (will talk aboult it later)
3. it will change some settings in Calculate.cpp to make the table

what is done by Calculate.pp
1. it will read the data.txt and adding all the weighted number(sum number) and weighted error(sqrtsum(error^2))
2. it will generate some txt files for excel to read

the txt files that this packages generate: 
1. exceltable_group.txt : only have the information of groups
2. exceltable_detail_group.txt : same as above but have the error in different rows
3. exceltable.txt : no group information, all the samples in data will be display
4. exceltable_detail.txt : same as above but have error in different rows
5. exceltable_avi.txt : Avi seems insisting on seeing only 3 decimals. So I create a txt file for him. But I'll recommand to use the fully decimal(the above 4 txt files) for bug checks.

the groupinformation.txt format:
{group name} {sample name 1} {sample name 2} {sample name 3} ... END

it's free to use linebreak between group name and sample name as shown in example. Don't forgot to add END.
You are free to have duplicated samples between different group, calculate.cpp will calculate every sample after the group name:
for example, it's ok if you have these line:
group1 sample1 sample2 sample3
group2 sample2 sample4
just make sure you are listing the correct samples after the group

you are free to use some lines created by CondorMaker or Filelist maker here (they are same)
