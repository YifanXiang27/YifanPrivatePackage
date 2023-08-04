## Set env (old, but ok)
source /cvmfs/cms.cern.ch/cmsset_default.sh > /dev/null 2>&1
export SCRAM_ARCH=slc6_amd64_gcc700
export CMSSW_VERSION=CMSSW_9_2_0
cd /cvmfs/cms.cern.ch/slc6_amd64_gcc700/cms/cmssw/CMSSW_9_2_0/src
eval `scramv1 runtime -sh`
cd -

