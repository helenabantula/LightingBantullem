//
//  ArtnetSender.cpp
//  LightingBantullem
//
//  Created by Helena Bantulà i Fonts on 13/1/17.
//
//

#include "ArtnetSender.h"


void ArtnetSender::setup() {
    
    artnet.init(machineIP);
    artnet.setSubNet(0);
    artnet.setPortType(0, ARTNET_PORT_ENABLE_INPUT, ARTNET_DATA_DMX);
    artnet.setPortAddress(0, ARTNET_PORT_INPUT, 0);
    
    ofAddListener(artnet.pollReply, this, &PMArtNetManager::receivePollReply);
    artnet.sendPoll();
    artnet.start();
    
}

void ArtnetSender::sendDmx(dmxData vector <unsigned char>) {
    
    arnet.sendDmx(int port = 0, enttecIP, dmxData, int size = 512);

}
