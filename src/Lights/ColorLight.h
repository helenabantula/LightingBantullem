//
//  ColorLight.hpp
//  LightingBantullem
//
//  Created by Helena Bantulà i Fonts on 3/2/17.
//
//

#ifndef ColorLight_hpp
#define ColorLight_hpp

#include <stdio.h>
#include <Element.h>


enum colorState
{
    FixedColor,
    FadingToColor
};


class ColorLight: public Element {
    public:
    
        unsigned char* r = 0;
        unsigned char* g = 0;
        unsigned char* b = 0;
        unsigned char* w = 0;
        unsigned char* s = 0;
        unsigned char* i = 0;
        unsigned char* a = 0;
    
    
        ofColor myColor; // Color
        ofColor targetColor;
        ofColor initialColor;
        float colorTimer;
        float colorFadeTime;
    
        colorState myColorState;
    
    
        ColorLight(string order);
        ColorLight(){};
        ~ColorLight(){};
    
        virtual void update();
        void AssignMyColor();
        void SetColor(ofColor color, float fadeTime);
        void fadingToColor();
    
    
    
};





#endif /* ColorLight_hpp */
