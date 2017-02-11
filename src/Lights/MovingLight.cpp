//
//  MovingLight.cpp
//  LightingBantullem
//
//  Created by Helena Bantulà i Fonts on 3/2/17.
//
//

#include "MovingLight.h"

MovingLight::MovingLight(string order){
    
    numCh = order.length();
    name = order;
    data.resize(numCh,0);
    data[0] = 200;          //per poder distingir quan començo un nou element al vector DMX de tothom (a LightManager)
    
    int pos = order.find('R');
    if (pos>=0)
        r = &data[pos];
    
    pos = order.find('G');
    if (pos>=0)
        g = &data[pos];
    
    pos = order.find('B');
    if (pos>=0)
        b = &data[pos];
    
    pos = order.find('A');
    if (pos>=0)
        a = &data[pos];
    
    pos = order.find('W');
    if (pos>=0)
        w = &data[pos];
    
    pos = order.find('S');
    if (pos>=0)
        s = &data[pos];
    
    pos = order.find('I');
    if (pos>=0)
        i = &data[pos];
    
    pos = order.find('P');
    if (pos>=0)
        p = &data[pos];
    
    pos = order.find('T');
    if (pos>=0)
        t = &data[pos];
    
    myColorState = FixedColor;
    myColor = ofColor(1,1,1);
    
    myMovementState = FixedPosition;
}



void MovingLight::update(){
    
    switch (myColorState) {
            
        case FixedColor:
            
            break;
            
        case FadingToColor:
            
            this->fadingToColor();
            
            break;
    }
    
    *r = myColor.r;
    *g = myColor.g;
    *b = myColor.b;
    if (this->i)
        *i = myColor.a;
}