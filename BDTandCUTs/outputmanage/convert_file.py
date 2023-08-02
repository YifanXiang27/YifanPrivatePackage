# -*- coding: utf-8 -*-
import re

input_file = "output_step5.txt"
output_file = "output_step6.txt"

# Open input and output files
with open(input_file, "r") as f_in, open(output_file, "w") as f_out:
    # Loop through each line of the input file
    arrayvalue=[]
    arrayerror=[]
    for line in f_in:
        # Use regular expressions to extract the values for Hscore, Wscore, and Mlb
        match = re.search(r'Hscore = (\d+\.\d+) Wscore = (\d+\.\d+) Mlb = (\d+)',line)
        if match:
            hscore = match.group(1)
            wscore = match.group(2)
            mlb = match.group(3)
        else :
            columns = line.strip().split()  # Split line into columns
            arrayvalue.append(float(columns[0]))
            arrayerror.append(float(columns[1]))
        if len(arrayvalue) < 4 : continue    
            
        
        output = ""
        for value, error in zip(arrayvalue,arrayerror):
            output += "{:.5f} ± {:.5f}, ".format(value, error)
        output = output.rstrip(", ")
        # Write the output line to the output file
        #f_out.write("H=%s,W=%s,Mlb=%s, %s\n" % (hscore, wscore, mlb, formatted_values_str))
        f_out.write("H={},W={},Mlb={}, {}\n".format(hscore, wscore, mlb, output))

        arrayvalue=[]
        arrayerror=[]
