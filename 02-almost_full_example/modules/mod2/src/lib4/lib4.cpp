//
// Created by yarten on 23-12-21.
//

#include <iostream>
#include <demo/lib4.h>
#include <demo/do_more_things.h>


namespace demo
{
    Lib4::Lib4(std::string name)
        : lib1_(std::move(name))
    {
    }

    void Lib4::sayHello() const
    {
        lib1_.sayHello();

        std::cout << "Lib4 call doMoreThings()" << std::endl;
        doMoreThings();
    }
}
