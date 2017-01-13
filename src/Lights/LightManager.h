//
//  LightManager.hpp
//  LightingBantullem
//
//  Created by Helena Bantulà i Fonts on 13/1/17.
//
//

#ifndef LightManager_h
#define LightManager_h

#include <stdio.h>
#include "ofMain.h"
#include "ofxArtNet.h"


class LightManager{
public:
    
    //Constructor - destructor
    LightManager();
    ~LightManager();
    
    
    
    void setup();
    void obtainGroupsDmx();
    
    //Artnet
    void setupArtnet();
    void sendDmx();
    
    
private:

    ofxArtNet artnet;
    vector<unsigned char> dmxDataPacket;
    
    
};



#endif /* LightManager_h */
