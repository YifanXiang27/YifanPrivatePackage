# This code is for copy and submitting different random number files


#!/bin/bash

# Check if the correct number of arguments has been passed
if [ "$#" -ne 2 ]; then
  echo "Usage: $0 {start} {end}"
  exit 1
fi

# Assign arguments to variables
start=$1
end=$2

# Loop through numbers in the specified range
for i in $(seq $start $end); do
  # Copy the directory to a new directory with the number appended
  cp -r 23_05_03 "23_05_03_checkonMbb_$i"
  
  # Create a screen session for each directory
  screen -dmS "screen_$i"
  
  # Send commands to the screen session
  screen -S "screen_$i" -X stuff "cd 23_05_03_checkonMbb_$i\n"
  screen -S "screen_$i" -X stuff "source setup_slc7.sh\n"
  screen -S "screen_$i" -X stuff "sh runs2_1.sh > output_runs2_1.out\n"
  screen -S "screen_$i" -X stuff "sh runs2_2.sh > output_runs2_2.out\n"
done

echo "Directories copied and screens created successfully."

