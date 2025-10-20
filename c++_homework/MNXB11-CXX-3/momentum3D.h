#pragma once

#include <TObject.h>  // root classes inherit from TObject
#include <cmath>

class momentum3D : public TObject {
public:   
    momentum3D(); //default contructor 
    momentum3D(Double_t px_val, Double_t py_val, Double_t pz_val); //Int_t is a ROOT alias for usual type. 
    virtual ~momentum3D(); //destructor 

    Double_t GetMagnitude() const;
    
    Double_t px;
    Double_t py;
    Double_t pz;
    Double_t magnitude;

    ClassDef(momentum3D, 1)
      
};
