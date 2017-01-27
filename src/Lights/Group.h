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
    
    void AddElement(string order);
    
    
    
    
    
};








#endif /* Group_h */
