//
//  Group.hpp
//  LightingBantullem
//
//  Created by Helena Bantulà i Fonts on 13/1/17.
//
//

#ifndef Group_h
#define Group_h

#include <stdio.h>
#include "ofMain.h"

#include "Element.h"
#include "SingleChannel.h"
#include "ColorLight.h"
#include "MovingLight.h"

enum lightType{
    LIGHT_SINGLECHANNEL,
    LIGHT_COLOR,
    LIGHT_MOVINGHEAD
};

class Group{
public:
    
    //Constructor - destructor
    Group(){};
    ~Group(){};
    
    vector<Element*> elements;
    int initChannel = 0;
    vector<unsigned char> groupData;
    
    
    void AddElement(lightType type, int number, string order = "");
    vector<unsigned char> getGroupData();
    void setInitChannel(int initChannel_);
    
    
    void setColor(ofColor color, int elementIndex, float fadeTime);
    void setIntensity(unsigned char targetI, int elementIndex, float fadeTime);
    
    
};








#endif /* Group_h */
