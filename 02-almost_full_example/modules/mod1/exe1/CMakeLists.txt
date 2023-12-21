# -------------------------------------------------------------
# There are some funny examples to mix things together.

aoe_add_library(lib3
    DEPEND
    lib1
)

aoe_add_executable(exe1
    DEPEND
    lib3
    lib2
)

aoe_add_executable(exe1-another
    DEPEND
    lib3
    proto2
)
