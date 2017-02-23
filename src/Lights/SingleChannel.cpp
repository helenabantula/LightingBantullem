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
            // fa falta?
            break;
            
        case STATE_FADE_INTENSITY:
            break;
        case STATE_FOLLOW_INTENSITY:
            
            break;
            
        default:
            break;
    }
}




void SingleChannel::SetIntensity(unsigned char targetI, float fadeTime){
        myIntensity = *i;
        targetIntensity = targetI;
        Tweenzor::add(i,myIntensity, targetI, 0.f, fadeTime, 0);
        Tweenzor::getTween(i)->setRepeat( 2, true );
}
