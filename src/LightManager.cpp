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
    
    int numGroups = 4;
    groups.resize(numGroups);
    
    groups[0].AddElement(LIGHT_COLOR,1,"RGB");
    groups[0].setInitChannel(20);
    groups[1].AddElement(LIGHT_COLOR,5,"IRGB");
    groups[1].setInitChannel(50);
    groups[2].AddElement(LIGHT_SINGLECHANNEL,5, "I");
    groups[3].AddElement(LIGHT_SINGLECHANNEL,3);
    groups[2].AddElement(LIGHT_SINGLECHANNEL,5, "I");
    groups[3].AddElement(LIGHT_MOVINGHEAD,3, "RGBPT");


}


void LightManager::update(){
    
    vector<unsigned char> info;
    dmxDataPacket.clear();
    for (int i = 0; i < groups.size(); i++){
        info.clear();
        info = groups[i].getGroupData();

            if (groups[i].initChannel >0) {
                int resta = groups[i].initChannel - dmxDataPacket.size();
                vector<unsigned char> auxVec(resta,0);
                dmxDataPacket.reserve(dmxDataPacket.size() + auxVec.size());
                dmxDataPacket.insert(dmxDataPacket.end(), auxVec.begin(), auxVec.end());
            }
        dmxDataPacket.reserve(dmxDataPacket.size() + info.size());
        dmxDataPacket.insert(dmxDataPacket.end(), info.begin(), info.end());
        }
    
    sender.sendDmx(dmxDataPacket);
}


void LightManager::setGroupColor(int groupIndex, ofColor color, int elementIndex, float fadeTime)
{
    groups[groupIndex].setColor(color, elementIndex, fadeTime);
}
