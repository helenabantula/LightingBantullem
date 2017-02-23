//
//  SingleChannel.cpp
//  LightingBantullem
//
//  Created by Helena Bantulà i Fonts on 3/2/17.
//
//

#include "SingleChannel.h"


SingleChannel::SingleChannel(string order):Element(order){

    name = "SingleChannel";

    i = &data[0];

}


void SingleChannel::update(){
    
    switch (myIntensityState) {
            
        case STATE_FIXED_INTENSITY:
            break;
            
        case STATE_FADE_INTENSITY:
            break;
        case STATE_FOLLOW_INTENSITY:
            *i = ofMap(generator.getSignal(), 0, 1, Amin, Amax);
            break;
            
        default:
            break;
    }
}




void SingleChannel::SetIntensity(unsigned char targetI, float fadeTime){
        myIntensity = *i;
        Tweenzor::add(i,myIntensity, targetI, 0.f, fadeTime, 0);
        Tweenzor::getTween(i)->setRepeat( 2, true );
    
        myIntensityState = STATE_FIXED_INTENSITY;

}


void SingleChannel::FollowSignal(int Amin_, int Amax_, signalState signal, int freq, int phase, float randomComponent)
{
    Amin = Amin_;
    Amax = Amax_;
    
    myIntensityState = STATE_FOLLOW_INTENSITY;
    SignalGenerator generator2(signal,freq,phase,randomComponent);
    generator = generator2;
}

