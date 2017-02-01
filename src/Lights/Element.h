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
        void setup(string order);
        void update();

    
    
        //State
        enum state{
            STATE_QUIET,
            STATE_STROBO,
            STATE_FADE
        };
    
        enum movementState
        {
            FixedPosition,
            MovingToPosition,
            MovingInCircles
        };
    
        movementState myMovementState;

        enum colorState
        {
            FixedColor,
            FadingToColor
        };
    
        colorState myColorState;
    
    
        //Attributes
        string name;
    
        int numCh;
    
        unsigned char* r = 0;
        unsigned char* g = 0;
        unsigned char* b = 0;
        unsigned char* a = 0;
        unsigned char* w = 0;
    
        unsigned char* s = 0;     //strobo
        unsigned char* i = 0;     //intensity

        unsigned char* p = 0;     //pan
        unsigned char* t = 0;     //tilt
    
        vector<unsigned char> data;   //veure quin tipus de data va be que sigui per com espera rebre dmx l'addon!
    
        ofColor myColor; // Color
    
    
        //Methods
        vector<unsigned char> getInfo(){return data;};
    
        void SetColor(ofColor color);
    
    
};










#endif /* Element_h*/
