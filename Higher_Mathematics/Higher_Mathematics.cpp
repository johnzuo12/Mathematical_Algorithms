/*
 *  Higher_Mathematics.cpp
 *  Higher_Mathematics
 *
 *  Created by Eliza on 14/09/2017.
 *  Copyright © 2017 maggot99999. All rights reserved.
 *
 */

#include <iostream>
#include "Higher_Mathematics.hpp"
#include "Higher_MathematicsPriv.hpp"

void Higher_Mathematics::HelloWorld(const char * s)
{
    Higher_MathematicsPriv *theObj = new Higher_MathematicsPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void Higher_MathematicsPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

