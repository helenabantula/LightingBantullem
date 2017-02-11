//
//  SingleChannel.cpp
//  LightingBantullem
//
//  Created by Helena Bantulà i Fonts on 3/2/17.
//
//

#include "SingleChannel.h"


SingleChannel::SingleChannel(){

    numCh = 1;
    name = "SingleChannel";
    data.resize(numCh,0);
    //data[0] = 200;          //per poder distingir quan començo un nou element al vector DMX de tothom (a LightManager)
    i = &data[0];

}
