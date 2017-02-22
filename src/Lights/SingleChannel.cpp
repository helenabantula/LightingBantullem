//
//  SingleChannel.cpp
//  LightingBantullem
//
//  Created by Helena Bantulà i Fonts on 3/2/17.
//
//

#include "SingleChannel.h"


SingleChannel::SingleChannel(){

    numCh = 1;
    name = "SingleChannel";
    data.resize(numCh,0);
    //data[0] = 200;          //per poder distingir quan començo un nou element al vector DMX de tothom (a LightManager)
    i = &data[0];

}


void SingleChannel::update(){
    
    switch (myIntensityState) {
            
        case STATE_FIXED_INTENSITY:
            // fa falta?
            break;
            
        case STATE_FADE_INTENSITY:
            FadingToIntensity();
            break;
        case STATE_FOLLOW_INTENSITY:
            
            break;
            
        default:
            break;
    }
}



void SingleChannel::FadingToIntensity(){
    
    
    int lerpIntensity = myIntensity;
    
    intensityTimer += 1 / ofGetFrameRate();
    
    float t = intensityTimer/intensityFadeTime;
    
    *i = (1-t)*(int)myIntensity + t*(int)targetIntensity;
//    int a =(1-t)*(int)myIntensity + t*(int)targetIntensity;
//            cout << a << endl;
//    
//    *i = a;
    if (intensityTimer >= intensityFadeTime)
        myIntensityState = STATE_FIXED_INTENSITY;
    
    
    
}



void SingleChannel::SetIntensity(unsigned char targetI, float fadeTime){
    if (fadeTime == 0){
            *i = targetI;
    }
    else{
        myIntensity = *i;

        targetIntensity = targetI;
        intensityFadeTime = fadeTime;
        intensityTimer = 0;
        myIntensityState = STATE_FADE_INTENSITY;
    }
}