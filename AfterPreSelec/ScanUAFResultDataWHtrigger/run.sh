g++ $(correction config --cflags --ldflags --rpath) -g -std=c++17  Calculate.cpp -I$ROOTSYS/include `root-config --cflags ` `root-config --libs ` -lMinuit   -o Calculate.exe


rm *.root
rm data*.txt
./Calculate.exe list/Filelist_EGamma_Run2018A2018.list EGamma_Run2018A2018.root EGamma_Run2018A2018 501
./Calculate.exe list/Filelist_EGamma_Run2018B2018.list EGamma_Run2018B2018.root EGamma_Run2018B2018 502
./Calculate.exe list/Filelist_EGamma_Run2018C2018.list EGamma_Run2018C2018.root EGamma_Run2018C2018 503
./Calculate.exe list/Filelist_EGamma_Run2018D2018.list EGamma_Run2018D2018.root EGamma_Run2018D2018 504
./Calculate.exe list/Filelist_SingleElectron_Run2016B-ver1_HIPM2016APV.list SingleElectron_Run2016B-ver1_HIPM2016APV.root SingleElectron_Run2016B-ver1_HIPM2016APV 505
./Calculate.exe list/Filelist_SingleElectron_Run2016B-ver2_HIPM2016APV.list SingleElectron_Run2016B-ver2_HIPM2016APV.root SingleElectron_Run2016B-ver2_HIPM2016APV 506
./Calculate.exe list/Filelist_SingleElectron_Run2016C-HIPM2016APV.list SingleElectron_Run2016C-HIPM2016APV.root SingleElectron_Run2016C-HIPM2016APV 507
./Calculate.exe list/Filelist_SingleElectron_Run2016D-HIPM2016APV.list SingleElectron_Run2016D-HIPM2016APV.root SingleElectron_Run2016D-HIPM2016APV 508
./Calculate.exe list/Filelist_SingleElectron_Run2016E-HIPM2016APV.list SingleElectron_Run2016E-HIPM2016APV.root SingleElectron_Run2016E-HIPM2016APV 509
./Calculate.exe list/Filelist_SingleElectron_Run2016F-HIPM2016APV.list SingleElectron_Run2016F-HIPM2016APV.root SingleElectron_Run2016F-HIPM2016APV 510
./Calculate.exe list/Filelist_SingleElectron_Run2016F2016.list SingleElectron_Run2016F2016.root SingleElectron_Run2016F2016 511
./Calculate.exe list/Filelist_SingleElectron_Run2016G2016.list SingleElectron_Run2016G2016.root SingleElectron_Run2016G2016 512
./Calculate.exe list/Filelist_SingleElectron_Run2016H2016.list SingleElectron_Run2016H2016.root SingleElectron_Run2016H2016 513
./Calculate.exe list/Filelist_SingleElectron_Run2017B2017.list SingleElectron_Run2017B2017.root SingleElectron_Run2017B2017 514
./Calculate.exe list/Filelist_SingleElectron_Run2017C2017.list SingleElectron_Run2017C2017.root SingleElectron_Run2017C2017 515
./Calculate.exe list/Filelist_SingleElectron_Run2017D2017.list SingleElectron_Run2017D2017.root SingleElectron_Run2017D2017 516
./Calculate.exe list/Filelist_SingleElectron_Run2017E2017.list SingleElectron_Run2017E2017.root SingleElectron_Run2017E2017 517
./Calculate.exe list/Filelist_SingleElectron_Run2017F2017.list SingleElectron_Run2017F2017.root SingleElectron_Run2017F2017 518
./Calculate.exe list/Filelist_SingleMuon_Run2016B-ver1_HIPM2016APV.list SingleMuon_Run2016B-ver1_HIPM2016APV.root SingleMuon_Run2016B-ver1_HIPM2016APV 519
./Calculate.exe list/Filelist_SingleMuon_Run2016B-ver2_HIPM2016APV.list SingleMuon_Run2016B-ver2_HIPM2016APV.root SingleMuon_Run2016B-ver2_HIPM2016APV 520
./Calculate.exe list/Filelist_SingleMuon_Run2016C-HIPM2016APV.list SingleMuon_Run2016C-HIPM2016APV.root SingleMuon_Run2016C-HIPM2016APV 521
./Calculate.exe list/Filelist_SingleMuon_Run2016D-HIPM2016APV.list SingleMuon_Run2016D-HIPM2016APV.root SingleMuon_Run2016D-HIPM2016APV 522
./Calculate.exe list/Filelist_SingleMuon_Run2016E-HIPM2016APV.list SingleMuon_Run2016E-HIPM2016APV.root SingleMuon_Run2016E-HIPM2016APV 523
./Calculate.exe list/Filelist_SingleMuon_Run2016F-HIPM2016APV.list SingleMuon_Run2016F-HIPM2016APV.root SingleMuon_Run2016F-HIPM2016APV 524
./Calculate.exe list/Filelist_SingleMuon_Run2016F2016.list SingleMuon_Run2016F2016.root SingleMuon_Run2016F2016 525
./Calculate.exe list/Filelist_SingleMuon_Run2016G2016.list SingleMuon_Run2016G2016.root SingleMuon_Run2016G2016 526
./Calculate.exe list/Filelist_SingleMuon_Run2016H2016.list SingleMuon_Run2016H2016.root SingleMuon_Run2016H2016 527
./Calculate.exe list/Filelist_SingleMuon_Run2017B2017.list SingleMuon_Run2017B2017.root SingleMuon_Run2017B2017 528
./Calculate.exe list/Filelist_SingleMuon_Run2017C2017.list SingleMuon_Run2017C2017.root SingleMuon_Run2017C2017 529
./Calculate.exe list/Filelist_SingleMuon_Run2017D2017.list SingleMuon_Run2017D2017.root SingleMuon_Run2017D2017 530
./Calculate.exe list/Filelist_SingleMuon_Run2017E2017.list SingleMuon_Run2017E2017.root SingleMuon_Run2017E2017 531
./Calculate.exe list/Filelist_SingleMuon_Run2017F2017.list SingleMuon_Run2017F2017.root SingleMuon_Run2017F2017 532
./Calculate.exe list/Filelist_SingleMuon_Run2017G2017.list SingleMuon_Run2017G2017.root SingleMuon_Run2017G2017 533
./Calculate.exe list/Filelist_SingleMuon_Run2017H2017.list SingleMuon_Run2017H2017.root SingleMuon_Run2017H2017 534
./Calculate.exe list/Filelist_SingleMuon_Run2018A2018.list SingleMuon_Run2018A2018.root SingleMuon_Run2018A2018 535
./Calculate.exe list/Filelist_SingleMuon_Run2018B2018.list SingleMuon_Run2018B2018.root SingleMuon_Run2018B2018 536
./Calculate.exe list/Filelist_SingleMuon_Run2018C2018.list SingleMuon_Run2018C2018.root SingleMuon_Run2018C2018 537
./Calculate.exe list/Filelist_SingleMuon_Run2018D2018.list SingleMuon_Run2018D2018.root SingleMuon_Run2018D2018 538

