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
    
        float* i = 0;     //intensity
        float myIntensity = 0;     //intensity
        intensityState myIntensityState;
    
    
        SingleChannel(string order = "I");
        ~SingleChannel(){};
    
        void update();
    
        void SetIntensity(float targetI, float fadeTime);
        void FadingToIntensity();
};



#endif /* SingleChannel_hpp */
