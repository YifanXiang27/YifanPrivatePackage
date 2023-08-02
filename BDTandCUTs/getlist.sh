#!/bin/bash

# Find all directories starting with "23_05_03_checkonMbb_" in the current directory and output to filelist.txt
find . -maxdepth 1 -type d -name "23_05_03_checkonMbb_*" > filelist.txt

