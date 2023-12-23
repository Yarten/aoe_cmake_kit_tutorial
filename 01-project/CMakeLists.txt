cmake_minimum_required(VERSION 3.16)

# -------------------------------------------------------------
# Import aoe cmake kit
include(FetchContent)
FetchContent_Declare(aoe_cmake_kit GIT_REPOSITORY https://github.com/Yarten/aoe_cmake_kit.git GIT_TAG main)
FetchContent_MakeAvailable(aoe_cmake_kit)

# -------------------------------------------------------------
# Get project's name and version from .git
aoe_manifest(
    # Git root should be specified.
    GIT_ROOT ${CMAKE_CURRENT_LIST_DIR}/..

    # Name is extracted from the git repository url.
    NAME_FROM_GIT    out_project_name

    # Version is calculated based on the number of commits. (funny option)
    VERSION_FROM_GIT out_project_version

    # You can specify a version name for this project. (default: the version string)
    VERSION_NAME "banana"

    # Or simply use the hash of current git branch.
    # VERSION_NAME_FROM_GIT [output parameter is not necessary]
)

# -------------------------------------------------------------
# Create the project
project(${out_project_name} VERSION ${out_project_version})

message("Project ${out_project_name} ${out_project_version}")

# Don't forget to setup aoe kit
aoe_project_init(
    # Use this parameter to import some common used build options (lazy people only)
    # DEFAULT_BUILD_OPTIONS
)

# And finally complete it.
aoe_project_complete()

# -------------------------------------------------------------
# You can also adopt the following procedure in place of several of the above functions.
# (lazy people only)

# You may see a cmake warning if you use it alone in your CMakeLists.txt.
# You can avoid it by putting an aux command 'project(_)' near the top of the file, but after cmake_minimum_required().
aoe_project(
    GIT_ROOT ${CMAKE_CURRENT_LIST_DIR}/..
    NAME_FROM_GIT
    VERSION_FROM_GIT
    VERSION_NAME_FROM_GIT

    # Or set your own values
    # NAME         "MyProjectName"
    # VERSION      "1.2.3"
    # VERSION_NAME "banana"
)

message("Project Again ${PROJECT_NAME} ${PROJECT_VERSION}")

aoe_project_complete()
