#!/bin/bash

# Set the directory path
directory="./Src/"

rm -rf Result_*
# Loop through all files matching the pattern
for file in "$directory"Analysis_*; do
    # Extract the tag from the file name
    tag=$(basename "$file" | sed 's/^Analysis_//' | sed 's/\.C$//')
    cp ./Src/Analysis_${tag}.C ./Src/Analysis.C
#sed -i 's/for(int ii = 0 ; ii < Nentries ; ii ++){/for(int ii = 0 ; ii < 100 ; ii ++){/g' ./Src/Analysis.C
    make clean
    make -j
    sh run_sig.sh

    while pgrep -x "Task.exe" > /dev/null; do
        sleep 5
    done

    mkdir Result_${tag}
    mv output*.out Result_${tag}
    mv data*.txt Result_${tag}
    mv *_results.root Result_${tag}
    
    echo "Task.exe is not running on the server. Continuing..."
done

