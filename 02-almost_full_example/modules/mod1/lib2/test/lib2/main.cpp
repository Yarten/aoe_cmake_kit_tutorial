//
// Created by yarten on 23-12-21.
//

#include <demo/lib2.h>
#include <demo/msg2.pb.h>


int main()
{
    demo::Lib2 lib2;
    lib2.sayHello();

    std::cout << std::endl << "proto2 is used in main():" << std::endl;
    demo::Msg2 msg2;
    msg2.set_b(4);
    msg2.PrintDebugString();

    return 0;
}
