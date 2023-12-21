cmake_minimum_required(VERSION 3.16)

# -------------------------------------------------------------
# Import aoe cmake kit
include(FetchContent)
FetchContent_Declare(aoe_cmake_kit GIT_REPOSITORY https://github.com/Yarten/aoe_cmake_kit.git GIT_TAG main)
FetchContent_MakeAvailable(aoe_cmake_kit)
FetchContent_GetProperties(aoe_cmake_kit SOURCE_DIR aoe_cmake_kit)
include(${aoe_cmake_kit}/main.cmake)

# -------------------------------------------------------------
# Create the aoe project
aoe_project(
    NAME         "AlmostFullExample"
    VERSION      "1.2.3"
    VERSION_NAME "orange"
)

# All aoe library and executable targets are implemented for install by default.
# Try make install and see what is produced.
set(CMAKE_INSTALL_PREFIX "${CMAKE_CURRENT_LIST_DIR}/install_${CMAKE_BUILD_TYPE}")

# -------------------------------------------------------------
# Define all targets
aoe_add_subdirectories(./modules)

# -------------------------------------------------------------
# Complete the project
aoe_project_complete()
