//
//  LightManager.cpp
//  LightingBantullem
//
//  Created by Helena Bantulà i Fonts on 24/1/17.
//
//

#include "LightManager.h"


void LightManager::setup()
{
    //TO DO?? fer setup de grups i elements amb fitxer extern XML/JSON
    
    sender.setup();
    
    int numGroups = 5;
    groups.resize(numGroups);
    
    groups[0].AddElement("RGB",3);
    groups[0].setInitChannel(20);
    groups[1].AddElement("RGBA",5);
    groups[1].setInitChannel(50);
    groups[2].AddElement("PT",5);
    groups[3].AddElement("I",3);
    groups[4].setInitChannel(100);
    groups[4].AddElement("I",10);
}


void LightManager::update(){
    
    vector<unsigned char> info;
    dmxDataPacket.clear();
    for (int i = 0; i < groups.size(); i++){
        info.clear();
        info = groups[i].getGroupData();

            if (groups[i].initChannel >0) {
                int resta = groups[i].initChannel - dmxDataPacket.size();
                vector<unsigned char> auxVec(resta,100);
                dmxDataPacket.reserve(dmxDataPacket.size() + auxVec.size());
                dmxDataPacket.insert(dmxDataPacket.end(), auxVec.begin(), auxVec.end());
            }
        dmxDataPacket.reserve(dmxDataPacket.size() + info.size());
        dmxDataPacket.insert(dmxDataPacket.end(), info.begin(), info.end());
        }
    
    sender.sendDmx(dmxDataPacket);
}