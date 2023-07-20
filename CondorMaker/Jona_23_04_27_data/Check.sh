declare -i NDAS
NDAS=$(grep -o 'DAS' initialfiles/DYJetsToLL_M-10to502016.txt | wc -l)
Ntag=$(grep -o 'DYJetsToLL_M-10to50' initialfiles/DYJetsToLL_M-10to502016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/DYJetsToLL_M-10to502016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/DYJetsToLL_M-10to502016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! DYJetsToLL_M-10to502016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! DYJetsToLL_M-10to502016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! DYJetsToLL_M-10to502016 has strage files in the file!"
    echo "ERROR! DYJetsToLL_M-10to502016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/DYJetsToLL_M-10to502016APV.txt | wc -l)
Ntag=$(grep -o 'DYJetsToLL_M-10to50' initialfiles/DYJetsToLL_M-10to502016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/DYJetsToLL_M-10to502016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/DYJetsToLL_M-10to502016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! DYJetsToLL_M-10to502016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! DYJetsToLL_M-10to502016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! DYJetsToLL_M-10to502016APV has strage files in the file!"
    echo "ERROR! DYJetsToLL_M-10to502016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/DYJetsToLL_M-10to502017.txt | wc -l)
Ntag=$(grep -o 'DYJetsToLL_M-10to50' initialfiles/DYJetsToLL_M-10to502017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/DYJetsToLL_M-10to502017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/DYJetsToLL_M-10to502017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! DYJetsToLL_M-10to502017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! DYJetsToLL_M-10to502017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! DYJetsToLL_M-10to502017 has strage files in the file!"
    echo "ERROR! DYJetsToLL_M-10to502017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/DYJetsToLL_M-10to502018.txt | wc -l)
Ntag=$(grep -o 'DYJetsToLL_M-10to50' initialfiles/DYJetsToLL_M-10to502018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/DYJetsToLL_M-10to502018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/DYJetsToLL_M-10to502018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! DYJetsToLL_M-10to502018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! DYJetsToLL_M-10to502018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! DYJetsToLL_M-10to502018 has strage files in the file!"
    echo "ERROR! DYJetsToLL_M-10to502018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/DYJetsToLL_M-502016.txt | wc -l)
Ntag=$(grep -o 'DYJetsToLL_M-50' initialfiles/DYJetsToLL_M-502016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/DYJetsToLL_M-502016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/DYJetsToLL_M-502016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! DYJetsToLL_M-502016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! DYJetsToLL_M-502016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! DYJetsToLL_M-502016 has strage files in the file!"
    echo "ERROR! DYJetsToLL_M-502016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/DYJetsToLL_M-502016APV.txt | wc -l)
Ntag=$(grep -o 'DYJetsToLL_M-50' initialfiles/DYJetsToLL_M-502016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/DYJetsToLL_M-502016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/DYJetsToLL_M-502016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! DYJetsToLL_M-502016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! DYJetsToLL_M-502016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! DYJetsToLL_M-502016APV has strage files in the file!"
    echo "ERROR! DYJetsToLL_M-502016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/DYJetsToLL_M-502017.txt | wc -l)
Ntag=$(grep -o 'DYJetsToLL_M-50' initialfiles/DYJetsToLL_M-502017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/DYJetsToLL_M-502017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/DYJetsToLL_M-502017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! DYJetsToLL_M-502017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! DYJetsToLL_M-502017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! DYJetsToLL_M-502017 has strage files in the file!"
    echo "ERROR! DYJetsToLL_M-502017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/DYJetsToLL_M-502018.txt | wc -l)
Ntag=$(grep -o 'DYJetsToLL_M-50' initialfiles/DYJetsToLL_M-502018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/DYJetsToLL_M-502018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/DYJetsToLL_M-502018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! DYJetsToLL_M-502018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! DYJetsToLL_M-502018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! DYJetsToLL_M-502018 has strage files in the file!"
    echo "ERROR! DYJetsToLL_M-502018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKWMinus2Jets_WToLNu_M-502016.txt | wc -l)
Ntag=$(grep -o 'EWKWMinus2Jets_WToLNu_M-50' initialfiles/EWKWMinus2Jets_WToLNu_M-502016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKWMinus2Jets_WToLNu_M-502016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/EWKWMinus2Jets_WToLNu_M-502016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKWMinus2Jets_WToLNu_M-502016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKWMinus2Jets_WToLNu_M-502016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKWMinus2Jets_WToLNu_M-502016 has strage files in the file!"
    echo "ERROR! EWKWMinus2Jets_WToLNu_M-502016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKWMinus2Jets_WToLNu_M-502016APV.txt | wc -l)
Ntag=$(grep -o 'EWKWMinus2Jets_WToLNu_M-50' initialfiles/EWKWMinus2Jets_WToLNu_M-502016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKWMinus2Jets_WToLNu_M-502016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/EWKWMinus2Jets_WToLNu_M-502016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKWMinus2Jets_WToLNu_M-502016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKWMinus2Jets_WToLNu_M-502016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKWMinus2Jets_WToLNu_M-502016APV has strage files in the file!"
    echo "ERROR! EWKWMinus2Jets_WToLNu_M-502016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKWMinus2Jets_WToLNu_M-502017.txt | wc -l)
Ntag=$(grep -o 'EWKWMinus2Jets_WToLNu_M-50' initialfiles/EWKWMinus2Jets_WToLNu_M-502017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKWMinus2Jets_WToLNu_M-502017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/EWKWMinus2Jets_WToLNu_M-502017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKWMinus2Jets_WToLNu_M-502017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKWMinus2Jets_WToLNu_M-502017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKWMinus2Jets_WToLNu_M-502017 has strage files in the file!"
    echo "ERROR! EWKWMinus2Jets_WToLNu_M-502017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKWMinus2Jets_WToLNu_M-502018.txt | wc -l)
Ntag=$(grep -o 'EWKWMinus2Jets_WToLNu_M-50' initialfiles/EWKWMinus2Jets_WToLNu_M-502018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKWMinus2Jets_WToLNu_M-502018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/EWKWMinus2Jets_WToLNu_M-502018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKWMinus2Jets_WToLNu_M-502018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKWMinus2Jets_WToLNu_M-502018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKWMinus2Jets_WToLNu_M-502018 has strage files in the file!"
    echo "ERROR! EWKWMinus2Jets_WToLNu_M-502018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKWPlus2Jets_WToLNu_M-502016.txt | wc -l)
Ntag=$(grep -o 'EWKWPlus2Jets_WToLNu_M-50' initialfiles/EWKWPlus2Jets_WToLNu_M-502016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKWPlus2Jets_WToLNu_M-502016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/EWKWPlus2Jets_WToLNu_M-502016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKWPlus2Jets_WToLNu_M-502016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKWPlus2Jets_WToLNu_M-502016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKWPlus2Jets_WToLNu_M-502016 has strage files in the file!"
    echo "ERROR! EWKWPlus2Jets_WToLNu_M-502016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKWPlus2Jets_WToLNu_M-502016APV.txt | wc -l)
Ntag=$(grep -o 'EWKWPlus2Jets_WToLNu_M-50' initialfiles/EWKWPlus2Jets_WToLNu_M-502016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKWPlus2Jets_WToLNu_M-502016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/EWKWPlus2Jets_WToLNu_M-502016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKWPlus2Jets_WToLNu_M-502016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKWPlus2Jets_WToLNu_M-502016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKWPlus2Jets_WToLNu_M-502016APV has strage files in the file!"
    echo "ERROR! EWKWPlus2Jets_WToLNu_M-502016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKWPlus2Jets_WToLNu_M-502017.txt | wc -l)
Ntag=$(grep -o 'EWKWPlus2Jets_WToLNu_M-50' initialfiles/EWKWPlus2Jets_WToLNu_M-502017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKWPlus2Jets_WToLNu_M-502017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/EWKWPlus2Jets_WToLNu_M-502017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKWPlus2Jets_WToLNu_M-502017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKWPlus2Jets_WToLNu_M-502017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKWPlus2Jets_WToLNu_M-502017 has strage files in the file!"
    echo "ERROR! EWKWPlus2Jets_WToLNu_M-502017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKWPlus2Jets_WToLNu_M-502018.txt | wc -l)
Ntag=$(grep -o 'EWKWPlus2Jets_WToLNu_M-50' initialfiles/EWKWPlus2Jets_WToLNu_M-502018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKWPlus2Jets_WToLNu_M-502018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/EWKWPlus2Jets_WToLNu_M-502018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKWPlus2Jets_WToLNu_M-502018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKWPlus2Jets_WToLNu_M-502018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKWPlus2Jets_WToLNu_M-502018 has strage files in the file!"
    echo "ERROR! EWKWPlus2Jets_WToLNu_M-502018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKWminus2Jets_WToQQ_dipoleRecoilOn2016.txt | wc -l)
Ntag=$(grep -o 'EWKWminus2Jets_WToQQ_dipoleRecoilOn' initialfiles/EWKWminus2Jets_WToQQ_dipoleRecoilOn2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKWminus2Jets_WToQQ_dipoleRecoilOn2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/EWKWminus2Jets_WToQQ_dipoleRecoilOn2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKWminus2Jets_WToQQ_dipoleRecoilOn2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKWminus2Jets_WToQQ_dipoleRecoilOn2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKWminus2Jets_WToQQ_dipoleRecoilOn2016 has strage files in the file!"
    echo "ERROR! EWKWminus2Jets_WToQQ_dipoleRecoilOn2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKWminus2Jets_WToQQ_dipoleRecoilOn2016APV.txt | wc -l)
Ntag=$(grep -o 'EWKWminus2Jets_WToQQ_dipoleRecoilOn' initialfiles/EWKWminus2Jets_WToQQ_dipoleRecoilOn2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKWminus2Jets_WToQQ_dipoleRecoilOn2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/EWKWminus2Jets_WToQQ_dipoleRecoilOn2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKWminus2Jets_WToQQ_dipoleRecoilOn2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKWminus2Jets_WToQQ_dipoleRecoilOn2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKWminus2Jets_WToQQ_dipoleRecoilOn2016APV has strage files in the file!"
    echo "ERROR! EWKWminus2Jets_WToQQ_dipoleRecoilOn2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKWminus2Jets_WToQQ_dipoleRecoilOn2017.txt | wc -l)
Ntag=$(grep -o 'EWKWminus2Jets_WToQQ_dipoleRecoilOn' initialfiles/EWKWminus2Jets_WToQQ_dipoleRecoilOn2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKWminus2Jets_WToQQ_dipoleRecoilOn2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/EWKWminus2Jets_WToQQ_dipoleRecoilOn2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKWminus2Jets_WToQQ_dipoleRecoilOn2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKWminus2Jets_WToQQ_dipoleRecoilOn2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKWminus2Jets_WToQQ_dipoleRecoilOn2017 has strage files in the file!"
    echo "ERROR! EWKWminus2Jets_WToQQ_dipoleRecoilOn2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKWminus2Jets_WToQQ_dipoleRecoilOn2018.txt | wc -l)
Ntag=$(grep -o 'EWKWminus2Jets_WToQQ_dipoleRecoilOn' initialfiles/EWKWminus2Jets_WToQQ_dipoleRecoilOn2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKWminus2Jets_WToQQ_dipoleRecoilOn2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/EWKWminus2Jets_WToQQ_dipoleRecoilOn2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKWminus2Jets_WToQQ_dipoleRecoilOn2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKWminus2Jets_WToQQ_dipoleRecoilOn2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKWminus2Jets_WToQQ_dipoleRecoilOn2018 has strage files in the file!"
    echo "ERROR! EWKWminus2Jets_WToQQ_dipoleRecoilOn2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKWplus2Jets_WToQQ_dipoleRecoilOn2016.txt | wc -l)
Ntag=$(grep -o 'EWKWplus2Jets_WToQQ_dipoleRecoilOn' initialfiles/EWKWplus2Jets_WToQQ_dipoleRecoilOn2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKWplus2Jets_WToQQ_dipoleRecoilOn2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/EWKWplus2Jets_WToQQ_dipoleRecoilOn2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKWplus2Jets_WToQQ_dipoleRecoilOn2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKWplus2Jets_WToQQ_dipoleRecoilOn2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKWplus2Jets_WToQQ_dipoleRecoilOn2016 has strage files in the file!"
    echo "ERROR! EWKWplus2Jets_WToQQ_dipoleRecoilOn2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKWplus2Jets_WToQQ_dipoleRecoilOn2016APV.txt | wc -l)
Ntag=$(grep -o 'EWKWplus2Jets_WToQQ_dipoleRecoilOn' initialfiles/EWKWplus2Jets_WToQQ_dipoleRecoilOn2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKWplus2Jets_WToQQ_dipoleRecoilOn2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/EWKWplus2Jets_WToQQ_dipoleRecoilOn2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKWplus2Jets_WToQQ_dipoleRecoilOn2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKWplus2Jets_WToQQ_dipoleRecoilOn2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKWplus2Jets_WToQQ_dipoleRecoilOn2016APV has strage files in the file!"
    echo "ERROR! EWKWplus2Jets_WToQQ_dipoleRecoilOn2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKWplus2Jets_WToQQ_dipoleRecoilOn2017.txt | wc -l)
Ntag=$(grep -o 'EWKWplus2Jets_WToQQ_dipoleRecoilOn' initialfiles/EWKWplus2Jets_WToQQ_dipoleRecoilOn2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKWplus2Jets_WToQQ_dipoleRecoilOn2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/EWKWplus2Jets_WToQQ_dipoleRecoilOn2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKWplus2Jets_WToQQ_dipoleRecoilOn2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKWplus2Jets_WToQQ_dipoleRecoilOn2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKWplus2Jets_WToQQ_dipoleRecoilOn2017 has strage files in the file!"
    echo "ERROR! EWKWplus2Jets_WToQQ_dipoleRecoilOn2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKWplus2Jets_WToQQ_dipoleRecoilOn2018.txt | wc -l)
Ntag=$(grep -o 'EWKWplus2Jets_WToQQ_dipoleRecoilOn' initialfiles/EWKWplus2Jets_WToQQ_dipoleRecoilOn2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKWplus2Jets_WToQQ_dipoleRecoilOn2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/EWKWplus2Jets_WToQQ_dipoleRecoilOn2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKWplus2Jets_WToQQ_dipoleRecoilOn2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKWplus2Jets_WToQQ_dipoleRecoilOn2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKWplus2Jets_WToQQ_dipoleRecoilOn2018 has strage files in the file!"
    echo "ERROR! EWKWplus2Jets_WToQQ_dipoleRecoilOn2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKZ2Jets_ZToLL_M-502016.txt | wc -l)
Ntag=$(grep -o 'EWKZ2Jets_ZToLL_M-50' initialfiles/EWKZ2Jets_ZToLL_M-502016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKZ2Jets_ZToLL_M-502016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/EWKZ2Jets_ZToLL_M-502016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKZ2Jets_ZToLL_M-502016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKZ2Jets_ZToLL_M-502016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKZ2Jets_ZToLL_M-502016 has strage files in the file!"
    echo "ERROR! EWKZ2Jets_ZToLL_M-502016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKZ2Jets_ZToLL_M-502016APV.txt | wc -l)
Ntag=$(grep -o 'EWKZ2Jets_ZToLL_M-50' initialfiles/EWKZ2Jets_ZToLL_M-502016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKZ2Jets_ZToLL_M-502016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/EWKZ2Jets_ZToLL_M-502016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKZ2Jets_ZToLL_M-502016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKZ2Jets_ZToLL_M-502016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKZ2Jets_ZToLL_M-502016APV has strage files in the file!"
    echo "ERROR! EWKZ2Jets_ZToLL_M-502016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKZ2Jets_ZToLL_M-502017.txt | wc -l)
Ntag=$(grep -o 'EWKZ2Jets_ZToLL_M-50' initialfiles/EWKZ2Jets_ZToLL_M-502017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKZ2Jets_ZToLL_M-502017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/EWKZ2Jets_ZToLL_M-502017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKZ2Jets_ZToLL_M-502017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKZ2Jets_ZToLL_M-502017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKZ2Jets_ZToLL_M-502017 has strage files in the file!"
    echo "ERROR! EWKZ2Jets_ZToLL_M-502017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKZ2Jets_ZToLL_M-502018.txt | wc -l)
Ntag=$(grep -o 'EWKZ2Jets_ZToLL_M-50' initialfiles/EWKZ2Jets_ZToLL_M-502018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKZ2Jets_ZToLL_M-502018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/EWKZ2Jets_ZToLL_M-502018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKZ2Jets_ZToLL_M-502018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKZ2Jets_ZToLL_M-502018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKZ2Jets_ZToLL_M-502018 has strage files in the file!"
    echo "ERROR! EWKZ2Jets_ZToLL_M-502018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKZ2Jets_ZToNuNu_M-502016.txt | wc -l)
Ntag=$(grep -o 'EWKZ2Jets_ZToNuNu_M-50' initialfiles/EWKZ2Jets_ZToNuNu_M-502016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKZ2Jets_ZToNuNu_M-502016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/EWKZ2Jets_ZToNuNu_M-502016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKZ2Jets_ZToNuNu_M-502016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKZ2Jets_ZToNuNu_M-502016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKZ2Jets_ZToNuNu_M-502016 has strage files in the file!"
    echo "ERROR! EWKZ2Jets_ZToNuNu_M-502016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKZ2Jets_ZToNuNu_M-502016APV.txt | wc -l)
Ntag=$(grep -o 'EWKZ2Jets_ZToNuNu_M-50' initialfiles/EWKZ2Jets_ZToNuNu_M-502016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKZ2Jets_ZToNuNu_M-502016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/EWKZ2Jets_ZToNuNu_M-502016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKZ2Jets_ZToNuNu_M-502016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKZ2Jets_ZToNuNu_M-502016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKZ2Jets_ZToNuNu_M-502016APV has strage files in the file!"
    echo "ERROR! EWKZ2Jets_ZToNuNu_M-502016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKZ2Jets_ZToNuNu_M-502017.txt | wc -l)
Ntag=$(grep -o 'EWKZ2Jets_ZToNuNu_M-50' initialfiles/EWKZ2Jets_ZToNuNu_M-502017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKZ2Jets_ZToNuNu_M-502017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/EWKZ2Jets_ZToNuNu_M-502017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKZ2Jets_ZToNuNu_M-502017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKZ2Jets_ZToNuNu_M-502017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKZ2Jets_ZToNuNu_M-502017 has strage files in the file!"
    echo "ERROR! EWKZ2Jets_ZToNuNu_M-502017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKZ2Jets_ZToNuNu_M-502018.txt | wc -l)
Ntag=$(grep -o 'EWKZ2Jets_ZToNuNu_M-50' initialfiles/EWKZ2Jets_ZToNuNu_M-502018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKZ2Jets_ZToNuNu_M-502018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/EWKZ2Jets_ZToNuNu_M-502018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKZ2Jets_ZToNuNu_M-502018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKZ2Jets_ZToNuNu_M-502018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKZ2Jets_ZToNuNu_M-502018 has strage files in the file!"
    echo "ERROR! EWKZ2Jets_ZToNuNu_M-502018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKZ2Jets_ZToQQ_dipoleRecoilOn2016.txt | wc -l)
Ntag=$(grep -o 'EWKZ2Jets_ZToQQ_dipoleRecoilOn' initialfiles/EWKZ2Jets_ZToQQ_dipoleRecoilOn2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKZ2Jets_ZToQQ_dipoleRecoilOn2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/EWKZ2Jets_ZToQQ_dipoleRecoilOn2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKZ2Jets_ZToQQ_dipoleRecoilOn2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKZ2Jets_ZToQQ_dipoleRecoilOn2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKZ2Jets_ZToQQ_dipoleRecoilOn2016 has strage files in the file!"
    echo "ERROR! EWKZ2Jets_ZToQQ_dipoleRecoilOn2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKZ2Jets_ZToQQ_dipoleRecoilOn2016APV.txt | wc -l)
Ntag=$(grep -o 'EWKZ2Jets_ZToQQ_dipoleRecoilOn' initialfiles/EWKZ2Jets_ZToQQ_dipoleRecoilOn2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKZ2Jets_ZToQQ_dipoleRecoilOn2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/EWKZ2Jets_ZToQQ_dipoleRecoilOn2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKZ2Jets_ZToQQ_dipoleRecoilOn2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKZ2Jets_ZToQQ_dipoleRecoilOn2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKZ2Jets_ZToQQ_dipoleRecoilOn2016APV has strage files in the file!"
    echo "ERROR! EWKZ2Jets_ZToQQ_dipoleRecoilOn2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKZ2Jets_ZToQQ_dipoleRecoilOn2017.txt | wc -l)
Ntag=$(grep -o 'EWKZ2Jets_ZToQQ_dipoleRecoilOn' initialfiles/EWKZ2Jets_ZToQQ_dipoleRecoilOn2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKZ2Jets_ZToQQ_dipoleRecoilOn2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/EWKZ2Jets_ZToQQ_dipoleRecoilOn2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKZ2Jets_ZToQQ_dipoleRecoilOn2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKZ2Jets_ZToQQ_dipoleRecoilOn2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKZ2Jets_ZToQQ_dipoleRecoilOn2017 has strage files in the file!"
    echo "ERROR! EWKZ2Jets_ZToQQ_dipoleRecoilOn2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/EWKZ2Jets_ZToQQ_dipoleRecoilOn2018.txt | wc -l)
Ntag=$(grep -o 'EWKZ2Jets_ZToQQ_dipoleRecoilOn' initialfiles/EWKZ2Jets_ZToQQ_dipoleRecoilOn2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/EWKZ2Jets_ZToQQ_dipoleRecoilOn2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/EWKZ2Jets_ZToQQ_dipoleRecoilOn2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! EWKZ2Jets_ZToQQ_dipoleRecoilOn2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! EWKZ2Jets_ZToQQ_dipoleRecoilOn2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! EWKZ2Jets_ZToQQ_dipoleRecoilOn2018 has strage files in the file!"
    echo "ERROR! EWKZ2Jets_ZToQQ_dipoleRecoilOn2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ST_t-channel_antitop_4f_InclusiveDecays2016.txt | wc -l)
Ntag=$(grep -o 'ST_t-channel_antitop_4f_InclusiveDecays' initialfiles/ST_t-channel_antitop_4f_InclusiveDecays2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ST_t-channel_antitop_4f_InclusiveDecays2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/ST_t-channel_antitop_4f_InclusiveDecays2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ST_t-channel_antitop_4f_InclusiveDecays2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ST_t-channel_antitop_4f_InclusiveDecays2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ST_t-channel_antitop_4f_InclusiveDecays2016 has strage files in the file!"
    echo "ERROR! ST_t-channel_antitop_4f_InclusiveDecays2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ST_t-channel_antitop_4f_InclusiveDecays2016APV.txt | wc -l)
Ntag=$(grep -o 'ST_t-channel_antitop_4f_InclusiveDecays' initialfiles/ST_t-channel_antitop_4f_InclusiveDecays2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ST_t-channel_antitop_4f_InclusiveDecays2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/ST_t-channel_antitop_4f_InclusiveDecays2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ST_t-channel_antitop_4f_InclusiveDecays2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ST_t-channel_antitop_4f_InclusiveDecays2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ST_t-channel_antitop_4f_InclusiveDecays2016APV has strage files in the file!"
    echo "ERROR! ST_t-channel_antitop_4f_InclusiveDecays2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ST_t-channel_antitop_4f_InclusiveDecays2017.txt | wc -l)
Ntag=$(grep -o 'ST_t-channel_antitop_4f_InclusiveDecays' initialfiles/ST_t-channel_antitop_4f_InclusiveDecays2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ST_t-channel_antitop_4f_InclusiveDecays2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/ST_t-channel_antitop_4f_InclusiveDecays2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ST_t-channel_antitop_4f_InclusiveDecays2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ST_t-channel_antitop_4f_InclusiveDecays2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ST_t-channel_antitop_4f_InclusiveDecays2017 has strage files in the file!"
    echo "ERROR! ST_t-channel_antitop_4f_InclusiveDecays2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ST_t-channel_antitop_4f_InclusiveDecays2018.txt | wc -l)
Ntag=$(grep -o 'ST_t-channel_antitop_4f_InclusiveDecays' initialfiles/ST_t-channel_antitop_4f_InclusiveDecays2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ST_t-channel_antitop_4f_InclusiveDecays2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/ST_t-channel_antitop_4f_InclusiveDecays2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ST_t-channel_antitop_4f_InclusiveDecays2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ST_t-channel_antitop_4f_InclusiveDecays2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ST_t-channel_antitop_4f_InclusiveDecays2018 has strage files in the file!"
    echo "ERROR! ST_t-channel_antitop_4f_InclusiveDecays2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ST_t-channel_top_4f_InclusiveDecays2016.txt | wc -l)
Ntag=$(grep -o 'ST_t-channel_top_4f_InclusiveDecays' initialfiles/ST_t-channel_top_4f_InclusiveDecays2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ST_t-channel_top_4f_InclusiveDecays2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/ST_t-channel_top_4f_InclusiveDecays2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ST_t-channel_top_4f_InclusiveDecays2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ST_t-channel_top_4f_InclusiveDecays2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ST_t-channel_top_4f_InclusiveDecays2016 has strage files in the file!"
    echo "ERROR! ST_t-channel_top_4f_InclusiveDecays2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ST_t-channel_top_4f_InclusiveDecays2016APV.txt | wc -l)
Ntag=$(grep -o 'ST_t-channel_top_4f_InclusiveDecays' initialfiles/ST_t-channel_top_4f_InclusiveDecays2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ST_t-channel_top_4f_InclusiveDecays2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/ST_t-channel_top_4f_InclusiveDecays2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ST_t-channel_top_4f_InclusiveDecays2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ST_t-channel_top_4f_InclusiveDecays2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ST_t-channel_top_4f_InclusiveDecays2016APV has strage files in the file!"
    echo "ERROR! ST_t-channel_top_4f_InclusiveDecays2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ST_t-channel_top_4f_InclusiveDecays2017.txt | wc -l)
Ntag=$(grep -o 'ST_t-channel_top_4f_InclusiveDecays' initialfiles/ST_t-channel_top_4f_InclusiveDecays2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ST_t-channel_top_4f_InclusiveDecays2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/ST_t-channel_top_4f_InclusiveDecays2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ST_t-channel_top_4f_InclusiveDecays2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ST_t-channel_top_4f_InclusiveDecays2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ST_t-channel_top_4f_InclusiveDecays2017 has strage files in the file!"
    echo "ERROR! ST_t-channel_top_4f_InclusiveDecays2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ST_t-channel_top_4f_InclusiveDecays2018.txt | wc -l)
Ntag=$(grep -o 'ST_t-channel_top_4f_InclusiveDecays' initialfiles/ST_t-channel_top_4f_InclusiveDecays2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ST_t-channel_top_4f_InclusiveDecays2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/ST_t-channel_top_4f_InclusiveDecays2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ST_t-channel_top_4f_InclusiveDecays2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ST_t-channel_top_4f_InclusiveDecays2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ST_t-channel_top_4f_InclusiveDecays2018 has strage files in the file!"
    echo "ERROR! ST_t-channel_top_4f_InclusiveDecays2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ST_tW_antitop_5f_inclusiveDecays2016.txt | wc -l)
Ntag=$(grep -o 'ST_tW_antitop_5f_inclusiveDecays' initialfiles/ST_tW_antitop_5f_inclusiveDecays2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ST_tW_antitop_5f_inclusiveDecays2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/ST_tW_antitop_5f_inclusiveDecays2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ST_tW_antitop_5f_inclusiveDecays2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ST_tW_antitop_5f_inclusiveDecays2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ST_tW_antitop_5f_inclusiveDecays2016 has strage files in the file!"
    echo "ERROR! ST_tW_antitop_5f_inclusiveDecays2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ST_tW_antitop_5f_inclusiveDecays2016APV.txt | wc -l)
Ntag=$(grep -o 'ST_tW_antitop_5f_inclusiveDecays' initialfiles/ST_tW_antitop_5f_inclusiveDecays2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ST_tW_antitop_5f_inclusiveDecays2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/ST_tW_antitop_5f_inclusiveDecays2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ST_tW_antitop_5f_inclusiveDecays2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ST_tW_antitop_5f_inclusiveDecays2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ST_tW_antitop_5f_inclusiveDecays2016APV has strage files in the file!"
    echo "ERROR! ST_tW_antitop_5f_inclusiveDecays2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ST_tW_antitop_5f_inclusiveDecays2017.txt | wc -l)
Ntag=$(grep -o 'ST_tW_antitop_5f_inclusiveDecays' initialfiles/ST_tW_antitop_5f_inclusiveDecays2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ST_tW_antitop_5f_inclusiveDecays2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/ST_tW_antitop_5f_inclusiveDecays2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ST_tW_antitop_5f_inclusiveDecays2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ST_tW_antitop_5f_inclusiveDecays2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ST_tW_antitop_5f_inclusiveDecays2017 has strage files in the file!"
    echo "ERROR! ST_tW_antitop_5f_inclusiveDecays2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ST_tW_antitop_5f_inclusiveDecays2018.txt | wc -l)
Ntag=$(grep -o 'ST_tW_antitop_5f_inclusiveDecays' initialfiles/ST_tW_antitop_5f_inclusiveDecays2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ST_tW_antitop_5f_inclusiveDecays2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/ST_tW_antitop_5f_inclusiveDecays2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ST_tW_antitop_5f_inclusiveDecays2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ST_tW_antitop_5f_inclusiveDecays2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ST_tW_antitop_5f_inclusiveDecays2018 has strage files in the file!"
    echo "ERROR! ST_tW_antitop_5f_inclusiveDecays2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ST_tW_top_5f_inclusiveDecays2016.txt | wc -l)
Ntag=$(grep -o 'ST_tW_top_5f_inclusiveDecays' initialfiles/ST_tW_top_5f_inclusiveDecays2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ST_tW_top_5f_inclusiveDecays2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/ST_tW_top_5f_inclusiveDecays2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ST_tW_top_5f_inclusiveDecays2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ST_tW_top_5f_inclusiveDecays2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ST_tW_top_5f_inclusiveDecays2016 has strage files in the file!"
    echo "ERROR! ST_tW_top_5f_inclusiveDecays2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ST_tW_top_5f_inclusiveDecays2016APV.txt | wc -l)
Ntag=$(grep -o 'ST_tW_top_5f_inclusiveDecays' initialfiles/ST_tW_top_5f_inclusiveDecays2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ST_tW_top_5f_inclusiveDecays2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/ST_tW_top_5f_inclusiveDecays2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ST_tW_top_5f_inclusiveDecays2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ST_tW_top_5f_inclusiveDecays2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ST_tW_top_5f_inclusiveDecays2016APV has strage files in the file!"
    echo "ERROR! ST_tW_top_5f_inclusiveDecays2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ST_tW_top_5f_inclusiveDecays2017.txt | wc -l)
Ntag=$(grep -o 'ST_tW_top_5f_inclusiveDecays' initialfiles/ST_tW_top_5f_inclusiveDecays2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ST_tW_top_5f_inclusiveDecays2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/ST_tW_top_5f_inclusiveDecays2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ST_tW_top_5f_inclusiveDecays2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ST_tW_top_5f_inclusiveDecays2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ST_tW_top_5f_inclusiveDecays2017 has strage files in the file!"
    echo "ERROR! ST_tW_top_5f_inclusiveDecays2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ST_tW_top_5f_inclusiveDecays2018.txt | wc -l)
Ntag=$(grep -o 'ST_tW_top_5f_inclusiveDecays' initialfiles/ST_tW_top_5f_inclusiveDecays2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ST_tW_top_5f_inclusiveDecays2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/ST_tW_top_5f_inclusiveDecays2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ST_tW_top_5f_inclusiveDecays2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ST_tW_top_5f_inclusiveDecays2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ST_tW_top_5f_inclusiveDecays2018 has strage files in the file!"
    echo "ERROR! ST_tW_top_5f_inclusiveDecays2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTTo2L2Nu2016.txt | wc -l)
Ntag=$(grep -o 'TTTo2L2Nu' initialfiles/TTTo2L2Nu2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTTo2L2Nu2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/TTTo2L2Nu2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTTo2L2Nu2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTTo2L2Nu2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTTo2L2Nu2016 has strage files in the file!"
    echo "ERROR! TTTo2L2Nu2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTTo2L2Nu2016APV.txt | wc -l)
Ntag=$(grep -o 'TTTo2L2Nu' initialfiles/TTTo2L2Nu2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTTo2L2Nu2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/TTTo2L2Nu2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTTo2L2Nu2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTTo2L2Nu2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTTo2L2Nu2016APV has strage files in the file!"
    echo "ERROR! TTTo2L2Nu2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTTo2L2Nu2017.txt | wc -l)
Ntag=$(grep -o 'TTTo2L2Nu' initialfiles/TTTo2L2Nu2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTTo2L2Nu2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/TTTo2L2Nu2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTTo2L2Nu2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTTo2L2Nu2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTTo2L2Nu2017 has strage files in the file!"
    echo "ERROR! TTTo2L2Nu2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTTo2L2Nu2018.txt | wc -l)
Ntag=$(grep -o 'TTTo2L2Nu' initialfiles/TTTo2L2Nu2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTTo2L2Nu2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/TTTo2L2Nu2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTTo2L2Nu2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTTo2L2Nu2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTTo2L2Nu2018 has strage files in the file!"
    echo "ERROR! TTTo2L2Nu2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTToHadronic2016.txt | wc -l)
Ntag=$(grep -o 'TTToHadronic' initialfiles/TTToHadronic2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTToHadronic2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/TTToHadronic2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTToHadronic2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTToHadronic2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTToHadronic2016 has strage files in the file!"
    echo "ERROR! TTToHadronic2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTToHadronic2016APV.txt | wc -l)
Ntag=$(grep -o 'TTToHadronic' initialfiles/TTToHadronic2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTToHadronic2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/TTToHadronic2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTToHadronic2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTToHadronic2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTToHadronic2016APV has strage files in the file!"
    echo "ERROR! TTToHadronic2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTToHadronic2017.txt | wc -l)
Ntag=$(grep -o 'TTToHadronic' initialfiles/TTToHadronic2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTToHadronic2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/TTToHadronic2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTToHadronic2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTToHadronic2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTToHadronic2017 has strage files in the file!"
    echo "ERROR! TTToHadronic2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTToHadronic2018.txt | wc -l)
Ntag=$(grep -o 'TTToHadronic' initialfiles/TTToHadronic2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTToHadronic2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/TTToHadronic2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTToHadronic2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTToHadronic2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTToHadronic2018 has strage files in the file!"
    echo "ERROR! TTToHadronic2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTToSemiLeptonic2016.txt | wc -l)
Ntag=$(grep -o 'TTToSemiLeptonic' initialfiles/TTToSemiLeptonic2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTToSemiLeptonic2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/TTToSemiLeptonic2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTToSemiLeptonic2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTToSemiLeptonic2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTToSemiLeptonic2016 has strage files in the file!"
    echo "ERROR! TTToSemiLeptonic2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTToSemiLeptonic2016APV.txt | wc -l)
Ntag=$(grep -o 'TTToSemiLeptonic' initialfiles/TTToSemiLeptonic2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTToSemiLeptonic2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/TTToSemiLeptonic2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTToSemiLeptonic2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTToSemiLeptonic2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTToSemiLeptonic2016APV has strage files in the file!"
    echo "ERROR! TTToSemiLeptonic2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTToSemiLeptonic2017.txt | wc -l)
Ntag=$(grep -o 'TTToSemiLeptonic' initialfiles/TTToSemiLeptonic2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTToSemiLeptonic2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/TTToSemiLeptonic2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTToSemiLeptonic2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTToSemiLeptonic2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTToSemiLeptonic2017 has strage files in the file!"
    echo "ERROR! TTToSemiLeptonic2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTToSemiLeptonic2018.txt | wc -l)
Ntag=$(grep -o 'TTToSemiLeptonic' initialfiles/TTToSemiLeptonic2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTToSemiLeptonic2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/TTToSemiLeptonic2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTToSemiLeptonic2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTToSemiLeptonic2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTToSemiLeptonic2018 has strage files in the file!"
    echo "ERROR! TTToSemiLeptonic2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTWJetsToLNu2016.txt | wc -l)
Ntag=$(grep -o 'TTWJetsToLNu' initialfiles/TTWJetsToLNu2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTWJetsToLNu2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/TTWJetsToLNu2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTWJetsToLNu2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTWJetsToLNu2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTWJetsToLNu2016 has strage files in the file!"
    echo "ERROR! TTWJetsToLNu2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTWJetsToLNu2016APV.txt | wc -l)
Ntag=$(grep -o 'TTWJetsToLNu' initialfiles/TTWJetsToLNu2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTWJetsToLNu2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/TTWJetsToLNu2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTWJetsToLNu2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTWJetsToLNu2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTWJetsToLNu2016APV has strage files in the file!"
    echo "ERROR! TTWJetsToLNu2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTWJetsToLNu2017.txt | wc -l)
Ntag=$(grep -o 'TTWJetsToLNu' initialfiles/TTWJetsToLNu2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTWJetsToLNu2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/TTWJetsToLNu2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTWJetsToLNu2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTWJetsToLNu2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTWJetsToLNu2017 has strage files in the file!"
    echo "ERROR! TTWJetsToLNu2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTWJetsToLNu2018.txt | wc -l)
Ntag=$(grep -o 'TTWJetsToLNu' initialfiles/TTWJetsToLNu2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTWJetsToLNu2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/TTWJetsToLNu2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTWJetsToLNu2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTWJetsToLNu2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTWJetsToLNu2018 has strage files in the file!"
    echo "ERROR! TTWJetsToLNu2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTWW2016.txt | wc -l)
Ntag=$(grep -o 'TTWW' initialfiles/TTWW2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTWW2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/TTWW2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTWW2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTWW2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTWW2016 has strage files in the file!"
    echo "ERROR! TTWW2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTWW2016APV.txt | wc -l)
Ntag=$(grep -o 'TTWW' initialfiles/TTWW2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTWW2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/TTWW2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTWW2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTWW2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTWW2016APV has strage files in the file!"
    echo "ERROR! TTWW2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTWW2017.txt | wc -l)
Ntag=$(grep -o 'TTWW' initialfiles/TTWW2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTWW2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/TTWW2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTWW2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTWW2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTWW2017 has strage files in the file!"
    echo "ERROR! TTWW2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTWW2018.txt | wc -l)
Ntag=$(grep -o 'TTWW' initialfiles/TTWW2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTWW2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/TTWW2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTWW2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTWW2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTWW2018 has strage files in the file!"
    echo "ERROR! TTWW2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTWZ2016.txt | wc -l)
Ntag=$(grep -o 'TTWZ' initialfiles/TTWZ2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTWZ2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/TTWZ2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTWZ2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTWZ2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTWZ2016 has strage files in the file!"
    echo "ERROR! TTWZ2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTWZ2016APV.txt | wc -l)
Ntag=$(grep -o 'TTWZ' initialfiles/TTWZ2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTWZ2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/TTWZ2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTWZ2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTWZ2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTWZ2016APV has strage files in the file!"
    echo "ERROR! TTWZ2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTWZ2017.txt | wc -l)
Ntag=$(grep -o 'TTWZ' initialfiles/TTWZ2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTWZ2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/TTWZ2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTWZ2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTWZ2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTWZ2017 has strage files in the file!"
    echo "ERROR! TTWZ2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTWZ2018.txt | wc -l)
Ntag=$(grep -o 'TTWZ' initialfiles/TTWZ2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTWZ2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/TTWZ2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTWZ2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTWZ2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTWZ2018 has strage files in the file!"
    echo "ERROR! TTWZ2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTZToLLNuNu_M-102016.txt | wc -l)
Ntag=$(grep -o 'TTZToLLNuNu_M-10' initialfiles/TTZToLLNuNu_M-102016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTZToLLNuNu_M-102016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/TTZToLLNuNu_M-102016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTZToLLNuNu_M-102016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTZToLLNuNu_M-102016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTZToLLNuNu_M-102016 has strage files in the file!"
    echo "ERROR! TTZToLLNuNu_M-102016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTZToLLNuNu_M-102016APV.txt | wc -l)
Ntag=$(grep -o 'TTZToLLNuNu_M-10' initialfiles/TTZToLLNuNu_M-102016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTZToLLNuNu_M-102016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/TTZToLLNuNu_M-102016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTZToLLNuNu_M-102016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTZToLLNuNu_M-102016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTZToLLNuNu_M-102016APV has strage files in the file!"
    echo "ERROR! TTZToLLNuNu_M-102016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTZToLLNuNu_M-102017.txt | wc -l)
Ntag=$(grep -o 'TTZToLLNuNu_M-10' initialfiles/TTZToLLNuNu_M-102017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTZToLLNuNu_M-102017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/TTZToLLNuNu_M-102017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTZToLLNuNu_M-102017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTZToLLNuNu_M-102017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTZToLLNuNu_M-102017 has strage files in the file!"
    echo "ERROR! TTZToLLNuNu_M-102017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTZToLLNuNu_M-102018.txt | wc -l)
Ntag=$(grep -o 'TTZToLLNuNu_M-10' initialfiles/TTZToLLNuNu_M-102018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTZToLLNuNu_M-102018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/TTZToLLNuNu_M-102018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTZToLLNuNu_M-102018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTZToLLNuNu_M-102018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTZToLLNuNu_M-102018 has strage files in the file!"
    echo "ERROR! TTZToLLNuNu_M-102018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTbb_4f_TTTo2L2Nu2016.txt | wc -l)
Ntag=$(grep -o 'TTbb_4f_TTTo2L2Nu' initialfiles/TTbb_4f_TTTo2L2Nu2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTbb_4f_TTTo2L2Nu2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/TTbb_4f_TTTo2L2Nu2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTbb_4f_TTTo2L2Nu2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTbb_4f_TTTo2L2Nu2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTbb_4f_TTTo2L2Nu2016 has strage files in the file!"
    echo "ERROR! TTbb_4f_TTTo2L2Nu2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTbb_4f_TTTo2L2Nu2016APV.txt | wc -l)
Ntag=$(grep -o 'TTbb_4f_TTTo2L2Nu' initialfiles/TTbb_4f_TTTo2L2Nu2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTbb_4f_TTTo2L2Nu2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/TTbb_4f_TTTo2L2Nu2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTbb_4f_TTTo2L2Nu2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTbb_4f_TTTo2L2Nu2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTbb_4f_TTTo2L2Nu2016APV has strage files in the file!"
    echo "ERROR! TTbb_4f_TTTo2L2Nu2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTbb_4f_TTTo2L2Nu2017.txt | wc -l)
Ntag=$(grep -o 'TTbb_4f_TTTo2L2Nu' initialfiles/TTbb_4f_TTTo2L2Nu2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTbb_4f_TTTo2L2Nu2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/TTbb_4f_TTTo2L2Nu2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTbb_4f_TTTo2L2Nu2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTbb_4f_TTTo2L2Nu2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTbb_4f_TTTo2L2Nu2017 has strage files in the file!"
    echo "ERROR! TTbb_4f_TTTo2L2Nu2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTbb_4f_TTTo2L2Nu2018.txt | wc -l)
Ntag=$(grep -o 'TTbb_4f_TTTo2L2Nu' initialfiles/TTbb_4f_TTTo2L2Nu2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTbb_4f_TTTo2L2Nu2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/TTbb_4f_TTTo2L2Nu2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTbb_4f_TTTo2L2Nu2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTbb_4f_TTTo2L2Nu2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTbb_4f_TTTo2L2Nu2018 has strage files in the file!"
    echo "ERROR! TTbb_4f_TTTo2L2Nu2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTbb_4f_TTToSemiLeptonic2016.txt | wc -l)
Ntag=$(grep -o 'TTbb_4f_TTToSemiLeptonic' initialfiles/TTbb_4f_TTToSemiLeptonic2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTbb_4f_TTToSemiLeptonic2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/TTbb_4f_TTToSemiLeptonic2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTbb_4f_TTToSemiLeptonic2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTbb_4f_TTToSemiLeptonic2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTbb_4f_TTToSemiLeptonic2016 has strage files in the file!"
    echo "ERROR! TTbb_4f_TTToSemiLeptonic2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTbb_4f_TTToSemiLeptonic2016APV.txt | wc -l)
Ntag=$(grep -o 'TTbb_4f_TTToSemiLeptonic' initialfiles/TTbb_4f_TTToSemiLeptonic2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTbb_4f_TTToSemiLeptonic2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/TTbb_4f_TTToSemiLeptonic2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTbb_4f_TTToSemiLeptonic2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTbb_4f_TTToSemiLeptonic2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTbb_4f_TTToSemiLeptonic2016APV has strage files in the file!"
    echo "ERROR! TTbb_4f_TTToSemiLeptonic2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTbb_4f_TTToSemiLeptonic2017.txt | wc -l)
Ntag=$(grep -o 'TTbb_4f_TTToSemiLeptonic' initialfiles/TTbb_4f_TTToSemiLeptonic2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTbb_4f_TTToSemiLeptonic2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/TTbb_4f_TTToSemiLeptonic2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTbb_4f_TTToSemiLeptonic2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTbb_4f_TTToSemiLeptonic2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTbb_4f_TTToSemiLeptonic2017 has strage files in the file!"
    echo "ERROR! TTbb_4f_TTToSemiLeptonic2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/TTbb_4f_TTToSemiLeptonic2018.txt | wc -l)
Ntag=$(grep -o 'TTbb_4f_TTToSemiLeptonic' initialfiles/TTbb_4f_TTToSemiLeptonic2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/TTbb_4f_TTToSemiLeptonic2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/TTbb_4f_TTToSemiLeptonic2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! TTbb_4f_TTToSemiLeptonic2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! TTbb_4f_TTToSemiLeptonic2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! TTbb_4f_TTToSemiLeptonic2018 has strage files in the file!"
    echo "ERROR! TTbb_4f_TTToSemiLeptonic2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2016.txt | wc -l)
Ntag=$(grep -o 'VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn' initialfiles/VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2016 has strage files in the file!"
    echo "ERROR! VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2016APV.txt | wc -l)
Ntag=$(grep -o 'VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn' initialfiles/VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2016APV has strage files in the file!"
    echo "ERROR! VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2017.txt | wc -l)
Ntag=$(grep -o 'VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn' initialfiles/VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2017 has strage files in the file!"
    echo "ERROR! VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2018.txt | wc -l)
Ntag=$(grep -o 'VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn' initialfiles/VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2018 has strage files in the file!"
    echo "ERROR! VBFWH_HToBB_WToLNu_M-125_dipoleRecoilOn2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/VHToNonbb_M1252016.txt | wc -l)
Ntag=$(grep -o 'VHToNonbb_M125' initialfiles/VHToNonbb_M1252016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/VHToNonbb_M1252016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/VHToNonbb_M1252016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! VHToNonbb_M1252016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! VHToNonbb_M1252016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! VHToNonbb_M1252016 has strage files in the file!"
    echo "ERROR! VHToNonbb_M1252016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/VHToNonbb_M1252016APV.txt | wc -l)
Ntag=$(grep -o 'VHToNonbb_M125' initialfiles/VHToNonbb_M1252016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/VHToNonbb_M1252016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/VHToNonbb_M1252016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! VHToNonbb_M1252016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! VHToNonbb_M1252016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! VHToNonbb_M1252016APV has strage files in the file!"
    echo "ERROR! VHToNonbb_M1252016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/VHToNonbb_M1252017.txt | wc -l)
Ntag=$(grep -o 'VHToNonbb_M125' initialfiles/VHToNonbb_M1252017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/VHToNonbb_M1252017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/VHToNonbb_M1252017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! VHToNonbb_M1252017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! VHToNonbb_M1252017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! VHToNonbb_M1252017 has strage files in the file!"
    echo "ERROR! VHToNonbb_M1252017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/VHToNonbb_M1252018.txt | wc -l)
Ntag=$(grep -o 'VHToNonbb_M125' initialfiles/VHToNonbb_M1252018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/VHToNonbb_M1252018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/VHToNonbb_M1252018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! VHToNonbb_M1252018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! VHToNonbb_M1252018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! VHToNonbb_M1252018 has strage files in the file!"
    echo "ERROR! VHToNonbb_M1252018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-100To2002016.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-100To200' initialfiles/WJetsToLNu_HT-100To2002016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-100To2002016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/WJetsToLNu_HT-100To2002016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-100To2002016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-100To2002016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-100To2002016 has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-100To2002016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-100To2002016APV.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-100To200' initialfiles/WJetsToLNu_HT-100To2002016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-100To2002016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/WJetsToLNu_HT-100To2002016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-100To2002016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-100To2002016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-100To2002016APV has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-100To2002016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-100To2002017.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-100To200' initialfiles/WJetsToLNu_HT-100To2002017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-100To2002017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/WJetsToLNu_HT-100To2002017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-100To2002017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-100To2002017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-100To2002017 has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-100To2002017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-100To2002018.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-100To200' initialfiles/WJetsToLNu_HT-100To2002018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-100To2002018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/WJetsToLNu_HT-100To2002018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-100To2002018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-100To2002018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-100To2002018 has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-100To2002018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-1200To25002016.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-1200To2500' initialfiles/WJetsToLNu_HT-1200To25002016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-1200To25002016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/WJetsToLNu_HT-1200To25002016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-1200To25002016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-1200To25002016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-1200To25002016 has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-1200To25002016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-1200To25002016APV.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-1200To2500' initialfiles/WJetsToLNu_HT-1200To25002016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-1200To25002016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/WJetsToLNu_HT-1200To25002016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-1200To25002016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-1200To25002016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-1200To25002016APV has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-1200To25002016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-1200To25002017.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-1200To2500' initialfiles/WJetsToLNu_HT-1200To25002017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-1200To25002017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/WJetsToLNu_HT-1200To25002017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-1200To25002017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-1200To25002017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-1200To25002017 has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-1200To25002017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-1200To25002018.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-1200To2500' initialfiles/WJetsToLNu_HT-1200To25002018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-1200To25002018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/WJetsToLNu_HT-1200To25002018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-1200To25002018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-1200To25002018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-1200To25002018 has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-1200To25002018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-200To4002016.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-200To400' initialfiles/WJetsToLNu_HT-200To4002016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-200To4002016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/WJetsToLNu_HT-200To4002016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-200To4002016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-200To4002016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-200To4002016 has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-200To4002016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-200To4002016APV.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-200To400' initialfiles/WJetsToLNu_HT-200To4002016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-200To4002016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/WJetsToLNu_HT-200To4002016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-200To4002016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-200To4002016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-200To4002016APV has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-200To4002016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-200To4002017.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-200To400' initialfiles/WJetsToLNu_HT-200To4002017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-200To4002017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/WJetsToLNu_HT-200To4002017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-200To4002017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-200To4002017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-200To4002017 has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-200To4002017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-200To4002018.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-200To400' initialfiles/WJetsToLNu_HT-200To4002018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-200To4002018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/WJetsToLNu_HT-200To4002018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-200To4002018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-200To4002018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-200To4002018 has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-200To4002018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-2500ToInf2016.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-2500ToInf' initialfiles/WJetsToLNu_HT-2500ToInf2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-2500ToInf2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/WJetsToLNu_HT-2500ToInf2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-2500ToInf2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-2500ToInf2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-2500ToInf2016 has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-2500ToInf2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-2500ToInf2016APV.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-2500ToInf' initialfiles/WJetsToLNu_HT-2500ToInf2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-2500ToInf2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/WJetsToLNu_HT-2500ToInf2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-2500ToInf2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-2500ToInf2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-2500ToInf2016APV has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-2500ToInf2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-2500ToInf2017.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-2500ToInf' initialfiles/WJetsToLNu_HT-2500ToInf2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-2500ToInf2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/WJetsToLNu_HT-2500ToInf2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-2500ToInf2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-2500ToInf2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-2500ToInf2017 has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-2500ToInf2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-2500ToInf2018.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-2500ToInf' initialfiles/WJetsToLNu_HT-2500ToInf2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-2500ToInf2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/WJetsToLNu_HT-2500ToInf2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-2500ToInf2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-2500ToInf2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-2500ToInf2018 has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-2500ToInf2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-400To6002016.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-400To600' initialfiles/WJetsToLNu_HT-400To6002016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-400To6002016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/WJetsToLNu_HT-400To6002016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-400To6002016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-400To6002016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-400To6002016 has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-400To6002016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-400To6002016APV.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-400To600' initialfiles/WJetsToLNu_HT-400To6002016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-400To6002016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/WJetsToLNu_HT-400To6002016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-400To6002016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-400To6002016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-400To6002016APV has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-400To6002016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-400To6002017.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-400To600' initialfiles/WJetsToLNu_HT-400To6002017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-400To6002017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/WJetsToLNu_HT-400To6002017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-400To6002017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-400To6002017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-400To6002017 has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-400To6002017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-400To6002018.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-400To600' initialfiles/WJetsToLNu_HT-400To6002018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-400To6002018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/WJetsToLNu_HT-400To6002018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-400To6002018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-400To6002018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-400To6002018 has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-400To6002018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-600To8002016.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-600To800' initialfiles/WJetsToLNu_HT-600To8002016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-600To8002016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/WJetsToLNu_HT-600To8002016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-600To8002016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-600To8002016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-600To8002016 has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-600To8002016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-600To8002016APV.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-600To800' initialfiles/WJetsToLNu_HT-600To8002016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-600To8002016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/WJetsToLNu_HT-600To8002016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-600To8002016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-600To8002016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-600To8002016APV has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-600To8002016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-600To8002017.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-600To800' initialfiles/WJetsToLNu_HT-600To8002017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-600To8002017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/WJetsToLNu_HT-600To8002017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-600To8002017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-600To8002017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-600To8002017 has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-600To8002017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-600To8002018.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-600To800' initialfiles/WJetsToLNu_HT-600To8002018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-600To8002018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/WJetsToLNu_HT-600To8002018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-600To8002018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-600To8002018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-600To8002018 has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-600To8002018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-70To1002016.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-70To100' initialfiles/WJetsToLNu_HT-70To1002016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-70To1002016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/WJetsToLNu_HT-70To1002016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-70To1002016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-70To1002016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-70To1002016 has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-70To1002016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-70To1002016APV.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-70To100' initialfiles/WJetsToLNu_HT-70To1002016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-70To1002016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/WJetsToLNu_HT-70To1002016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-70To1002016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-70To1002016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-70To1002016APV has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-70To1002016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-70To1002017.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-70To100' initialfiles/WJetsToLNu_HT-70To1002017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-70To1002017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/WJetsToLNu_HT-70To1002017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-70To1002017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-70To1002017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-70To1002017 has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-70To1002017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-70To1002018.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-70To100' initialfiles/WJetsToLNu_HT-70To1002018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-70To1002018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/WJetsToLNu_HT-70To1002018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-70To1002018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-70To1002018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-70To1002018 has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-70To1002018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-800To12002016.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-800To1200' initialfiles/WJetsToLNu_HT-800To12002016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-800To12002016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/WJetsToLNu_HT-800To12002016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-800To12002016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-800To12002016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-800To12002016 has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-800To12002016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-800To12002016APV.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-800To1200' initialfiles/WJetsToLNu_HT-800To12002016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-800To12002016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/WJetsToLNu_HT-800To12002016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-800To12002016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-800To12002016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-800To12002016APV has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-800To12002016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-800To12002017.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-800To1200' initialfiles/WJetsToLNu_HT-800To12002017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-800To12002017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/WJetsToLNu_HT-800To12002017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-800To12002017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-800To12002017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-800To12002017 has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-800To12002017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WJetsToLNu_HT-800To12002018.txt | wc -l)
Ntag=$(grep -o 'WJetsToLNu_HT-800To1200' initialfiles/WJetsToLNu_HT-800To12002018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WJetsToLNu_HT-800To12002018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/WJetsToLNu_HT-800To12002018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WJetsToLNu_HT-800To12002018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WJetsToLNu_HT-800To12002018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WJetsToLNu_HT-800To12002018 has strage files in the file!"
    echo "ERROR! WJetsToLNu_HT-800To12002018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WWJJToLNuLNu_EWK_noTop2016.txt | wc -l)
Ntag=$(grep -o 'WWJJToLNuLNu_EWK_noTop' initialfiles/WWJJToLNuLNu_EWK_noTop2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WWJJToLNuLNu_EWK_noTop2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/WWJJToLNuLNu_EWK_noTop2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WWJJToLNuLNu_EWK_noTop2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WWJJToLNuLNu_EWK_noTop2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WWJJToLNuLNu_EWK_noTop2016 has strage files in the file!"
    echo "ERROR! WWJJToLNuLNu_EWK_noTop2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WWJJToLNuLNu_EWK_noTop2016APV.txt | wc -l)
Ntag=$(grep -o 'WWJJToLNuLNu_EWK_noTop' initialfiles/WWJJToLNuLNu_EWK_noTop2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WWJJToLNuLNu_EWK_noTop2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/WWJJToLNuLNu_EWK_noTop2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WWJJToLNuLNu_EWK_noTop2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WWJJToLNuLNu_EWK_noTop2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WWJJToLNuLNu_EWK_noTop2016APV has strage files in the file!"
    echo "ERROR! WWJJToLNuLNu_EWK_noTop2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WWJJToLNuLNu_EWK_noTop2017.txt | wc -l)
Ntag=$(grep -o 'WWJJToLNuLNu_EWK_noTop' initialfiles/WWJJToLNuLNu_EWK_noTop2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WWJJToLNuLNu_EWK_noTop2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/WWJJToLNuLNu_EWK_noTop2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WWJJToLNuLNu_EWK_noTop2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WWJJToLNuLNu_EWK_noTop2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WWJJToLNuLNu_EWK_noTop2017 has strage files in the file!"
    echo "ERROR! WWJJToLNuLNu_EWK_noTop2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WWJJToLNuLNu_EWK_noTop2018.txt | wc -l)
Ntag=$(grep -o 'WWJJToLNuLNu_EWK_noTop' initialfiles/WWJJToLNuLNu_EWK_noTop2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WWJJToLNuLNu_EWK_noTop2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/WWJJToLNuLNu_EWK_noTop2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WWJJToLNuLNu_EWK_noTop2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WWJJToLNuLNu_EWK_noTop2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WWJJToLNuLNu_EWK_noTop2018 has strage files in the file!"
    echo "ERROR! WWJJToLNuLNu_EWK_noTop2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WWTo1L1Nu2Q_4f2016.txt | wc -l)
Ntag=$(grep -o 'WWTo1L1Nu2Q_4f' initialfiles/WWTo1L1Nu2Q_4f2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WWTo1L1Nu2Q_4f2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/WWTo1L1Nu2Q_4f2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WWTo1L1Nu2Q_4f2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WWTo1L1Nu2Q_4f2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WWTo1L1Nu2Q_4f2016 has strage files in the file!"
    echo "ERROR! WWTo1L1Nu2Q_4f2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WWTo1L1Nu2Q_4f2016APV.txt | wc -l)
Ntag=$(grep -o 'WWTo1L1Nu2Q_4f' initialfiles/WWTo1L1Nu2Q_4f2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WWTo1L1Nu2Q_4f2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/WWTo1L1Nu2Q_4f2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WWTo1L1Nu2Q_4f2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WWTo1L1Nu2Q_4f2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WWTo1L1Nu2Q_4f2016APV has strage files in the file!"
    echo "ERROR! WWTo1L1Nu2Q_4f2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WWTo1L1Nu2Q_4f2017.txt | wc -l)
Ntag=$(grep -o 'WWTo1L1Nu2Q_4f' initialfiles/WWTo1L1Nu2Q_4f2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WWTo1L1Nu2Q_4f2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/WWTo1L1Nu2Q_4f2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WWTo1L1Nu2Q_4f2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WWTo1L1Nu2Q_4f2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WWTo1L1Nu2Q_4f2017 has strage files in the file!"
    echo "ERROR! WWTo1L1Nu2Q_4f2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WWTo1L1Nu2Q_4f2018.txt | wc -l)
Ntag=$(grep -o 'WWTo1L1Nu2Q_4f' initialfiles/WWTo1L1Nu2Q_4f2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WWTo1L1Nu2Q_4f2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/WWTo1L1Nu2Q_4f2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WWTo1L1Nu2Q_4f2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WWTo1L1Nu2Q_4f2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WWTo1L1Nu2Q_4f2018 has strage files in the file!"
    echo "ERROR! WWTo1L1Nu2Q_4f2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WWTo2L2Nu2016.txt | wc -l)
Ntag=$(grep -o 'WWTo2L2Nu' initialfiles/WWTo2L2Nu2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WWTo2L2Nu2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/WWTo2L2Nu2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WWTo2L2Nu2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WWTo2L2Nu2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WWTo2L2Nu2016 has strage files in the file!"
    echo "ERROR! WWTo2L2Nu2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WWTo2L2Nu2016APV.txt | wc -l)
Ntag=$(grep -o 'WWTo2L2Nu' initialfiles/WWTo2L2Nu2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WWTo2L2Nu2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/WWTo2L2Nu2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WWTo2L2Nu2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WWTo2L2Nu2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WWTo2L2Nu2016APV has strage files in the file!"
    echo "ERROR! WWTo2L2Nu2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WWTo2L2Nu2017.txt | wc -l)
Ntag=$(grep -o 'WWTo2L2Nu' initialfiles/WWTo2L2Nu2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WWTo2L2Nu2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/WWTo2L2Nu2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WWTo2L2Nu2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WWTo2L2Nu2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WWTo2L2Nu2017 has strage files in the file!"
    echo "ERROR! WWTo2L2Nu2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WWTo2L2Nu2018.txt | wc -l)
Ntag=$(grep -o 'WWTo2L2Nu' initialfiles/WWTo2L2Nu2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WWTo2L2Nu2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/WWTo2L2Nu2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WWTo2L2Nu2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WWTo2L2Nu2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WWTo2L2Nu2018 has strage files in the file!"
    echo "ERROR! WWTo2L2Nu2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WWTolnulnu2016.txt | wc -l)
Ntag=$(grep -o 'WWTolnulnu' initialfiles/WWTolnulnu2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WWTolnulnu2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/WWTolnulnu2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WWTolnulnu2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WWTolnulnu2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WWTolnulnu2016 has strage files in the file!"
    echo "ERROR! WWTolnulnu2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WWTolnulnu2016APV.txt | wc -l)
Ntag=$(grep -o 'WWTolnulnu' initialfiles/WWTolnulnu2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WWTolnulnu2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/WWTolnulnu2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WWTolnulnu2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WWTolnulnu2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WWTolnulnu2016APV has strage files in the file!"
    echo "ERROR! WWTolnulnu2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WWTolnulnu2017.txt | wc -l)
Ntag=$(grep -o 'WWTolnulnu' initialfiles/WWTolnulnu2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WWTolnulnu2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/WWTolnulnu2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WWTolnulnu2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WWTolnulnu2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WWTolnulnu2017 has strage files in the file!"
    echo "ERROR! WWTolnulnu2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WWTolnulnu2018.txt | wc -l)
Ntag=$(grep -o 'WWTolnulnu' initialfiles/WWTolnulnu2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WWTolnulnu2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/WWTolnulnu2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WWTolnulnu2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WWTolnulnu2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WWTolnulnu2018 has strage files in the file!"
    echo "ERROR! WWTolnulnu2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WWW_4F2016.txt | wc -l)
Ntag=$(grep -o 'WWW_4F' initialfiles/WWW_4F2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WWW_4F2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/WWW_4F2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WWW_4F2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WWW_4F2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WWW_4F2016 has strage files in the file!"
    echo "ERROR! WWW_4F2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WWW_4F2016APV.txt | wc -l)
Ntag=$(grep -o 'WWW_4F' initialfiles/WWW_4F2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WWW_4F2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/WWW_4F2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WWW_4F2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WWW_4F2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WWW_4F2016APV has strage files in the file!"
    echo "ERROR! WWW_4F2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WWW_4F2017.txt | wc -l)
Ntag=$(grep -o 'WWW_4F' initialfiles/WWW_4F2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WWW_4F2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/WWW_4F2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WWW_4F2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WWW_4F2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WWW_4F2017 has strage files in the file!"
    echo "ERROR! WWW_4F2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WWW_4F2018.txt | wc -l)
Ntag=$(grep -o 'WWW_4F' initialfiles/WWW_4F2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WWW_4F2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/WWW_4F2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WWW_4F2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WWW_4F2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WWW_4F2018 has strage files in the file!"
    echo "ERROR! WWW_4F2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WWZ_4F2016.txt | wc -l)
Ntag=$(grep -o 'WWZ_4F' initialfiles/WWZ_4F2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WWZ_4F2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/WWZ_4F2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WWZ_4F2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WWZ_4F2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WWZ_4F2016 has strage files in the file!"
    echo "ERROR! WWZ_4F2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WWZ_4F2016APV.txt | wc -l)
Ntag=$(grep -o 'WWZ_4F' initialfiles/WWZ_4F2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WWZ_4F2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/WWZ_4F2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WWZ_4F2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WWZ_4F2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WWZ_4F2016APV has strage files in the file!"
    echo "ERROR! WWZ_4F2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WWZ_4F2017.txt | wc -l)
Ntag=$(grep -o 'WWZ_4F' initialfiles/WWZ_4F2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WWZ_4F2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/WWZ_4F2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WWZ_4F2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WWZ_4F2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WWZ_4F2017 has strage files in the file!"
    echo "ERROR! WWZ_4F2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WWZ_4F2018.txt | wc -l)
Ntag=$(grep -o 'WWZ_4F' initialfiles/WWZ_4F2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WWZ_4F2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/WWZ_4F2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WWZ_4F2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WWZ_4F2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WWZ_4F2018 has strage files in the file!"
    echo "ERROR! WWZ_4F2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WZJJ_EWK_InclusivePolarization2016.txt | wc -l)
Ntag=$(grep -o 'WZJJ_EWK_InclusivePolarization' initialfiles/WZJJ_EWK_InclusivePolarization2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WZJJ_EWK_InclusivePolarization2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/WZJJ_EWK_InclusivePolarization2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WZJJ_EWK_InclusivePolarization2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WZJJ_EWK_InclusivePolarization2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WZJJ_EWK_InclusivePolarization2016 has strage files in the file!"
    echo "ERROR! WZJJ_EWK_InclusivePolarization2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WZJJ_EWK_InclusivePolarization2016APV.txt | wc -l)
Ntag=$(grep -o 'WZJJ_EWK_InclusivePolarization' initialfiles/WZJJ_EWK_InclusivePolarization2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WZJJ_EWK_InclusivePolarization2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/WZJJ_EWK_InclusivePolarization2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WZJJ_EWK_InclusivePolarization2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WZJJ_EWK_InclusivePolarization2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WZJJ_EWK_InclusivePolarization2016APV has strage files in the file!"
    echo "ERROR! WZJJ_EWK_InclusivePolarization2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WZJJ_EWK_InclusivePolarization2017.txt | wc -l)
Ntag=$(grep -o 'WZJJ_EWK_InclusivePolarization' initialfiles/WZJJ_EWK_InclusivePolarization2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WZJJ_EWK_InclusivePolarization2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/WZJJ_EWK_InclusivePolarization2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WZJJ_EWK_InclusivePolarization2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WZJJ_EWK_InclusivePolarization2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WZJJ_EWK_InclusivePolarization2017 has strage files in the file!"
    echo "ERROR! WZJJ_EWK_InclusivePolarization2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WZJJ_EWK_InclusivePolarization2018.txt | wc -l)
Ntag=$(grep -o 'WZJJ_EWK_InclusivePolarization' initialfiles/WZJJ_EWK_InclusivePolarization2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WZJJ_EWK_InclusivePolarization2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/WZJJ_EWK_InclusivePolarization2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WZJJ_EWK_InclusivePolarization2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WZJJ_EWK_InclusivePolarization2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WZJJ_EWK_InclusivePolarization2018 has strage files in the file!"
    echo "ERROR! WZJJ_EWK_InclusivePolarization2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WZTo1L1Nu2Q_4f2016.txt | wc -l)
Ntag=$(grep -o 'WZTo1L1Nu2Q_4f' initialfiles/WZTo1L1Nu2Q_4f2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WZTo1L1Nu2Q_4f2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/WZTo1L1Nu2Q_4f2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WZTo1L1Nu2Q_4f2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WZTo1L1Nu2Q_4f2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WZTo1L1Nu2Q_4f2016 has strage files in the file!"
    echo "ERROR! WZTo1L1Nu2Q_4f2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WZTo1L1Nu2Q_4f2016APV.txt | wc -l)
Ntag=$(grep -o 'WZTo1L1Nu2Q_4f' initialfiles/WZTo1L1Nu2Q_4f2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WZTo1L1Nu2Q_4f2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/WZTo1L1Nu2Q_4f2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WZTo1L1Nu2Q_4f2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WZTo1L1Nu2Q_4f2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WZTo1L1Nu2Q_4f2016APV has strage files in the file!"
    echo "ERROR! WZTo1L1Nu2Q_4f2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WZTo1L1Nu2Q_4f2017.txt | wc -l)
Ntag=$(grep -o 'WZTo1L1Nu2Q_4f' initialfiles/WZTo1L1Nu2Q_4f2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WZTo1L1Nu2Q_4f2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/WZTo1L1Nu2Q_4f2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WZTo1L1Nu2Q_4f2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WZTo1L1Nu2Q_4f2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WZTo1L1Nu2Q_4f2017 has strage files in the file!"
    echo "ERROR! WZTo1L1Nu2Q_4f2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WZTo1L1Nu2Q_4f2018.txt | wc -l)
Ntag=$(grep -o 'WZTo1L1Nu2Q_4f' initialfiles/WZTo1L1Nu2Q_4f2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WZTo1L1Nu2Q_4f2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/WZTo1L1Nu2Q_4f2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WZTo1L1Nu2Q_4f2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WZTo1L1Nu2Q_4f2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WZTo1L1Nu2Q_4f2018 has strage files in the file!"
    echo "ERROR! WZTo1L1Nu2Q_4f2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WZTo1L3Nu_4f2016.txt | wc -l)
Ntag=$(grep -o 'WZTo1L3Nu_4f' initialfiles/WZTo1L3Nu_4f2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WZTo1L3Nu_4f2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/WZTo1L3Nu_4f2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WZTo1L3Nu_4f2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WZTo1L3Nu_4f2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WZTo1L3Nu_4f2016 has strage files in the file!"
    echo "ERROR! WZTo1L3Nu_4f2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WZTo1L3Nu_4f2016APV.txt | wc -l)
Ntag=$(grep -o 'WZTo1L3Nu_4f' initialfiles/WZTo1L3Nu_4f2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WZTo1L3Nu_4f2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/WZTo1L3Nu_4f2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WZTo1L3Nu_4f2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WZTo1L3Nu_4f2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WZTo1L3Nu_4f2016APV has strage files in the file!"
    echo "ERROR! WZTo1L3Nu_4f2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WZTo1L3Nu_4f2017.txt | wc -l)
Ntag=$(grep -o 'WZTo1L3Nu_4f' initialfiles/WZTo1L3Nu_4f2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WZTo1L3Nu_4f2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/WZTo1L3Nu_4f2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WZTo1L3Nu_4f2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WZTo1L3Nu_4f2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WZTo1L3Nu_4f2017 has strage files in the file!"
    echo "ERROR! WZTo1L3Nu_4f2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WZTo1L3Nu_4f2018.txt | wc -l)
Ntag=$(grep -o 'WZTo1L3Nu_4f' initialfiles/WZTo1L3Nu_4f2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WZTo1L3Nu_4f2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/WZTo1L3Nu_4f2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WZTo1L3Nu_4f2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WZTo1L3Nu_4f2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WZTo1L3Nu_4f2018 has strage files in the file!"
    echo "ERROR! WZTo1L3Nu_4f2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WZTo2Q2L_mllmin4p02016.txt | wc -l)
Ntag=$(grep -o 'WZTo2Q2L_mllmin4p0' initialfiles/WZTo2Q2L_mllmin4p02016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WZTo2Q2L_mllmin4p02016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/WZTo2Q2L_mllmin4p02016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WZTo2Q2L_mllmin4p02016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WZTo2Q2L_mllmin4p02016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WZTo2Q2L_mllmin4p02016 has strage files in the file!"
    echo "ERROR! WZTo2Q2L_mllmin4p02016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WZTo2Q2L_mllmin4p02016APV.txt | wc -l)
Ntag=$(grep -o 'WZTo2Q2L_mllmin4p0' initialfiles/WZTo2Q2L_mllmin4p02016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WZTo2Q2L_mllmin4p02016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/WZTo2Q2L_mllmin4p02016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WZTo2Q2L_mllmin4p02016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WZTo2Q2L_mllmin4p02016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WZTo2Q2L_mllmin4p02016APV has strage files in the file!"
    echo "ERROR! WZTo2Q2L_mllmin4p02016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WZTo2Q2L_mllmin4p02017.txt | wc -l)
Ntag=$(grep -o 'WZTo2Q2L_mllmin4p0' initialfiles/WZTo2Q2L_mllmin4p02017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WZTo2Q2L_mllmin4p02017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/WZTo2Q2L_mllmin4p02017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WZTo2Q2L_mllmin4p02017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WZTo2Q2L_mllmin4p02017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WZTo2Q2L_mllmin4p02017 has strage files in the file!"
    echo "ERROR! WZTo2Q2L_mllmin4p02017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WZTo2Q2L_mllmin4p02018.txt | wc -l)
Ntag=$(grep -o 'WZTo2Q2L_mllmin4p0' initialfiles/WZTo2Q2L_mllmin4p02018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WZTo2Q2L_mllmin4p02018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/WZTo2Q2L_mllmin4p02018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WZTo2Q2L_mllmin4p02018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WZTo2Q2L_mllmin4p02018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WZTo2Q2L_mllmin4p02018 has strage files in the file!"
    echo "ERROR! WZTo2Q2L_mllmin4p02018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WZTo3LNu2016.txt | wc -l)
Ntag=$(grep -o 'WZTo3LNu' initialfiles/WZTo3LNu2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WZTo3LNu2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/WZTo3LNu2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WZTo3LNu2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WZTo3LNu2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WZTo3LNu2016 has strage files in the file!"
    echo "ERROR! WZTo3LNu2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WZTo3LNu2016APV.txt | wc -l)
Ntag=$(grep -o 'WZTo3LNu' initialfiles/WZTo3LNu2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WZTo3LNu2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/WZTo3LNu2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WZTo3LNu2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WZTo3LNu2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WZTo3LNu2016APV has strage files in the file!"
    echo "ERROR! WZTo3LNu2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WZTo3LNu2017.txt | wc -l)
Ntag=$(grep -o 'WZTo3LNu' initialfiles/WZTo3LNu2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WZTo3LNu2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/WZTo3LNu2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WZTo3LNu2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WZTo3LNu2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WZTo3LNu2017 has strage files in the file!"
    echo "ERROR! WZTo3LNu2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WZTo3LNu2018.txt | wc -l)
Ntag=$(grep -o 'WZTo3LNu' initialfiles/WZTo3LNu2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WZTo3LNu2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/WZTo3LNu2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WZTo3LNu2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WZTo3LNu2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WZTo3LNu2018 has strage files in the file!"
    echo "ERROR! WZTo3LNu2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WZZ2016.txt | wc -l)
Ntag=$(grep -o 'WZZ' initialfiles/WZZ2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WZZ2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/WZZ2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WZZ2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WZZ2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WZZ2016 has strage files in the file!"
    echo "ERROR! WZZ2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WZZ2016APV.txt | wc -l)
Ntag=$(grep -o 'WZZ' initialfiles/WZZ2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WZZ2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/WZZ2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WZZ2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WZZ2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WZZ2016APV has strage files in the file!"
    echo "ERROR! WZZ2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WZZ2017.txt | wc -l)
Ntag=$(grep -o 'WZZ' initialfiles/WZZ2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WZZ2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/WZZ2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WZZ2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WZZ2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WZZ2017 has strage files in the file!"
    echo "ERROR! WZZ2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WZZ2018.txt | wc -l)
Ntag=$(grep -o 'WZZ' initialfiles/WZZ2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WZZ2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/WZZ2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WZZ2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WZZ2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WZZ2018 has strage files in the file!"
    echo "ERROR! WZZ2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WminusH_HToBB_WToLNu_M-1252016.txt | wc -l)
Ntag=$(grep -o 'WminusH_HToBB_WToLNu_M-125' initialfiles/WminusH_HToBB_WToLNu_M-1252016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WminusH_HToBB_WToLNu_M-1252016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/WminusH_HToBB_WToLNu_M-1252016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WminusH_HToBB_WToLNu_M-1252016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WminusH_HToBB_WToLNu_M-1252016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WminusH_HToBB_WToLNu_M-1252016 has strage files in the file!"
    echo "ERROR! WminusH_HToBB_WToLNu_M-1252016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WminusH_HToBB_WToLNu_M-1252016APV.txt | wc -l)
Ntag=$(grep -o 'WminusH_HToBB_WToLNu_M-125' initialfiles/WminusH_HToBB_WToLNu_M-1252016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WminusH_HToBB_WToLNu_M-1252016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/WminusH_HToBB_WToLNu_M-1252016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WminusH_HToBB_WToLNu_M-1252016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WminusH_HToBB_WToLNu_M-1252016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WminusH_HToBB_WToLNu_M-1252016APV has strage files in the file!"
    echo "ERROR! WminusH_HToBB_WToLNu_M-1252016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WminusH_HToBB_WToLNu_M-1252017.txt | wc -l)
Ntag=$(grep -o 'WminusH_HToBB_WToLNu_M-125' initialfiles/WminusH_HToBB_WToLNu_M-1252017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WminusH_HToBB_WToLNu_M-1252017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/WminusH_HToBB_WToLNu_M-1252017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WminusH_HToBB_WToLNu_M-1252017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WminusH_HToBB_WToLNu_M-1252017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WminusH_HToBB_WToLNu_M-1252017 has strage files in the file!"
    echo "ERROR! WminusH_HToBB_WToLNu_M-1252017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WminusH_HToBB_WToLNu_M-1252018.txt | wc -l)
Ntag=$(grep -o 'WminusH_HToBB_WToLNu_M-125' initialfiles/WminusH_HToBB_WToLNu_M-1252018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WminusH_HToBB_WToLNu_M-1252018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/WminusH_HToBB_WToLNu_M-1252018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WminusH_HToBB_WToLNu_M-1252018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WminusH_HToBB_WToLNu_M-1252018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WminusH_HToBB_WToLNu_M-1252018 has strage files in the file!"
    echo "ERROR! WminusH_HToBB_WToLNu_M-1252018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WplusH_HToBB_WToLNu_M-1252016.txt | wc -l)
Ntag=$(grep -o 'WplusH_HToBB_WToLNu_M-125' initialfiles/WplusH_HToBB_WToLNu_M-1252016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WplusH_HToBB_WToLNu_M-1252016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/WplusH_HToBB_WToLNu_M-1252016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WplusH_HToBB_WToLNu_M-1252016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WplusH_HToBB_WToLNu_M-1252016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WplusH_HToBB_WToLNu_M-1252016 has strage files in the file!"
    echo "ERROR! WplusH_HToBB_WToLNu_M-1252016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WplusH_HToBB_WToLNu_M-1252016APV.txt | wc -l)
Ntag=$(grep -o 'WplusH_HToBB_WToLNu_M-125' initialfiles/WplusH_HToBB_WToLNu_M-1252016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WplusH_HToBB_WToLNu_M-1252016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/WplusH_HToBB_WToLNu_M-1252016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WplusH_HToBB_WToLNu_M-1252016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WplusH_HToBB_WToLNu_M-1252016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WplusH_HToBB_WToLNu_M-1252016APV has strage files in the file!"
    echo "ERROR! WplusH_HToBB_WToLNu_M-1252016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WplusH_HToBB_WToLNu_M-1252017.txt | wc -l)
Ntag=$(grep -o 'WplusH_HToBB_WToLNu_M-125' initialfiles/WplusH_HToBB_WToLNu_M-1252017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WplusH_HToBB_WToLNu_M-1252017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/WplusH_HToBB_WToLNu_M-1252017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WplusH_HToBB_WToLNu_M-1252017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WplusH_HToBB_WToLNu_M-1252017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WplusH_HToBB_WToLNu_M-1252017 has strage files in the file!"
    echo "ERROR! WplusH_HToBB_WToLNu_M-1252017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/WplusH_HToBB_WToLNu_M-1252018.txt | wc -l)
Ntag=$(grep -o 'WplusH_HToBB_WToLNu_M-125' initialfiles/WplusH_HToBB_WToLNu_M-1252018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/WplusH_HToBB_WToLNu_M-1252018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/WplusH_HToBB_WToLNu_M-1252018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! WplusH_HToBB_WToLNu_M-1252018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! WplusH_HToBB_WToLNu_M-1252018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! WplusH_HToBB_WToLNu_M-1252018 has strage files in the file!"
    echo "ERROR! WplusH_HToBB_WToLNu_M-1252018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ZH_HToBB_ZToLL_M-1252016.txt | wc -l)
Ntag=$(grep -o 'ZH_HToBB_ZToLL_M-125' initialfiles/ZH_HToBB_ZToLL_M-1252016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ZH_HToBB_ZToLL_M-1252016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/ZH_HToBB_ZToLL_M-1252016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ZH_HToBB_ZToLL_M-1252016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ZH_HToBB_ZToLL_M-1252016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ZH_HToBB_ZToLL_M-1252016 has strage files in the file!"
    echo "ERROR! ZH_HToBB_ZToLL_M-1252016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ZH_HToBB_ZToLL_M-1252016APV.txt | wc -l)
Ntag=$(grep -o 'ZH_HToBB_ZToLL_M-125' initialfiles/ZH_HToBB_ZToLL_M-1252016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ZH_HToBB_ZToLL_M-1252016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/ZH_HToBB_ZToLL_M-1252016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ZH_HToBB_ZToLL_M-1252016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ZH_HToBB_ZToLL_M-1252016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ZH_HToBB_ZToLL_M-1252016APV has strage files in the file!"
    echo "ERROR! ZH_HToBB_ZToLL_M-1252016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ZH_HToBB_ZToLL_M-1252017.txt | wc -l)
Ntag=$(grep -o 'ZH_HToBB_ZToLL_M-125' initialfiles/ZH_HToBB_ZToLL_M-1252017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ZH_HToBB_ZToLL_M-1252017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/ZH_HToBB_ZToLL_M-1252017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ZH_HToBB_ZToLL_M-1252017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ZH_HToBB_ZToLL_M-1252017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ZH_HToBB_ZToLL_M-1252017 has strage files in the file!"
    echo "ERROR! ZH_HToBB_ZToLL_M-1252017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ZH_HToBB_ZToLL_M-1252018.txt | wc -l)
Ntag=$(grep -o 'ZH_HToBB_ZToLL_M-125' initialfiles/ZH_HToBB_ZToLL_M-1252018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ZH_HToBB_ZToLL_M-1252018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/ZH_HToBB_ZToLL_M-1252018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ZH_HToBB_ZToLL_M-1252018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ZH_HToBB_ZToLL_M-1252018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ZH_HToBB_ZToLL_M-1252018 has strage files in the file!"
    echo "ERROR! ZH_HToBB_ZToLL_M-1252018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ZZJJTo4L2016.txt | wc -l)
Ntag=$(grep -o 'ZZJJTo4L' initialfiles/ZZJJTo4L2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ZZJJTo4L2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/ZZJJTo4L2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ZZJJTo4L2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ZZJJTo4L2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ZZJJTo4L2016 has strage files in the file!"
    echo "ERROR! ZZJJTo4L2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ZZJJTo4L2016APV.txt | wc -l)
Ntag=$(grep -o 'ZZJJTo4L' initialfiles/ZZJJTo4L2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ZZJJTo4L2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/ZZJJTo4L2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ZZJJTo4L2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ZZJJTo4L2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ZZJJTo4L2016APV has strage files in the file!"
    echo "ERROR! ZZJJTo4L2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ZZJJTo4L2017.txt | wc -l)
Ntag=$(grep -o 'ZZJJTo4L' initialfiles/ZZJJTo4L2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ZZJJTo4L2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/ZZJJTo4L2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ZZJJTo4L2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ZZJJTo4L2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ZZJJTo4L2017 has strage files in the file!"
    echo "ERROR! ZZJJTo4L2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ZZJJTo4L2018.txt | wc -l)
Ntag=$(grep -o 'ZZJJTo4L' initialfiles/ZZJJTo4L2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ZZJJTo4L2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/ZZJJTo4L2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ZZJJTo4L2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ZZJJTo4L2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ZZJJTo4L2018 has strage files in the file!"
    echo "ERROR! ZZJJTo4L2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ZZTo2L2Nu2016.txt | wc -l)
Ntag=$(grep -o 'ZZTo2L2Nu' initialfiles/ZZTo2L2Nu2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ZZTo2L2Nu2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/ZZTo2L2Nu2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ZZTo2L2Nu2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ZZTo2L2Nu2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ZZTo2L2Nu2016 has strage files in the file!"
    echo "ERROR! ZZTo2L2Nu2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ZZTo2L2Nu2016APV.txt | wc -l)
Ntag=$(grep -o 'ZZTo2L2Nu' initialfiles/ZZTo2L2Nu2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ZZTo2L2Nu2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/ZZTo2L2Nu2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ZZTo2L2Nu2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ZZTo2L2Nu2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ZZTo2L2Nu2016APV has strage files in the file!"
    echo "ERROR! ZZTo2L2Nu2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ZZTo2L2Nu2017.txt | wc -l)
Ntag=$(grep -o 'ZZTo2L2Nu' initialfiles/ZZTo2L2Nu2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ZZTo2L2Nu2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/ZZTo2L2Nu2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ZZTo2L2Nu2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ZZTo2L2Nu2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ZZTo2L2Nu2017 has strage files in the file!"
    echo "ERROR! ZZTo2L2Nu2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ZZTo2L2Nu2018.txt | wc -l)
Ntag=$(grep -o 'ZZTo2L2Nu' initialfiles/ZZTo2L2Nu2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ZZTo2L2Nu2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/ZZTo2L2Nu2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ZZTo2L2Nu2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ZZTo2L2Nu2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ZZTo2L2Nu2018 has strage files in the file!"
    echo "ERROR! ZZTo2L2Nu2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ZZTo2Q2L_mllmin4p2016.txt | wc -l)
Ntag=$(grep -o 'ZZTo2Q2L_mllmin4p' initialfiles/ZZTo2Q2L_mllmin4p2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ZZTo2Q2L_mllmin4p2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/ZZTo2Q2L_mllmin4p2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ZZTo2Q2L_mllmin4p2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ZZTo2Q2L_mllmin4p2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ZZTo2Q2L_mllmin4p2016 has strage files in the file!"
    echo "ERROR! ZZTo2Q2L_mllmin4p2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ZZTo2Q2L_mllmin4p2016APV.txt | wc -l)
Ntag=$(grep -o 'ZZTo2Q2L_mllmin4p' initialfiles/ZZTo2Q2L_mllmin4p2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ZZTo2Q2L_mllmin4p2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/ZZTo2Q2L_mllmin4p2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ZZTo2Q2L_mllmin4p2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ZZTo2Q2L_mllmin4p2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ZZTo2Q2L_mllmin4p2016APV has strage files in the file!"
    echo "ERROR! ZZTo2Q2L_mllmin4p2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ZZTo2Q2L_mllmin4p2017.txt | wc -l)
Ntag=$(grep -o 'ZZTo2Q2L_mllmin4p' initialfiles/ZZTo2Q2L_mllmin4p2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ZZTo2Q2L_mllmin4p2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/ZZTo2Q2L_mllmin4p2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ZZTo2Q2L_mllmin4p2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ZZTo2Q2L_mllmin4p2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ZZTo2Q2L_mllmin4p2017 has strage files in the file!"
    echo "ERROR! ZZTo2Q2L_mllmin4p2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ZZTo2Q2L_mllmin4p2018.txt | wc -l)
Ntag=$(grep -o 'ZZTo2Q2L_mllmin4p' initialfiles/ZZTo2Q2L_mllmin4p2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ZZTo2Q2L_mllmin4p2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/ZZTo2Q2L_mllmin4p2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ZZTo2Q2L_mllmin4p2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ZZTo2Q2L_mllmin4p2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ZZTo2Q2L_mllmin4p2018 has strage files in the file!"
    echo "ERROR! ZZTo2Q2L_mllmin4p2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ZZTo4L_M-1toInf2016.txt | wc -l)
Ntag=$(grep -o 'ZZTo4L_M-1toInf' initialfiles/ZZTo4L_M-1toInf2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ZZTo4L_M-1toInf2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/ZZTo4L_M-1toInf2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ZZTo4L_M-1toInf2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ZZTo4L_M-1toInf2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ZZTo4L_M-1toInf2016 has strage files in the file!"
    echo "ERROR! ZZTo4L_M-1toInf2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ZZTo4L_M-1toInf2016APV.txt | wc -l)
Ntag=$(grep -o 'ZZTo4L_M-1toInf' initialfiles/ZZTo4L_M-1toInf2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ZZTo4L_M-1toInf2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/ZZTo4L_M-1toInf2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ZZTo4L_M-1toInf2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ZZTo4L_M-1toInf2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ZZTo4L_M-1toInf2016APV has strage files in the file!"
    echo "ERROR! ZZTo4L_M-1toInf2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ZZTo4L_M-1toInf2017.txt | wc -l)
Ntag=$(grep -o 'ZZTo4L_M-1toInf' initialfiles/ZZTo4L_M-1toInf2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ZZTo4L_M-1toInf2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/ZZTo4L_M-1toInf2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ZZTo4L_M-1toInf2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ZZTo4L_M-1toInf2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ZZTo4L_M-1toInf2017 has strage files in the file!"
    echo "ERROR! ZZTo4L_M-1toInf2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ZZTo4L_M-1toInf2018.txt | wc -l)
Ntag=$(grep -o 'ZZTo4L_M-1toInf' initialfiles/ZZTo4L_M-1toInf2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ZZTo4L_M-1toInf2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/ZZTo4L_M-1toInf2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ZZTo4L_M-1toInf2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ZZTo4L_M-1toInf2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ZZTo4L_M-1toInf2018 has strage files in the file!"
    echo "ERROR! ZZTo4L_M-1toInf2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ZZZ2016.txt | wc -l)
Ntag=$(grep -o 'ZZZ' initialfiles/ZZZ2016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ZZZ2016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/ZZZ2016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ZZZ2016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ZZZ2016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ZZZ2016 has strage files in the file!"
    echo "ERROR! ZZZ2016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ZZZ2016APV.txt | wc -l)
Ntag=$(grep -o 'ZZZ' initialfiles/ZZZ2016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ZZZ2016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/ZZZ2016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ZZZ2016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ZZZ2016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ZZZ2016APV has strage files in the file!"
    echo "ERROR! ZZZ2016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ZZZ2017.txt | wc -l)
Ntag=$(grep -o 'ZZZ' initialfiles/ZZZ2017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ZZZ2017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/ZZZ2017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ZZZ2017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ZZZ2017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ZZZ2017 has strage files in the file!"
    echo "ERROR! ZZZ2017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ZZZ2018.txt | wc -l)
Ntag=$(grep -o 'ZZZ' initialfiles/ZZZ2018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ZZZ2018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/ZZZ2018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ZZZ2018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ZZZ2018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ZZZ2018 has strage files in the file!"
    echo "ERROR! ZZZ2018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ggZH_HToBB_ZToLL_M-1252016.txt | wc -l)
Ntag=$(grep -o 'ggZH_HToBB_ZToLL_M-125' initialfiles/ggZH_HToBB_ZToLL_M-1252016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ggZH_HToBB_ZToLL_M-1252016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/ggZH_HToBB_ZToLL_M-1252016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ggZH_HToBB_ZToLL_M-1252016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ggZH_HToBB_ZToLL_M-1252016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ggZH_HToBB_ZToLL_M-1252016 has strage files in the file!"
    echo "ERROR! ggZH_HToBB_ZToLL_M-1252016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ggZH_HToBB_ZToLL_M-1252016APV.txt | wc -l)
Ntag=$(grep -o 'ggZH_HToBB_ZToLL_M-125' initialfiles/ggZH_HToBB_ZToLL_M-1252016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ggZH_HToBB_ZToLL_M-1252016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/ggZH_HToBB_ZToLL_M-1252016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ggZH_HToBB_ZToLL_M-1252016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ggZH_HToBB_ZToLL_M-1252016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ggZH_HToBB_ZToLL_M-1252016APV has strage files in the file!"
    echo "ERROR! ggZH_HToBB_ZToLL_M-1252016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ggZH_HToBB_ZToLL_M-1252017.txt | wc -l)
Ntag=$(grep -o 'ggZH_HToBB_ZToLL_M-125' initialfiles/ggZH_HToBB_ZToLL_M-1252017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ggZH_HToBB_ZToLL_M-1252017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/ggZH_HToBB_ZToLL_M-1252017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ggZH_HToBB_ZToLL_M-1252017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ggZH_HToBB_ZToLL_M-1252017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ggZH_HToBB_ZToLL_M-1252017 has strage files in the file!"
    echo "ERROR! ggZH_HToBB_ZToLL_M-1252017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ggZH_HToBB_ZToLL_M-1252018.txt | wc -l)
Ntag=$(grep -o 'ggZH_HToBB_ZToLL_M-125' initialfiles/ggZH_HToBB_ZToLL_M-1252018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ggZH_HToBB_ZToLL_M-1252018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/ggZH_HToBB_ZToLL_M-1252018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ggZH_HToBB_ZToLL_M-1252018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ggZH_HToBB_ZToLL_M-1252018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ggZH_HToBB_ZToLL_M-1252018 has strage files in the file!"
    echo "ERROR! ggZH_HToBB_ZToLL_M-1252018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ttHToNonbb_M1252016.txt | wc -l)
Ntag=$(grep -o 'ttHToNonbb_M125' initialfiles/ttHToNonbb_M1252016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ttHToNonbb_M1252016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/ttHToNonbb_M1252016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ttHToNonbb_M1252016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ttHToNonbb_M1252016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ttHToNonbb_M1252016 has strage files in the file!"
    echo "ERROR! ttHToNonbb_M1252016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ttHToNonbb_M1252016APV.txt | wc -l)
Ntag=$(grep -o 'ttHToNonbb_M125' initialfiles/ttHToNonbb_M1252016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ttHToNonbb_M1252016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/ttHToNonbb_M1252016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ttHToNonbb_M1252016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ttHToNonbb_M1252016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ttHToNonbb_M1252016APV has strage files in the file!"
    echo "ERROR! ttHToNonbb_M1252016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ttHToNonbb_M1252017.txt | wc -l)
Ntag=$(grep -o 'ttHToNonbb_M125' initialfiles/ttHToNonbb_M1252017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ttHToNonbb_M1252017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/ttHToNonbb_M1252017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ttHToNonbb_M1252017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ttHToNonbb_M1252017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ttHToNonbb_M1252017 has strage files in the file!"
    echo "ERROR! ttHToNonbb_M1252017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ttHToNonbb_M1252018.txt | wc -l)
Ntag=$(grep -o 'ttHToNonbb_M125' initialfiles/ttHToNonbb_M1252018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ttHToNonbb_M1252018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/ttHToNonbb_M1252018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ttHToNonbb_M1252018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ttHToNonbb_M1252018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ttHToNonbb_M1252018 has strage files in the file!"
    echo "ERROR! ttHToNonbb_M1252018 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ttHTobb_M1252016.txt | wc -l)
Ntag=$(grep -o 'ttHTobb_M125' initialfiles/ttHTobb_M1252016.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ttHTobb_M1252016.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAOD' initialfiles/ttHTobb_M1252016.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ttHTobb_M1252016 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ttHTobb_M1252016 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ttHTobb_M1252016 has strage files in the file!"
    echo "ERROR! ttHTobb_M1252016 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ttHTobb_M1252016APV.txt | wc -l)
Ntag=$(grep -o 'ttHTobb_M125' initialfiles/ttHTobb_M1252016APV.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ttHTobb_M1252016APV.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL16NanoAODAPV' initialfiles/ttHTobb_M1252016APV.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ttHTobb_M1252016APV has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ttHTobb_M1252016APV has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ttHTobb_M1252016APV has strage files in the file!"
    echo "ERROR! ttHTobb_M1252016APV has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ttHTobb_M1252017.txt | wc -l)
Ntag=$(grep -o 'ttHTobb_M125' initialfiles/ttHTobb_M1252017.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ttHTobb_M1252017.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL17NanoAOD' initialfiles/ttHTobb_M1252017.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ttHTobb_M1252017 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ttHTobb_M1252017 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ttHTobb_M1252017 has strage files in the file!"
    echo "ERROR! ttHTobb_M1252017 has $Ntag $Nyear in the file!"
fi
NDAS=$(grep -o 'DAS' initialfiles/ttHTobb_M1252018.txt | wc -l)
Ntag=$(grep -o 'ttHTobb_M125' initialfiles/ttHTobb_M1252018.txt | wc -l)
NTUN=$(grep -o 'TuneCP5' initialfiles/ttHTobb_M1252018.txt | wc -l)
Nyear=$(grep -o 'RunIISummer20UL18NanoAOD' initialfiles/ttHTobb_M1252018.txt | wc -l)
if [ $NDAS -ne 1 ]
  then
    echo "ERROR! ttHTobb_M1252018 has more than 1 DAS in the file!"
fi
if [ $Ntag -ne $NTUN ]
  then
    echo "ERROR! ttHTobb_M1252018 has strage files in the file!"
fi
if [ $Ntag -ne $Nyear ]
  then
    echo "ERROR! ttHTobb_M1252018 has strage files in the file!"
    echo "ERROR! ttHTobb_M1252018 has $Ntag $Nyear in the file!"
fi
