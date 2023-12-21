# -------------------------------------------------------------
# Create a library target
#
# Default behaviors:
#   - includes the 'include' directory under this file's root
#   - sources the 'src/<target name>' directory under this file's root

aoe_add_library(lib1)

# -------------------------------------------------------------
# Create an executable test target
#
# Default behaviors:
#   - includes the 'include' directory under this file's root
#   - sources the 'test/<target name>' directory under this file's root,
#     or 'test/<target name>-<case name>' if CASE is given
#   - links the library target with the same name

aoe_add_executable_test(lib1)

aoe_add_executable_test(lib1 CASE case1)

# -------------------------------------------------------------
# Create a protobuf target
#
# Default behaviors:
#   - sources the 'proto/<target name>' directory under this file's root

aoe_add_protobuf(proto1)

# -------------------------------------------------------------
# Those default behaviors can be changed by aoe_define_target_layout()
# and aoe_use_target_layout(), see 'layout' demo.

# -------------------------------------------------------------
# You can forbid some default behaviors for a target, and set your own values.

aoe_add_library(my_header_only_lib
    NO_DEFAULT_INCLUDES
    INCLUDES ${CMAKE_CURRENT_LIST_DIR}/my_include
)
