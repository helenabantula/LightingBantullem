//
//  SingleChannel.hpp
//  LightingBantullem
//
//  Created by Helena Bantulà i Fonts on 3/2/17.
//
//

#ifndef SingleChannel_hpp
#define SingleChannel_hpp

#include <stdio.h>
#include <Element.h>

class SingleChannel: public Element {
    public:
    
        unsigned char* i = 0;     //intensity
    
        SingleChannel();
        ~SingleChannel(){};
};



#endif /* SingleChannel_hpp */
