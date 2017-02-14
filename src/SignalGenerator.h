//
//  SignalGenerator.hpp
//  LightingBantullem
//
//  Created by Guillem Galimany on 14/2/17.
//
//

#ifndef SignalGenerator_h
#define SignalGenerator_h


#include <stdio.h>
#include "ofMain.h"




enum signalState
{
    STATE_SIN,
    STATE_NOISE,
    STATE_SQUARE
    
};


class SignalGenerator {
    
public:
    
    
    signalState mySignalState;
    
    int myFreq;
    int myPhase;
    
    float mySignal;
    
    float timer = 0;
    
    SignalGenerator(){};
    //SignalGenerator(signalState signal);
    SignalGenerator(signalState signal, int frequency, int phase);
    
    ~SignalGenerator(){};

    void update();
    float getSignal();
    
    
};






#endif /* SignalGenerator_hp */
