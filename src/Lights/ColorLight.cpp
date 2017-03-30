//
//  ColorLight.cpp
//  LightingBantullem
//
//  Created by Helena Bantulà i Fonts on 3/2/17.
//
//

#include "ColorLight.h"


ColorLight::ColorLight(string order):Element(order){
    

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
    
    myColorState = STATE_FIXED_COLOR;
    myColor = ofColor(1,1,1);
}


void ColorLight::update(){
    
    
    switch (myColorState)
    {
        case STATE_FIXED_COLOR:
            //generator.stop();
            break;
            
        case STATE_FADING_TO_COLOR:
            
            //this->fadingToColor();
            
            break;
            
        case STATE_FOLLOW_COLOR_INTENSITY:
        {
            float hue = 0;  // The hue value to set.
            float saturation = 0; // The saturation value to set.
            float brightness = 0; // The brightness value to set.
            myColor.getHsb(hue, saturation, brightness);
            
            brightness = generator.getSignal();
            
            myColor.setHsb(initialColor.getHue(), initialColor.getSaturation(), brightness);
                        
            break;
        }
            
        default:
            break;
    }
    
    //ofLog(OF_LOG_NOTICE, "R " <<fToString(myColor.r)+ " - " + "G " <<fToString(myColor.g)+ " - " + "B " <<fToString(myColor.b)+ " - "  + "A " <<fToString(myColor.a));
    
    ofLog() <<"R " << (int)myColor.r << " - " << "G " << (int)myColor.g << " - " << "B " << (int)myColor.b << " - "  << "A " << (int)myColor.a ;
    //ofLog() <<"R " << newFloatColor.r << " - " << "G " << newFloatColor.g << " - " << "B " << newFloatColor.b  << " - "  << "A " << (int)myColor.a ;


    AssignMyColor();

}

void ColorLight::AssignMyColor()
{
    *r = myColor.r;
    *g = myColor.g;
    *b = myColor.b;
    if (this->i)
        *i = myColor.a;

}


void ColorLight::fadingToColor(){
    
    //ofColor lerpColor = initialColor;
    
    //colorTimer += 1 / ofGetFrameRate();
    
    //myColor = lerpColor.lerp(targetColor, (colorTimer/colorFadeTime));
    
    //ofFloatColor *a_color = & (ofFloatColor)myColor;
//    ofFloatColor myColorFloat = (ofFloatColor)myColor;
//    ofFloatColor myColor2 = myColorFloat;
//    Tweenzor::add((ofFloatColor*)(&myColor), (ofFloatColor)myColor, (ofFloatColor)targetColor, 0.0, 10.0);
    //Tweenzor::add(ofFloatColor* a_color, const ofFloatColor& c_begin, const ofFloatColor& c_end, float a_delay, float a_duration, int a_easeType=EASE_LINEAR, float a_p=0, float a_a=0);

    
//    if (colorTimer >= colorFadeTime)
//        myColorState = STATE_FIXED_COLOR;
}



void ColorLight::SetColor(ofColor color, float fadeTime){
    
    
//    myColor = color;

     pointerToColor = (ofFloatColor*)&myColor;
    //ofFloatColor* pointerToColor = &newFloatColor;
    
    Tweenzor::add(pointerToColor, (ofFloatColor)myColor, (ofFloatColor)color, 0.0, fadeTime);
    
    //myColor = (ofColor)newFloatColor;

}

void ColorLight::FollowSignal(int Amin, int Amax, signalState signal, int freq, int phase, float randomComponent)
{
    initialColor = myColor;
    myColorState = STATE_FOLLOW_COLOR_INTENSITY;
    generator.setParams(signal, freq, phase, randomComponent,Amin, Amax);
}

