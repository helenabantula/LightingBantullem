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
    elements.resize(number);

    for (int i = 0; i <= number; i ++) {
        elements[i].setup(order);
    }
}


vector<unsigned char> Group::getGroupData(){

    for (int i = 0; i < elements.size(); i ++) {
        
        const vector<unsigned char> info = elements[i].getInfo();
        groupData.reserve(groupData.size() + info.size());
        groupData.insert(groupData.end(), info.begin(), info.end());
    }
    
    return groupData;

}


void Group::setInitChannel(int initChannel_){
    initChannel = initChannel_;
}