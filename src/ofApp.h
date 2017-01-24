#pragma once

#include "ofMain.h"
#include "Lights/LightManager.h"


class ofApp : public ofBaseApp{

	public:
        LightManager manager;
    
		void setup();
		void update();
		void draw();
		

};
