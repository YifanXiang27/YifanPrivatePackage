#!/bin/bash

EPOCHNUMBER=2000

# Loop over the desired numbers
for number in 30 40 50 60; do
    # Create a new filename with the number
    new_filename="./configs/ABCDNet_simpleDisco_VBSVVH1lep_${number}.json"

    # Run the python plot.py script
    python scripts/plot.py "${new_filename}" --epoch="${EPOCHNUMBER}"
done

