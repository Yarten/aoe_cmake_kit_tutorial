cmake_minimum_required(VERSION 3.16)

# -------------------------------------------------------------
# Import aoe cmake kit
include(FetchContent)
FetchContent_Declare(aoe_cmake_kit GIT_REPOSITORY https://github.com/Yarten/aoe_cmake_kit.git GIT_TAG main)
FetchContent_MakeAvailable(aoe_cmake_kit)

# -------------------------------------------------------------
# Create the aoe project
aoe_project(
    NAME         "VersionTargetDemo"
    VERSION      "1.2.3"
    VERSION_NAME "orange"
)

# -------------------------------------------------------------
# Declare a version target, and an executable target that using the version target.

aoe_add_version(version
    # include directory structure
    demo/version

    # namespace that holds the version variables
    demo::version
)

aoe_add_executable(exe
    DEPEND version
    SOURCES main.cpp
)

# -------------------------------------------------------------
# Complete the project
aoe_project_complete()
