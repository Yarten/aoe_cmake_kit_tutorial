//
// Created by yarten on 23-12-21.
//

#include <demo/lib4.h>
#include <demo/do_more_things.h>
#include <iostream>


namespace demo
{
    void doSomeExternalThings()
    {
        std::cout << "I'm exe2 target." << std::endl;
    }
}

int main()
{
    demo::Lib4 lib4("exe2");
    lib4.sayHello();
    return 0;
}
