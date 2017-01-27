//
//  LightManager.hpp
//  LightingBantullem
//
//  Created by Helena Bantulà i Fonts on 24/1/17.
//
//

#ifndef LightManager_h
#define LightManager_h

#include <stdio.h>

#include "Group.h"
#include "ArtnetSender.h"
#include "ofMain.h"



class LightManager{
public:

    vector<Group> groups;
    
    ArtnetSender sender;
    
    vector<unsigned char> dmxDataPacket;

    
    //Constructor - destructor
    LightManager(){};
    ~LightManager(){};
    
    void setup();
    void update();
    
    void changeGroupState(string state);
    
    
    
private:
    
    

    
};



#endif /* LightManager_hpp */


