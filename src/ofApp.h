#pragma once

#include "ofMain.h"
#include "LightManager.h"


class ofApp : public ofBaseApp{

	public:
        LightManager manager;
    
		void setup();
		void update();
		void draw();
    
        void keyPressed(int key);
    
        void keyReleased(int key);

        bool isKeyReleased = true;

};
