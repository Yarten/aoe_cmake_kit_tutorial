//
// Created by yarten on 23-12-21.
//

#pragma once

#include <demo/lib1.h>

// You better not include anything from the private dependencies in a header file
// #include <demo/msg2.pb.h>


namespace demo
{
    class Lib2
    {
    public:
        Lib2() = default;

        explicit Lib2(std::string name);

        void sayHello() const;

    private:
        Lib1 lib1_;
    };
}
