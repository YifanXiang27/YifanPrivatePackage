#!/bin/bash

EPOCHNUMBER=1000

# Function to wait for "Done" in the output file
function wait_for_done {
    output_file="$1"
    while ! grep -q "Done" "$output_file"; do
        sleep 30
    done
}

# Function to wait for "Epoch EPOCHNUMBER" in the output file
function wait_for_epoch {
    output_file="$1"
    while ! grep -q "Epoch ${EPOCHNUMBER}" "$output_file"; do
        sleep 30
    done
}

# Loop over the desired numbers for ingress
for number in 30 60; do
    # Create a new filename with the number and epoch
    ingress_output="./ingress_output_${number}_epoch${EPOCHNUMBER}.log"

    # Create a new filename with the number
    new_filename="./configs/ABCDNet_simpleDisco_VBSVVH1lep_${number}.json"

    # Copy the original file to the new filename
    cp ./configs/ABCDNet_simpleDisco_VBSVVH1lep.json "${new_filename}"

    # Substitute "NUMBER" in the file with the current number
    sed -i "s/BATNUMBER/${number}/g" "${new_filename}"

    # Substitute "EPOCHNUMBER" in the file with the EPOCHNUMBER variable
    sed -i "s/EPOCHNUMBER/${EPOCHNUMBER}/g" "${new_filename}"

done

