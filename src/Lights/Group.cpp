//
//  Group.cpp
//  LightingBantullem
//
//  Created by Helena Bantulà i Fonts on 13/1/17.
//
//

#include "Group.h"


void Group::AddElement(string order, int number)
{
    
    // no permet elements de diferents tipus
    int currentSize = elements.size();
    elements.resize(currentSize + number);

    for (int i = 0; i < number; i ++) {
        elements[i + currentSize].setup(order);
    }
}


vector<unsigned char> Group::getGroupData(){
    
    groupData.clear();

    for (int i = 0; i < elements.size(); i ++) {
        elements[i].update();
        const vector<unsigned char> info = elements[i].getInfo();
        groupData.reserve(groupData.size() + info.size());
        groupData.insert(groupData.end(), info.begin(), info.end());
    }
    
    return groupData;

}


void Group::setInitChannel(int initChannel_){
    initChannel = initChannel_;
}

void Group::setColor(ofColor color)
{
    for(int i = 0; i < elements.size(); i++)
    {
        elements[i].SetColor(color);
    }
}
