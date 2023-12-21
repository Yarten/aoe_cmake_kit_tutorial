//
// Created by yarten on 23-12-21.
//

#pragma once


#include <iostream>


namespace demo
{
    inline void doSomething()
    {
        std::cout << "doSomething() in a header only library target is called" << std::endl;
    }
}
