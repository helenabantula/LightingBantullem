//
//  ArtnetSender.hpp
//  LightingBantullem
//
//  Created by Helena Bantulà i Fonts on 13/1/17.
//
//

#ifndef ArtnetSender_h
#define ArtnetSender_h

#include <stdio.h>
#include "ofMain.h"
#include "ofxArtNet.h"


// qui crea els grups i els te com a vector es ArtnetSender pero des d'ofapp se li diu com han de ser. La jerarquia es: ArtnetSender-->Groups-->Elements


class ArtnetSender{
public:
    
    //Constructor - destructor
    ArtnetSender();
    ~ArtnetSender();
    
    
    
    string machineIP;
    string enttecIP;
    
    
    void setup();
    void obtainGroupsInfo();
    
    //Artnet
    //void setupArtnet();
    void sendDmx();
    
    
private:
    
    ofxArtNet artnet;
    vector<int> dmxDataPacket;
    
    
};



#endif /* ArtnetSender_h */
