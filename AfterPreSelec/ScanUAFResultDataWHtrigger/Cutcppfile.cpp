            //if(Hbbmass > 160) continue;
            TLorentzVector TJet1;
            TLorentzVector TJet2;
            TJet1.SetPtEtaPhiM(maxjet_pt,maxjet_eta,maxjet_phi,maxjet_mass);
            TJet2.SetPtEtaPhiM(secjet_pt,secjet_eta,secjet_phi,secjet_mass);
            W_mass = (TJet1+TJet2).M();
            if(trans_E < 1000) continue;
            if(W_mass > 150) continue;
            if(trans_E > 3000) continue;
