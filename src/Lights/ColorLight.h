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
    
        float* r = 0;
        float* g = 0;
        float* b = 0;
        float* w = 0;
        float* s = 0;
        float* i = 0;
        float* a = 0;
    
    
        ofColor myColor; // Color
        ofColor targetColor;
        ofColor initialColor;
        float colorTimer;
        float colorFadeTime;
    
        colorState myColorState;
    
    
        ColorLight(string order);
        //ColorLight(){};
        ~ColorLight(){};
    
        virtual void update();
        void AssignMyColor();
        void SetColor(ofColor color, float fadeTime);
        void fadingToColor();
    
        //void FollowSignal(int Amin, int Amax, signalState signal, int freq, int phase, float randomComponent);

    
    
};





#endif /* ColorLight_hpp */
