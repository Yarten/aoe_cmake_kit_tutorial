cmake_minimum_required(VERSION 3.16)
project(ImportTheKit)

# -------------------------------------------------------------
# Import aoe cmake kit ('main' branch)
include(FetchContent)
FetchContent_Declare(aoe_cmake_kit GIT_REPOSITORY https://github.com/Yarten/aoe_cmake_kit.git GIT_TAG main)
FetchContent_MakeAvailable(aoe_cmake_kit)

# You can also add the kit as your subrepository and then include it directly.

# -------------------------------------------------------------
# Setup aoe project
#   - called after project()
#   - can only be used once in a project
aoe_project_init()

# -------------------------------------------------------------
# Complete the aoe project
#   - called at last
#   - can only be used once in a project
aoe_project_complete()
