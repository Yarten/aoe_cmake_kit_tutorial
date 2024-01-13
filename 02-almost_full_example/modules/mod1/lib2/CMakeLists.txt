# -------------------------------------------------------------
# Protobuf target can depend on other protobuf targets.

aoe_add_protobuf(proto2
    DEPEND proto1
)

# -------------------------------------------------------------
# Library and executable target can depend on other library targets,
# protobuf targets, and third-party libraries.
# Dependency visibility can be controlled.

aoe_add_library(lib2
    DEPEND
    lib1
    my_header_only_lib

    PRIVATE_DEPEND
    proto2

    # Need libboost-all-dev for this demo
    IMPORT
    Boost
    # Other3rdLibrary

    COMPONENTS
    Boost thread system
    # Other3rdLibrary [... its components]
)

# -------------------------------------------------------------
# Create an executable test target with one default source file.
#
# Default behaviors:
#   - includes the 'include' directory under this file's root
#   - add 'test/<target name>.cpp' as the source file,
#     or 'test/<target name>-<case name>.cpp' as the source file if CASE is given
#   - links the library target with the same name

aoe_add_test(lib2
    DEPEND
    proto2 # lib2's private dependencies will not be propagated to this target,
           # if you need them, you should explicitly declare to depend on them.
)
aoe_add_test(lib2 CASE case1)

# -------------------------------------------------------------
# Create an executable example target with one default source file.
#
# Default behaviors:
#   - includes the 'include' directory under this file's root
#   - add 'example/<target name>.cpp' as the source file,
#     or 'example/<target name>-<case name>.cpp' as the source file if CASE is given
#   - links the library target with the same name

aoe_add_example(lib2)
aoe_add_example(lib2 CASE case1)
