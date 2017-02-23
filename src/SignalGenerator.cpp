//
//  SignalGenerator.cpp
//  LightingBantullem
//
//  Created by Guillem Galimany on 14/2/17.
//
//

#include "SignalGenerator.h"



//SignalGenerator::SignalGenerator(signalState signal)
//{
//    mySignalState = signal;
//    
//}

SignalGenerator::SignalGenerator(signalState signal, int frequency, int phase, float randomComponent)
{
    mySignalState = signal;

    myFreq = frequency;
    myPhase = phase;
    myRandomComponent = randomComponent;

}

void SignalGenerator::update()
{
    timer = ofGetElapsedTimef();
    
    float myRandom = ofRandom( - myRandomComponent, myRandomComponent);
    
    switch (mySignalState) {
            
        case STATE_SIN:
            
            mySignal = (sin(myFreq*timer+myPhase)/2)+0.5 + myRandom;
            
            break;
            
        case STATE_COS:
            
            mySignal = (cos(myFreq*timer+myPhase)/2)+0.5 + myRandom;
            
            break;
            
        case STATE_UPSAW:
            
            mySignal = timer*myFreq+myPhase - floor(timer*myFreq+myPhase) + myRandom;
            
            break;
            
        case STATE_DOWNSAW:
            
            mySignal = -timer*myFreq+myPhase - floor(-timer*myFreq+myPhase) + myRandom;
            
            break;
            
        case STATE_TRIANGLE:
            
            mySignal = 1.0 - fabs(fmod(timer*myFreq+myPhase,2.0) - 1.0) + myRandom;
            
            break;
            
        case STATE_RANDOM:
            
            mySignal = ofRandom(0, 1);
            
            break;
            
        case STATE_SQUARE:
            
            float sinus = sin(myFreq*timer+myPhase);
            
            if (sinus > 0)
            {
                mySignal = 0;
            }else
            {
                mySignal = 1;
            }
            
            break;
            
    }
    
    if (mySignal > 1)
        mySignal = 1;
    
    if (mySignal < 0)
        mySignal = 0;
    
}

float SignalGenerator::getSignal()
{
    update();
    
    return mySignal;

}
