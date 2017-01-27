//
//  Element.cpp
//  LightingBantullem
//
//  Created by Helena Bantulà i Fonts on 13/1/17.
//
//

#include "Element.h"


Element::Element(string order)
{
    numCh = order.length();
    
    data.resize(numCh,0);
    
    data[0] = 1;
    data[1] = 4;
    data[2] = 8;

    
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
    if (pos>=0)
        p = &data[pos];
    
    pos = order.find('T');
    if (pos>=0)
        t = &data[pos];
}
