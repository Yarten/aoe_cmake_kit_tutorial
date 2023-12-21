//
// Created by yarten on 23-12-21.
//

#include <demo/lib2.h>
#include <demo/msg2.pb.h>
#include <demo/do_something.h>
#include <boost/thread.hpp>


namespace demo
{
    Lib2::Lib2(std::string name)
        : lib1_(std::move(name))
    {
    }

    void Lib2::sayHello() const
    {
        std::cout << "hello world Lib2, and ";
        lib1_.sayHello();

        Msg2 msg2;
        msg2.mutable_a()->set_a(1);
        msg2.mutable_a()->set_b(2);
        msg2.set_b(3);
        msg2.PrintDebugString();

        boost::thread th(
            []()
            {
                std::cout << "Boost.thread is used: " << boost::this_thread::get_id() << std::endl;
                doSomething();
            }
        );

        th.join();
    }
}
