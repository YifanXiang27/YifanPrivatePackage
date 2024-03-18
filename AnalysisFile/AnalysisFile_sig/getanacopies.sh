#!/bin/bash

# Task 1: Replace P_Ak4Jet_Reso_Scale_Central with P_Ak4Jet_Reso_Scale_up
sed 's/P_Ak4Jet_Reso_Scale_Central/P_Ak4Jet_Reso_Scale_up/g' ./Src/Analysis_central.C > ./Src/Analysis_ak4Jet_JER_up.C

# Task 2: Replace P_Ak4Jet_Reso_Scale_Central with P_Ak4Jet_Reso_Scale_down
sed 's/P_Ak4Jet_Reso_Scale_Central/P_Ak4Jet_Reso_Scale_down/g' ./Src/Analysis_central.C > ./Src/Analysis_ak4Jet_JER_down.C

# Task 3: Append contents of ak4jerMetup.txt and add JEC correction
#awk '/\/\/ADDINGMETCORRECTIONS/ {print; system("cat ./TEXTForCorr/ak4jerMetup.txt"); next} 1' ./Src/Analysis_central.C > ./Src/Analysis_ak4Jet_JEC_up.C
#sed -i '/\/\/ADDINGAK4JETJECCORRECTIONS/a RJet_pt[jj] = RJet_pt[jj] * (1 + P_Ak4Jet_Scale->GetBinContent(P_Ak4Jet_Scale->FindBin(RJet_eta[jj],RJet_pt[jj])));' ./Src/Analysis_ak4Jet_JEC_up.C

# Task 4: Append contents of ak4jerMetdown.txt and add JEC correction
#awk '/\/\/ADDINGMETCORRECTIONS/ {print; system("cat ./TEXTForCorr/ak4jerMetdown.txt"); next} 1' ./Src/Analysis_central.C > ./Src/Analysis_ak4Jet_JEC_down.C
#sed -i '/\/\/ADDINGAK4JETJECCORRECTIONS/a RJet_pt[jj] = RJet_pt[jj] * (1 - P_Ak4Jet_Scale->GetBinContent(P_Ak4Jet_Scale->FindBin(RJet_eta[jj],RJet_pt[jj])));' ./Src/Analysis_ak4Jet_JEC_down.C

#!/bin/bash

#!/bin/bash

# Define the list of tags
tags=("Absolute" "Absolute_year" "BBEC1" "BBEC1_year" "EC2" "EC2_year" "FlavorQCD" "HF" "HF_year" "RelativeBal" "RelativeSample_year")

