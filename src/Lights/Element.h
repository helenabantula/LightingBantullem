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
        Element(string order);
        ~Element();
    
    
    
        //State
        enum state{
            STATE_QUIET,
            STATE_STROBO,
            STATE_FADE
        };
    
    
        //Attributes
        string name;
    
        int numCh;
    
        unsigned char* r;
        unsigned char* g;
        unsigned char* b;
        unsigned char* a;
        unsigned char* w;
    
        unsigned char* s;     //strobo
        unsigned char* i;     //intensity

        unsigned char* p;     //pan
        unsigned char* t;     //tilt
    
        vector<unsigned char> data;   //veure quin tipus de data va be que sigui per com espera rebre dmx l'addon!
    
    
    
        //Methods
        vector<unsigned char> getInfo(){return data;};
    
    
};










#endif /* Element_h*/
