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
        Element(){};
        ~Element(){};

    
        //Attributes
        string name;
    
        int numCh;
    
    
        vector<unsigned char> data;   //veure quin tipus de data va be que sigui per com espera rebre dmx l'addon!
    

    
    
        //Methods
        vector<unsigned char> getInfo(){
            this->update();
            return data;
        };
    
        virtual void SetColor(ofColor color, float fadeTime){};
        virtual void update(){};
    
    
};










#endif /* Element_h*/
