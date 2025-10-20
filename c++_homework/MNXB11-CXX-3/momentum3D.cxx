#include "momentum3D.h" //quotation marks tell compiler to look in directory
#include <iostream>

ClassImp(momentum3D)

// default constructor - ROOT needs the default one where everything is set to 0
momentum3D::momentum3D() :
// initialize all members to null
    px(0.),
    py(0.),
    pz(0.)
{
}
// another constructor
momentum3D::momentum3D(Double_t px_val, Double_t py_val, Double_t pz_val) :
// something should go here
    px(px_val),
    py(py_val),
    pz(pz_val)
{
    magnitude = std::sqrt(px*px + py*py +pz*pz); //magnitude calculated inside of constructor
}
// destructor
momentum3D::~momentum3D(){
// right now I'm empty
}

Double_t momentum3D::GetMagnitude() const { //getter func for magnitude
    return magnitude;
}