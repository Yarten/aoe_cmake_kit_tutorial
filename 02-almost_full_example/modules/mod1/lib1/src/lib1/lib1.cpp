//
// Created by yarten on 23-12-21.
//

#include <demo/lib1.h>
#include <iostream>


namespace demo
{
    Lib1::Lib1(std::string name)
        : name_(std::move(name))
    {
    }

    void Lib1::sayHello() const
    {
        std::cout << "hello world Lib1";

        if (not name_.empty())
            std::cout << " from " << name_;

        std::cout << std::endl;
    }
}
