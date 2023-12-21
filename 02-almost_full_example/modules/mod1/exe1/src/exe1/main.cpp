//
// Created by yarten on 23-12-21.
//

#include <iostream>
#include <demo/do_more_things.h>
#include <demo/lib2.h>


namespace demo
{
    void doSomeExternalThings()
    {
        Lib2 lib2("exe1 target");
        lib2.sayHello();
    }
}


int main()
{
    demo::doMoreThings();
    return 0;
}
