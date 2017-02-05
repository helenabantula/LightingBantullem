//
//  Element.cpp
//  LightingBantullem
//
//  Created by Helena BantulÃ  i Fonts on 13/1/17.
//
//

#include "Element.h"


void Element::setup(string order)
{
    numCh = order.length();
    name = order;
    data.resize(numCh,0);
    //data[0] = 200;          //per poder distingir quan comeno un nou element al vector DMX de tothom (a LightManager)
    
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
    if (pos>=0) {
        p = &data[pos];
    }
    
    pos = order.find('T');
    if (pos>=0)
        t = &data[pos];
    
    myColorState = FixedColor;
    myMovementState = FixedPosition;
    
    myColor = ofColor(1,1,1);
    
}

void Element::update()
{
    
    switch (myColorState) {
            
        case FixedColor:
            
        break;
            
        case FadingToColor:
            
        break;
    }

}

void Element::SetColor(ofColor color)
{
    
    if (this->r) {                  // si hi ha R: interpretem que si hi ha color, sera R,G,B...
        myColor = color;
        *r = myColor.r;
        *g = myColor.g;
        *b = myColor.b;
        if (this->i)
            *i = myColor.a;
        
        cout <<*r<< endl;
        cout <<*g<< endl;
        cout <<*b<< endl;
    }
    else {                          // si no hi ha R, interpretem que l'element no pot canviar de color...
        ofLog(OF_LOG_NOTICE, "Change of color not allowed in element type %s", name.c_str());
    
    }
    


}



