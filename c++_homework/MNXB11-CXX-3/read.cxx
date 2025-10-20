#include "momentum3D.h"
#include <TFile.h>
#include <TTree.h>
#include <TH2D.h>
#include <iostream>

void read(){
// initialize your object
momentum3D* object = nullptr;

// open your file
TFile *file = TFile::Open("tree_file.root");
// get your tree
TTree* tree = (TTree*) file->Get("tree");

// remember to set the branch address
tree->SetBranchAddress("object", &object);

//histogram
TH2D* histogram = new TH2D("histogram", "px against py;px;py", 50, -0.07, 0.07, 50, -0.07, 0.07);


Int_t N = tree->GetEntries();
for (Int_t i{0}; i<N; i++){ // loop over the whole tree
tree->GetEntry(i);
// do something
histogram->Fill(object->px, object->py);
}
histogram->Draw();
file->Close();
delete file;
}