sed '/23_05_03_checkonMbb/d' output.txt > output_step1.txt
sed '/BDT\ at\ /d' output_step1.txt > output_step2.txt
sed '/RegionB\|RegionC\|RegionD/d' output_step2.txt > output_step3.txt

