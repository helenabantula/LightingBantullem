//
//  Element.hpp
//  LightingBantullem
//
//  Created by Helena Bantulà i Fonts on 13/1/17.
//
//

#ifndef Element_h
#define Element_h

#include <stdio.h>
#include "ofMain.h"


class Element{
public:
    
    //Constructor - destructor
    Element();
    ~Element();
    
    
    
    //State
    enum state{
        STATE_QUIET,
        STATE_STROBO,
        STATE_FADE
    };
    
    
    //Attributes
    int numCh;
    
    int iR;
    int iG;
    int iB;
    int iW;
    
    int iS;     //strobo
    int iI;     //intensity

    int iP;     //pan
    int iT;     //tilt
    
    vector<int> data;   //veure quin tipus de data va be que sigui per com espera rebre dmx l'addon!
    
    
    
    
    //Methods
    void setup(string order);
    vector<int> getInfo(){return data;};
    
    
};










#endif /* Element_h*/
