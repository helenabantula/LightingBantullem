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

SignalGenerator::SignalGenerator(signalState signal, int frequency, int phase)
{
    mySignalState = signal;

    myFreq = frequency;
    myPhase = phase;

}

void SignalGenerator::update()
{
    timer = ofGetElapsedTimef();
    
    switch (mySignalState) {
            
        case STATE_SIN:
            
            mySignal = (sin(myFreq*timer+myPhase)/2)+0.5;
            
            break;
            
        default:
            break;
    }

}

float SignalGenerator::getSignal()
{
    update();
    
    return mySignal;

}
