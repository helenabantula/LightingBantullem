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
    
    int pos = order.find('R');
    r = &data[pos];
    
    pos = order.find('G');
    g = &data[pos];
    
    pos = order.find('B');
    b = &data[pos];
    
    pos = order.find('A');
    a = &data[pos];
    
    pos = order.find('W');
    w = &data[pos];
    
    pos = order.find('S');
    s = &data[pos];
    
    pos = order.find('I');
    i = &data[pos];
    
    pos = order.find('P');
    p = &data[pos];
    
    pos = order.find('T');
    t = &data[pos];
}
