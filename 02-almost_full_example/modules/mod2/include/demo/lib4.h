//
// Created by yarten on 23-12-21.
//

#pragma once

#include <demo/lib1.h>


namespace demo
{
    class Lib4
    {
    public:
        Lib4() = default;

        explicit Lib4(std::string name);

        void sayHello() const;

    private:
        Lib1 lib1_;
    };
}