# Loop 11 times
for idx in {0..10}; do
    # Create the tag from the list
    tag=${tags[$idx]}

    # Task 3: Append contents of ak4jerMetup.txt and add JEC correction
    awk '/\/\/ADDINGMETCORRECTIONS/ {print; system("cat ./TEXTForCorr/ak4jerMetup.txt"); next} 1' ./Src/Analysis_central.C > "./Src/Analysis_ak4Jet_JEC_${tag}_up.C"

    # Replace "P_Ak4Jet_Scale" with "P_Ak4Jet_Scale[idx]"
    sed -i "/\/\/ADDINGAK4JETJECCORRECTIONS/a RJet_pt[jj] = RJet_pt[jj] * (1 + P_Ak4Jet_Scale->GetBinContent(P_Ak4Jet_Scale->FindBin(RJet_eta[jj],RJet_pt[jj])));" "./Src/Analysis_ak4Jet_JEC_${tag}_up.C"
    sed -i "/\/\/ADDINGAK8JETJECCORRECTIONS/a RFatJet_pt[jj] = RFatJet_pt[jj] * (1 + P_Ak4Jet_Scale->GetBinContent(P_Ak4Jet_Scale->FindBin(RFatJet_eta[jj],RFatJet_pt[jj])));" "./Src/Analysis_ak4Jet_JEC_${tag}_up.C"

    # Replace "P_Ak4Jet_Scale" with "P_Ak4Jet_Scale[$idx]"
    sed -i "s/P_Ak4Jet_Scale/P_Ak4Jet_Scale[$idx]/g" "./Src/Analysis_ak4Jet_JEC_${tag}_up.C"

    # Task 4: Append contents of ak4jerMetdown.txt and add JEC correction
    awk '/\/\/ADDINGMETCORRECTIONS/ {print; system("cat ./TEXTForCorr/ak4jerMetdown.txt"); next} 1' ./Src/Analysis_central.C > "./Src/Analysis_ak4Jet_JEC_${tag}_down.C"

    # Replace "P_Ak4Jet_Scale" with "P_Ak4Jet_Scale[idx]"
    sed -i "/\/\/ADDINGAK4JETJECCORRECTIONS/a RJet_pt[jj] = RJet_pt[jj] * (1 - P_Ak4Jet_Scale->GetBinContent(P_Ak4Jet_Scale->FindBin(RJet_eta[jj],RJet_pt[jj])));" "./Src/Analysis_ak4Jet_JEC_${tag}_down.C"
    sed -i "/\/\/ADDINGAK8JETJECCORRECTIONS/a RFatJet_pt[jj] = RFatJet_pt[jj] * (1 - P_Ak4Jet_Scale->GetBinContent(P_Ak4Jet_Scale->FindBin(RFatJet_eta[jj],RFatJet_pt[jj])));" "./Src/Analysis_ak4Jet_JEC_${tag}_down.C"

    # Replace "P_Ak4Jet_Scale" with "P_Ak4Jet_Scale[$idx]"
    sed -i "s/P_Ak4Jet_Scale/P_Ak4Jet_Scale[$idx]/g" "./Src/Analysis_ak4Jet_JEC_${tag}_down.C"
done


sed '/\/\/ADDINGELECCORRECTIONS/a leptonsf = leptonsfRecoup;' ./Src/Analysis_central.C > ./Src/Analysis_elec_Reco_up.C
sed '/\/\/ADDINGELECCORRECTIONS/a leptonsf = leptonsftrigup;' ./Src/Analysis_central.C > ./Src/Analysis_elec_Trig_up.C
sed '/\/\/ADDINGELECCORRECTIONS/a leptonsf = leptonsfReco_ttHup;' ./Src/Analysis_central.C > ./Src/Analysis_elec_Reco_ttH_up.C
sed '/\/\/ADDINGELECCORRECTIONS/a leptonsf = leptonsfttH_tightup;' ./Src/Analysis_central.C > ./Src/Analysis_elec_ttH_tight_up.C

sed '/\/\/ADDINGELECCORRECTIONS/a leptonsf = leptonsfRecodown;' ./Src/Analysis_central.C > ./Src/Analysis_elec_Reco_down.C
sed '/\/\/ADDINGELECCORRECTIONS/a leptonsf = leptonsftrigdown;' ./Src/Analysis_central.C > ./Src/Analysis_elec_Trig_down.C
sed '/\/\/ADDINGELECCORRECTIONS/a leptonsf = leptonsfReco_ttHdown;' ./Src/Analysis_central.C > ./Src/Analysis_elec_Reco_ttH_down.C
sed '/\/\/ADDINGELECCORRECTIONS/a leptonsf = leptonsfttH_tightdown;' ./Src/Analysis_central.C > ./Src/Analysis_elec_ttH_tight_down.C

sed '/\/\/ADDINGMUONCORRECTIONS/a leptonsf = leptonsfRecoup;' ./Src/Analysis_central.C > ./Src/Analysis_muon_Reco_up.C
sed '/\/\/ADDINGMUONCORRECTIONS/a leptonsf = leptonsfReco_ttHup;' ./Src/Analysis_central.C > ./Src/Analysis_muon_Reco_ttH_up.C
sed '/\/\/ADDINGMUONCORRECTIONS/a leptonsf = leptonsfttH_tightup;' ./Src/Analysis_central.C > ./Src/Analysis_muon_ttH_tight_up.C

