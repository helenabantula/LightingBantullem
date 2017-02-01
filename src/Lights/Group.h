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

class Group{
public:
    
    //Constructor - destructor
    Group(){};
    ~Group(){};
    
    vector<Element> elements;
    int initChannel = 0;
    vector<unsigned char> groupData;
    
    
    void AddElement(string order, int number);
    vector<unsigned char> getGroupData();
    void setInitChannel(int initChannel_);
    
    
    void setColor(ofColor color);
    
    
};








#endif /* Group_h */
