//
// Created by yarten on 23-12-21.
//

#include <demo/do_more_things.h>
#include <demo/msg2.pb.h>
#include <iostream>


namespace demo
{
    void doSomeExternalThings()
    {
        std::cout << "I'm exe1-another target." << std::endl;

        Msg2 msg2;
        msg2.mutable_a()->set_a(7);
        msg2.mutable_a()->set_b(8);
        msg2.set_b(9);
        msg2.PrintDebugString();
    }
}


int main()
{
    demo::doMoreThings();
    return 0;
}
