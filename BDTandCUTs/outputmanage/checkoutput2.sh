#!/bin/bash

# Set the filename
filename="output_step3.txt"

# Use awk to extract every other line starting with "Hcore"
awk '/^Hcore/ {getline; print}' $filename > temp.txt

# Use uniq to check for duplicates
if [ $(sort temp.txt | uniq -c | awk '$1 > 1 {print $2}' | wc -l) -eq 0 ]; then
    echo "Every two lines starting with 'Hcore' are the same."
else
    echo "Not all two lines starting with 'Hcore' are the same."
fi

# Clean up temporary file
rm temp.txt


awk '/^Hscore/ {if (NR%2==1) print $0; next} 1' output_step3.txt > output_step4.txt
