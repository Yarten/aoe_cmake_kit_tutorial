# -------------------------------------------------------------
# Directory structure doesn't matter when using DEPEND for aoe targets.

aoe_add_library(lib4
    DEPEND
    lib3
)

aoe_add_executable(exe2
    DEPEND lib4
)
