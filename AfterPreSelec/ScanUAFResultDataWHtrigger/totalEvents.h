//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Aug 10 22:11:18 2023 by ROOT version 6.26/06
// from TTree totalEvents/yifan events
// found on file: Had_allsig.root
//////////////////////////////////////////////////////////

#ifndef totalEvents_h
#define totalEvents_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class totalEvents {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Float_t         Hbbscore;
   Float_t         Hbbmass;
   Float_t         Hbbmsoftdrop;
   Float_t         Hbbtau21;
   Float_t         Hbbtau32;
   Float_t         Hbbtau1;
   Float_t         Hbbtau2;
   Float_t         Hbbtau3;
   Float_t         HbbPt;
   Float_t         Wjetscore;
   Float_t         Wjetmass;
   Float_t         Wjetmsoftdrop;
   Float_t         Wjettau21;
   Float_t         Wjettau32;
   Float_t         Wjettau1;
   Float_t         Wjettau2;
   Float_t         Wjettau3;
   Float_t         WjetPt;
   Float_t         Zjetscore;
   Float_t         Zjetmass;
   Float_t         Zjetmsoftdrop;
   Float_t         Zjettau21;
   Float_t         Zjettau32;
   Float_t         Zjettau1;
   Float_t         Zjettau2;
   Float_t         Zjettau3;
   Float_t         ZjetPt;
   Float_t         secfatjetscore;
   Float_t         secfatjetmass;
   Float_t         secfatjetmsoftdrop;
   Float_t         secfatjettau21;
   Float_t         secfatjettau32;
   Float_t         secfatjettau1;
   Float_t         secfatjettau2;
   Float_t         secfatjettau3;
   Float_t         secfatjetPt;
   Float_t         n_loose_ak4jet;
   Float_t         n_medium_ak4jet;
   Float_t         leptonpt;
   Float_t         VBSMjj;
   Float_t         VBSdetajj;
   Float_t         VBSdphijj;
   Float_t         VBSPtjj;
   Float_t         Mlbmin;
   Float_t         Mlbminloose;
   Float_t         Mlbminmedium;
   Float_t         trans_E;
   Float_t         MET;
   Float_t         weight;
   Float_t         fabsweight;
   Float_t         divide;
   Int_t           SampleTag;

   // List of branches
   TBranch        *b_&Hbbscore;   //!
   TBranch        *b_&Hbbmass;   //!
   TBranch        *b_&Hbbmsoftdrop;   //!
   TBranch        *b_&Hbbtau21;   //!
   TBranch        *b_&Hbbtau32;   //!
   TBranch        *b_&Hbbtau1;   //!
   TBranch        *b_&Hbbtau2;   //!
   TBranch        *b_&Hbbtau3;   //!
   TBranch        *b_&HbbPt;   //!
   TBranch        *b_&Wjetscore;   //!
   TBranch        *b_&Wjetmass;   //!
   TBranch        *b_&Wjetmsoftdrop;   //!
   TBranch        *b_&Wjettau21;   //!
   TBranch        *b_&Wjettau32;   //!
   TBranch        *b_&Wjettau1;   //!
   TBranch        *b_&Wjettau2;   //!
   TBranch        *b_&Wjettau3;   //!
   TBranch        *b_&WjetPt;   //!
   TBranch        *b_&Zjetscore;   //!
   TBranch        *b_&Zjetmass;   //!
   TBranch        *b_&Zjetmsoftdrop;   //!
   TBranch        *b_&Zjettau21;   //!
   TBranch        *b_&Zjettau32;   //!
   TBranch        *b_&Zjettau1;   //!
   TBranch        *b_&Zjettau2;   //!
   TBranch        *b_&Zjettau3;   //!
   TBranch        *b_&ZjetPt;   //!
   TBranch        *b_&secfatjetscore;   //!
   TBranch        *b_&secfatjetmass;   //!
   TBranch        *b_&secfatjetmsoftdrop;   //!
   TBranch        *b_&secfatjettau21;   //!
   TBranch        *b_&secfatjettau32;   //!
   TBranch        *b_&secfatjettau1;   //!
   TBranch        *b_&secfatjettau2;   //!
   TBranch        *b_&secfatjettau3;   //!
   TBranch        *b_&secfatjetPt;   //!
   TBranch        *b_&n_loose_ak4jet;   //!
   TBranch        *b_&n_medium_ak4jet;   //!
   TBranch        *b_&leptonpt;   //!
   TBranch        *b_&VBSMjj;   //!
   TBranch        *b_&VBSdetajj;   //!
   TBranch        *b_&VBSdphijj;   //!
   TBranch        *b_&VBSPtjj;   //!
   TBranch        *b_&Mlbmin;   //!
   TBranch        *b_&Mlbminloose;   //!
   TBranch        *b_&Mlbminmedium;   //!
   TBranch        *b_&trans_E;   //!
   TBranch        *b_&MET;   //!
   TBranch        *b_&weight;   //!
   TBranch        *b_&fabsweight;   //!
   TBranch        *b_&divide;   //!
   TBranch        *b_SampleTag;   //!

   totalEvents(TTree *tree=0);
   virtual ~totalEvents();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef totalEvents_cxx
totalEvents::totalEvents(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Had_allsig.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("Had_allsig.root");
      }
      f->GetObject("totalEvents",tree);

   }
   Init(tree);
}

