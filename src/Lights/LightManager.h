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


// qui crea els grups i els te com a vector es LightManager pero des d'ofapp se li diu com han de ser. La jerarquia es: LightManager-->Groups-->Elements


class LightManager{
public:
    
    //Constructor - destructor
    LightManager();
    ~LightManager();
    
    
    
    string machineIP;
    string enttecIP;
    
    
    void setup();
    void obtainGroupsInfo();
    
    //Artnet
    void setupArtnet();
    void sendDmx();
    
    
private:

    ofxArtNet artnet;
    vector<int> dmxDataPacket;
    
    
};



#endif /* LightManager_h */
