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
            
            ofColor lerpColor = initialColor;
            
            colorTimer += 1 / ofGetFrameRate();
            
            myColor = lerpColor.lerp(targetColor, (colorTimer/colorFadeTime));
            
            if (colorTimer > colorFadeTime)
                myColorState = FixedColor;
            
        break;
    }
    
    
    if (this->r) {                  // si hi ha R: interpretem que si hi ha color, sera R,G,B...
        *r = myColor.r;
        *g = myColor.g;
        *b = myColor.b;
        if (this->i)
            *i = myColor.a;
    }
    else {                          // si no hi ha R, interpretem que l'element no pot canviar de color...
        //cout << "Element X does not allow a change of color!" << endl;

    }
}

void Element::SetColor(ofColor color, float fadeTime)
{
    if (fadeTime == 0)
    {
        if (this->r)
            myColor = color;
    }else
    {
        initialColor = myColor;
        targetColor = color;
        colorFadeTime = fadeTime;
        colorTimer = 0;
        myColorState = FadingToColor;
        
    }
    
}



