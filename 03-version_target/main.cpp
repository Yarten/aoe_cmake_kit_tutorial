//
// Created by yarten on 23-12-21.
//

#include <iostream>
#include <demo/version/version.hpp>


int main()
{
    std::cout
        << demo::version::versiontargetdemo_name    << " "
        << demo::version::versiontargetdemo_version << " "
        << demo::version::versiontargetdemo_version_name
        << std::endl;
    return 0;
}
