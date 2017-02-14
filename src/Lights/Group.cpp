//
//  Group.cpp
//  LightingBantullem
//
//  Created by Helena Bantulà i Fonts on 13/1/17.
//
//

#include "Group.h"


void Group::AddElement(lightType type, int number, string order)
{
    
    // no permet elements de diferents tipus
    int currentSize = elements.size();
    elements.resize(currentSize + number);

    for (int i = 0; i < number; i ++) {
        
        switch (type) {
            case LIGHT_SINGLECHANNEL:
                elements[i + currentSize] =  new SingleChannel();
                break;
                
            case LIGHT_COLOR:
                elements[i + currentSize] =  new ColorLight(order);
                break;
                
            case LIGHT_MOVINGHEAD:
                elements[i + currentSize] =  new MovingLight(order);
                break;
                
            default:
                break;
        }
        //elements[i + currentSize]->setup(order);
    }
}

vector<unsigned char> Group::getGroupData(){
    
    groupData.clear();

    for (int i = 0; i < elements.size(); i ++) {
        //elements[i]->update();
        const vector<unsigned char> info = elements[i]->getInfo();
        groupData.reserve(groupData.size() + info.size());
        groupData.insert(groupData.end(), info.begin(), info.end());
    }
    
    return groupData;

}


void Group::setInitChannel(int initChannel_){
    initChannel = initChannel_ -1;
}


void Group::setColor(ofColor color, int elementIndex, float fadeTime)
{
    if (elementIndex == -1){    // Everyone
        for(int i = 0; i < elements.size(); i++)
        {
            elements[i]->SetColor(color, fadeTime);
        }
    }
    else{                       // Just a single one
        elements[elementIndex]->SetColor(color, fadeTime);
    }
}
