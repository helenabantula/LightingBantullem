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
<<<<<<< HEAD
    
=======
        float targetIntensity;

        int Amin;
        int Amax;
>>>>>>> 819be432d058e978d7798b242e412b0491356ad5
    
        SingleChannel(string order = "I");
        ~SingleChannel(){};
    
        void update();
    
<<<<<<< HEAD
        void SetIntensity(float targetI, float fadeTime);
=======
        void SetIntensity(unsigned char targetI, float fadeTime);
    
        void FollowSignal(int Amin, int Amax, signalState signal, int freq, int phase, float randomComponent);

    
    
>>>>>>> 819be432d058e978d7798b242e412b0491356ad5
        void FadingToIntensity();
};



#endif /* SingleChannel_hpp */
