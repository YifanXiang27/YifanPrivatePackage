#!/bin/bash

EPOCHNUMBER=2000

# Loop over the desired numbers
for number in 30 40 50 60; do
    # Create a new filename with the number
    new_filename="./configs/BCDNet_simpleDisco_VBSVVH1lep_${number}.json"

    # Submit the sbatch scan command
    sbatch batch/scan.script "configs/ABCDNet_simpleDisco_VBSVVH1lep_${number}.json" "${EPOCHNUMBER}"
done