totalEvents::~totalEvents()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t totalEvents::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t totalEvents::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void totalEvents::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Hbbscore", &Hbbscore, &b_&Hbbscore);
   fChain->SetBranchAddress("Hbbmass", &Hbbmass, &b_&Hbbmass);
   fChain->SetBranchAddress("Hbbmsoftdrop", &Hbbmsoftdrop, &b_&Hbbmsoftdrop);
   fChain->SetBranchAddress("Hbbtau21", &Hbbtau21, &b_&Hbbtau21);
   fChain->SetBranchAddress("Hbbtau32", &Hbbtau32, &b_&Hbbtau32);
   fChain->SetBranchAddress("Hbbtau1", &Hbbtau1, &b_&Hbbtau1);
   fChain->SetBranchAddress("Hbbtau2", &Hbbtau2, &b_&Hbbtau2);
   fChain->SetBranchAddress("Hbbtau3", &Hbbtau3, &b_&Hbbtau3);
   fChain->SetBranchAddress("HbbPt", &HbbPt, &b_&HbbPt);
   fChain->SetBranchAddress("Wjetscore", &Wjetscore, &b_&Wjetscore);
   fChain->SetBranchAddress("Wjetmass", &Wjetmass, &b_&Wjetmass);
   fChain->SetBranchAddress("Wjetmsoftdrop", &Wjetmsoftdrop, &b_&Wjetmsoftdrop);
   fChain->SetBranchAddress("Wjettau21", &Wjettau21, &b_&Wjettau21);
   fChain->SetBranchAddress("Wjettau32", &Wjettau32, &b_&Wjettau32);
   fChain->SetBranchAddress("Wjettau1", &Wjettau1, &b_&Wjettau1);
   fChain->SetBranchAddress("Wjettau2", &Wjettau2, &b_&Wjettau2);
   fChain->SetBranchAddress("Wjettau3", &Wjettau3, &b_&Wjettau3);
   fChain->SetBranchAddress("WjetPt", &WjetPt, &b_&WjetPt);
   fChain->SetBranchAddress("Zjetscore", &Zjetscore, &b_&Zjetscore);
   fChain->SetBranchAddress("Zjetmass", &Zjetmass, &b_&Zjetmass);
   fChain->SetBranchAddress("Zjetmsoftdrop", &Zjetmsoftdrop, &b_&Zjetmsoftdrop);
   fChain->SetBranchAddress("Zjettau21", &Zjettau21, &b_&Zjettau21);
   fChain->SetBranchAddress("Zjettau32", &Zjettau32, &b_&Zjettau32);
   fChain->SetBranchAddress("Zjettau1", &Zjettau1, &b_&Zjettau1);
   fChain->SetBranchAddress("Zjettau2", &Zjettau2, &b_&Zjettau2);
   fChain->SetBranchAddress("Zjettau3", &Zjettau3, &b_&Zjettau3);
   fChain->SetBranchAddress("ZjetPt", &ZjetPt, &b_&ZjetPt);
   fChain->SetBranchAddress("secfatjetscore", &secfatjetscore, &b_&secfatjetscore);
   fChain->SetBranchAddress("secfatjetmass", &secfatjetmass, &b_&secfatjetmass);
   fChain->SetBranchAddress("secfatjetmsoftdrop", &secfatjetmsoftdrop, &b_&secfatjetmsoftdrop);
   fChain->SetBranchAddress("secfatjettau21", &secfatjettau21, &b_&secfatjettau21);
   fChain->SetBranchAddress("secfatjettau32", &secfatjettau32, &b_&secfatjettau32);
   fChain->SetBranchAddress("secfatjettau1", &secfatjettau1, &b_&secfatjettau1);
   fChain->SetBranchAddress("secfatjettau2", &secfatjettau2, &b_&secfatjettau2);
   fChain->SetBranchAddress("secfatjettau3", &secfatjettau3, &b_&secfatjettau3);
   fChain->SetBranchAddress("secfatjetPt", &secfatjetPt, &b_&secfatjetPt);
   fChain->SetBranchAddress("n_loose_ak4jet", &n_loose_ak4jet, &b_&n_loose_ak4jet);
   fChain->SetBranchAddress("n_medium_ak4jet", &n_medium_ak4jet, &b_&n_medium_ak4jet);
   fChain->SetBranchAddress("leptonpt", &leptonpt, &b_&leptonpt);
   fChain->SetBranchAddress("VBSMjj", &VBSMjj, &b_&VBSMjj);
   fChain->SetBranchAddress("VBSdetajj", &VBSdetajj, &b_&VBSdetajj);
   fChain->SetBranchAddress("VBSdphijj", &VBSdphijj, &b_&VBSdphijj);
   fChain->SetBranchAddress("VBSPtjj", &VBSPtjj, &b_&VBSPtjj);
   fChain->SetBranchAddress("Mlbmin", &Mlbmin, &b_&Mlbmin);
   fChain->SetBranchAddress("Mlbminloose", &Mlbminloose, &b_&Mlbminloose);
   fChain->SetBranchAddress("Mlbminmedium", &Mlbminmedium, &b_&Mlbminmedium);
   fChain->SetBranchAddress("trans_E", &trans_E, &b_&trans_E);
   fChain->SetBranchAddress("MET", &MET, &b_&MET);
   fChain->SetBranchAddress("weight", &weight, &b_&weight);
   fChain->SetBranchAddress("fabsweight", &fabsweight, &b_&fabsweight);
   fChain->SetBranchAddress("divide", &divide, &b_&divide);
   fChain->SetBranchAddress("SampleTag", &SampleTag, &b_SampleTag);
   Notify();
}

Bool_t totalEvents::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void totalEvents::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t totalEvents::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef totalEvents_cxx
