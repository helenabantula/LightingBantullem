//
//  LightManager.cpp
//  LightingBantullem
//
//  Created by Helena Bantulà i Fonts on 13/1/17.
//
//

#include "LightManager.h"


void LightManager::setup() {
    
    artnet.init(machineIP);
    artnet.setSubNet(0);
    artnet.setPortType(0, ARTNET_PORT_ENABLE_INPUT, ARTNET_DATA_DMX);
    artnet.setPortAddress(0, ARTNET_PORT_INPUT, 0);
    
    ofAddListener(artnet.pollReply, this, &PMArtNetManager::receivePollReply);
    artnet.sendPoll();
    artnet.start();

}

void LightManager::sendDmx() {
    arnet.sendDmx(int port, const char* targetIp, dmxDataPacket, int size);     //falta omplir!
    
}
