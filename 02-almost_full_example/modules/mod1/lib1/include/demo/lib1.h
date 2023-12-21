//
// Created by yarten on 23-12-21.
//

#pragma once

#include <string>


namespace demo
{
    class Lib1
    {
    public:
        Lib1() = default;

        explicit Lib1(std::string name);

        void sayHello() const;

    private:
        std::string name_;
    };
}
