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
for number in 20 30 40 50 60; do
    # Create a new filename with the number and epoch
    ingress_output="./ingress_output_${number}_epoch${EPOCHNUMBER}.log"

    # Create a new filename with the number
    new_filename="./configs/ABCDNet_simpleDisco_VBSVVH1lep_${number}.json"

    # Copy the original file to the new filename
    cp ./configs/ABCDNet_simpleDisco_VBSVVH1lep.json "${new_filename}"

    # Substitute "NUMBER" in the file with the current number
    sed -i "s/BATCHNUMBER/${number}/g" "${new_filename}"

    # Substitute "EPOCHNUMBER" in the file with the EPOCHNUMBER variable
    sed -i "s/EPOCHNUMBER/${EPOCHNUMBER}/g" "${new_filename}"

    # Submit the sbatch ingress command
    sbatch --output="${ingress_output}" batch/ingress.script "configs/ABCDNet_simpleDisco_VBSVVH1lep_${number}.json"
done

sleep 60

# Wait for "Done" in the output files for ingress
for number in 20 30 40 50 60; do
    ingress_output="./ingress_output_${number}_epoch${EPOCHNUMBER}.log"
    wait_for_done "${ingress_output}"
done

# Loop over the desired numbers for training
for number in 20 30 40 50 60; do
    # Create a new filename with the number and epoch
    train_output="./train_output_${number}_epoch${EPOCHNUMBER}.log"

    # Submit the sbatch train command
    sbatch --output="${train_output}" batch/train.script "configs/ABCDNet_simpleDisco_VBSVVH1lep_${number}.json"
done
sleep 60

# Wait for "Epoch EPOCHNUMBER" in the output files for training
for number in 20 30 40 50 60; do
    train_output="./train_output_${number}_epoch${EPOCHNUMBER}.log"
    wait_for_epoch "${train_output}"
done

# Loop over the desired numbers for inference
for number in 20 30 40 50 60; do
    # Submit the sbatch infer command
    sbatch batch/infer.script "configs/ABCDNet_simpleDisco_VBSVVH1lep_${number}.json" --epoch=${EPOCHNUMBER}
done

