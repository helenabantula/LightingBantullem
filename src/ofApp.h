#pragma once

#include "ofMain.h"
#include "LightManager.h"
#include "SignalGenerator.h"



class ofApp : public ofBaseApp{

	public:
        LightManager manager;
    
		void setup();
		void update();
		void draw();
    
        void keyPressed(int key);
    
        void keyReleased(int key);

        bool isKeyReleased = true;

    
        signalState mySignalState1;
        signalState mySignalState2;

        SignalGenerator signalGen1;
        SignalGenerator signalGen2;

};
