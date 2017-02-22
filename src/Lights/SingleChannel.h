//
//  SingleChannel.hpp
//  LightingBantullem
//
//  Created by Helena Bantulà i Fonts on 3/2/17.
//
//

#ifndef SingleChannel_hpp
#define SingleChannel_hpp

#include <stdio.h>
#include <Element.h>


enum intensityState
{
    STATE_FIXED_INTENSITY,
    STATE_FADE_INTENSITY,
    STATE_FOLLOW_INTENSITY
};

class SingleChannel: public Element {
    public:
    
        unsigned char* i = 0;     //intensity
        unsigned char myIntensity = 0;     //intensity
        intensityState myIntensityState;
        unsigned char targetIntensity;
        float intensityTimer = 0;
        float intensityFadeTime = 0;
    
    
    
    
        SingleChannel();
        ~SingleChannel(){};
    
        void update();
    
        void SetIntensity(unsigned char targetI, float fadeTime);
        void FadingToIntensity();
};



#endif /* SingleChannel_hpp */
