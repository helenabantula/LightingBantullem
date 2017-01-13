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
    for ( i = 0; i < order.lenght(); i++ )
    {
        
        this.order[i] = i;
    }
}
