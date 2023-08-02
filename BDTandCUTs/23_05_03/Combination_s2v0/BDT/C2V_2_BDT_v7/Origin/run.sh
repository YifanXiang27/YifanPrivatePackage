make clean
make -j
./TMVAClassification
root -l -b -q GetFromTMVA.cpp
root -l -b -q Check.cpp
root -l -b -q Checkbkg.cpp
root -l -b -q draw.cpp
