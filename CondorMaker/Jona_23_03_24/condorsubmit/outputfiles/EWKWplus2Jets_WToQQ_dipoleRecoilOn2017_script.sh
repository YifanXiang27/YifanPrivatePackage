#!/bin/bash

OUTPUTNAME=$1
export SCRAM_ARCH=slc6_amd64_gcc481
source /cvmfs/cms.cern.ch/cmsset_default.sh

function stageout {
    COPY_SRC=$1
    COPY_DEST=$2
    #X509_USER_PROXY=/tmp/x509up_u31705
    retries=0
    COPY_STATUS=1
    until [ $retries -ge 3 ]
    do
        echo "Stageout attempt $((retries+1)): env -i X509_USER_PROXY=${X509_USER_PROXY} gfal-copy -p -f -t 7200 --verbose --checksum ADLER32 ${COPY_SRC} ${COPY_DEST}"
        env -i X509_USER_PROXY=${X509_USER_PROXY} gfal-copy -p -f -t 7200 --verbose --checksum ADLER32 ${COPY_SRC} ${COPY_DEST}
        COPY_STATUS=$?
        if [ $COPY_STATUS -ne 0 ]; then
            echo "Failed stageout attempt $((retries+1))"
        else
            echo "Successful stageout with $retries retries"
            break
        fi
        retries=$[$retries+1]
        echo "Sleeping for 5m"
        sleep 5m
    done
    if [ $COPY_STATUS -ne 0 ]; then
        echo "Removing output file because gfal-copy crashed with code $COPY_STATUS"
        env -i X509_USER_PROXY=${X509_USER_PROXY} gfal-rm --verbose ${COPY_DEST}
        REMOVE_STATUS=$?
        if [ $REMOVE_STATUS -ne 0 ]; then
            echo "Uhh, gfal-copy crashed and then the gfal-rm also crashed with code $REMOVE_STATUS"
            echo "You probably have a corrupt file sitting on ceph now."
            exit 1
        fi
    fi
}


if [ -r "$OSGVO_CMSSW_Path"/cmsset_default.sh ]; then
    echo "sourcing environment: source $OSGVO_CMSSW_Path/cmsset_default.sh"
    source "$OSGVO_CMSSW_Path"/cmsset_default.sh
elif [ -r "$OSG_APP"/cmssoft/cms/cmsset_default.sh ]; then
    echo "sourcing environment: source $OSG_APP/cmssoft/cms/cmsset_default.sh"
    source "$OSG_APP"/cmssoft/cms/cmsset_default.sh
elif [ -r /cvmfs/cms.cern.ch/cmsset_default.sh ]; then
    echo "sourcing environment: source /cvmfs/cms.cern.ch/cmsset_default.sh"
    source /cvmfs/cms.cern.ch/cmsset_default.sh
else
    echo "ERROR! Couldn't find $OSGVO_CMSSW_Path/cmsset_default.sh or /cvmfs/cms.cern.ch/cmsset_default.sh or $OSG_APP/cmssoft/cms/cmsset_default.sh"
    exit 1
fi

WORKING_PATH=`pwd`
echo "working path : $WORKING_PATH"

files=$(ls $WORKING_PATH)
for filename in $files
do
    echo $filename 
done

mv Filelist* Filelist.list
cat Filelist.list

tar -xvzf AnalysisFile.tar.gz
cd AnalysisFile
cp ../Filelist.list .
source setup.sh
make clean
make -j
./Task.exe Filelist.list EWKWplus2Jets_WToQQ_dipoleRecoilOn2017 EWKWplus2Jets_WToQQ_dipoleRecoilOn2017 > output_EWKWplus2Jets_WToQQ_dipoleRecoilOn2017.out

g++ -g -std=c++17  GetWeight.cpp -I$ROOTSYS/include `root-config --libs ` -o GetWeight.exe
./GetWeight.exe Filelist.list

#cd CheckFile
#make clean
#make -j
#./Task.exe Filelist.list > check_EWKWplus2Jets_WToQQ_dipoleRecoilOn2017.out
#mv check_EWKWplus2Jets_WToQQ_dipoleRecoilOn2017.out ..
#cd ..

cat Filelist.list

WORKING_PATH=`pwd`
echo "working path : $WORKING_PATH"

echo "this is the output file:"
cat output_EWKWplus2Jets_WToQQ_dipoleRecoilOn2017.out

files=$(ls $WORKING_PATH)
for filename in $files
do
    echo $filename
done

COPY_SRC="file://`pwd`/EWKWplus2Jets_WToQQ_dipoleRecoilOn2017_results.root"
COPY_DEST="davs://redirector.t2.ucsd.edu:1095//store/user/yxiang/Condor_Preselection/result_Jul_20_01_36/EWKWplus2Jets_WToQQ_dipoleRecoilOn2017_Jul_20_01_36_${OUTPUTNAME}.root"
stageout $COPY_SRC $COPY_DEST
COPY_SRC="file://`pwd`/output_EWKWplus2Jets_WToQQ_dipoleRecoilOn2017.out"
COPY_DEST="davs://redirector.t2.ucsd.edu:1095//store/user/yxiang/Condor_Preselection/result_Jul_20_01_36/output_EWKWplus2Jets_WToQQ_dipoleRecoilOn2017_Jul_20_01_36_${OUTPUTNAME}.out"
stageout $COPY_SRC $COPY_DEST
COPY_SRC="file://`pwd`/data_EWKWplus2Jets_WToQQ_dipoleRecoilOn2017.txt"
COPY_DEST="davs://redirector.t2.ucsd.edu:1095//store/user/yxiang/Condor_Preselection/result_Jul_20_01_36/data_EWKWplus2Jets_WToQQ_dipoleRecoilOn2017_Jul_20_01_36_${OUTPUTNAME}.txt"
stageout $COPY_SRC $COPY_DEST
COPY_SRC="file://`pwd`/xsecinformation.txt"
COPY_DEST="davs://redirector.t2.ucsd.edu:1095//store/user/yxiang/Condor_Preselection/result_Jul_20_01_36/xinformation_EWKWplus2Jets_WToQQ_dipoleRecoilOn2017_Jul_20_01_36_${OUTPUTNAME}.out"
stageout $COPY_SRC $COPY_DEST
