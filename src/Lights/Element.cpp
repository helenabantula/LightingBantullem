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
    
    switch (std::stoi (order,nullptr,0)) {
            
        case std::stoi ("rgb",nullptr,0):
            
            iR = 0;
            iG = 1;
            iB = 2;
            
        break;
            
        case std::stoi ("rgbw",nullptr,0):
            
            iR = 0;
            iG = 1;
            iB = 2;
            iW = 3;

        break;
            
        case std::stoi ("I",nullptr,0):
            
            iI = 0;
            
        break;
            
        case std::stoi ("rgbwsipt",nullptr,0):
            
            iR = 0;
            iG = 1;
            iB = 2;
            iW = 3;
            iS = 4;
            iI = 5;
            iP = 6;
            iT = 7;
            
        break;
            
        default:
            
            iI = 0;

        break;
    }
}