sed '/\/\/ADDINGMUONCORRECTIONS/a leptonsf = leptonsfRecodown;' ./Src/Analysis_central.C > ./Src/Analysis_muon_Reco_down.C
sed '/\/\/ADDINGMUONCORRECTIONS/a leptonsf = leptonsfReco_ttHdown;' ./Src/Analysis_central.C > ./Src/Analysis_muon_Reco_ttH_down.C
sed '/\/\/ADDINGMUONCORRECTIONS/a leptonsf = leptonsfttH_tightdown;' ./Src/Analysis_central.C > ./Src/Analysis_muon_ttH_tight_down.C




#sed '/\/\/ADDINGELECCORRECTIONS/a leptonsf = leptonidup;' ./Src/Analysis_central.C > ./Src/Analysis_elec_up.C
#sed '/\/\/ADDINGELECCORRECTIONS/a leptonsf = leptoniddown;' ./Src/Analysis_central.C > ./Src/Analysis_elec_down.C
#sed '/\/\/ADDINGMUONCORRECTIONS/a leptonsf = leptonidup;' ./Src/Analysis_central.C > ./Src/Analysis_muon_up.C
#sed '/\/\/ADDINGMUONCORRECTIONS/a leptonsf = leptoniddown;' ./Src/Analysis_central.C > ./Src/Analysis_muon_down.C

sed '/\/\/ADDINGGENERALWEIGHT/a weight *=RPSWeight[0];' ./Src/Analysis_central.C > ./Src/Analysis_ISR_up.C
sed '/\/\/ADDINGGENERALWEIGHT/a weight *=RPSWeight[2];' ./Src/Analysis_central.C > ./Src/Analysis_ISR_down.C
sed '/\/\/ADDINGGENERALWEIGHT/a weight *=RPSWeight[1];' ./Src/Analysis_central.C > ./Src/Analysis_FSR_up.C
sed '/\/\/ADDINGGENERALWEIGHT/a weight *=RPSWeight[3];' ./Src/Analysis_central.C > ./Src/Analysis_FSR_down.C

sed '/\/\/ADDINGGENERALWEIGHT/a weight *=RLHEScaleWeight[1];' ./Src/Analysis_central.C > ./Src/Analysis_muR_down.C
sed '/\/\/ADDINGGENERALWEIGHT/a weight *=RLHEScaleWeight[7];' ./Src/Analysis_central.C > ./Src/Analysis_muR_up.C
sed '/\/\/ADDINGGENERALWEIGHT/a weight *=RLHEScaleWeight[3];' ./Src/Analysis_central.C > ./Src/Analysis_muF_down.C
sed '/\/\/ADDINGGENERALWEIGHT/a weight *=RLHEScaleWeight[5];' ./Src/Analysis_central.C > ./Src/Analysis_muF_up.C

sed 's/RL1PreFiringWeight_Nom/RL1PreFiringWeight_Up/g' ./Src/Analysis_central.C > ./Src/Analysis_PreFiring_up.C
sed 's/RL1PreFiringWeight_Nom/RL1PreFiringWeight_Dn/g' ./Src/Analysis_central.C > ./Src/Analysis_PreFiring_down.C


awk '/\/\/ADDINGMETUNCERTAINTIES/ {print; system("cat ./TEXTForCorr/METuncert_up.txt"); next} 1' ./Src/Analysis_central.C > "./Src/Analysis_MET_up.C"
awk '/\/\/ADDINGMETUNCERTAINTIES/ {print; system("cat ./TEXTForCorr/METuncert_down.txt"); next} 1' ./Src/Analysis_central.C > "./Src/Analysis_MET_down.C"

echo "Tasks completed."

