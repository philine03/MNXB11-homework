#include "momentum3D.h"
#include <TFile.h>
#include <TTree.h>
#include <TRandom.h>


void write(){
// Initialize your object e.g. as a pointer
momentum3D* object = new momentum3D();
// Create your root file here
TFile* file = TFile::Open("tree_file.root", "RECREATE");
// Create your TTree here
TTree* tree = new TTree("tree", "momentum3D tree");
// And the associated branches underneath
// for example a branch with your personal object type
tree->Branch("object", "momentum3D", &object);

// Now we create our loop for filling the tree with some random data
// For loop here
Int_t nEvents = 1000;
for (Int_t i{0}; i<nEvents; i++){
    Double_t px = gRandom->Gaus(0,.02);
    Double_t py = gRandom->Gaus(0,.02);
    Double_t pz = gRandom->Gaus(0,.02);

    // Initialize your new object below
    *object = momentum3D(px, py, pz);
    // Now fill tree
    tree->Fill();   

} // define how many events you want


// save the tree/file
tree->Write();
file->Close();
// Remember to delete it again otherwise you will have memory leak!
delete object;
delete file;

}