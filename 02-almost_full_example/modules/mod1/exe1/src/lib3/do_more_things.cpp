//
// Created by yarten on 23-12-21.
//

#include <demo/do_more_things.h>
#include <demo/lib1.h>
#include <iostream>


namespace demo
{
    void doMoreThings()
    {
        Lib1 lib1("doMoreThings()");
        lib1.sayHello();

        std::cout << "call external doSomeExternalThings():" << std::endl;
        doSomeExternalThings();
    }
}
