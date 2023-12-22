# -------------------------------------------------------------
# Directory structure doesn't matter when using DEPEND for aoe targets.

aoe_add_library(lib4
    DEPEND
    lib3

    # Will not generate install() for this target,
    # but it can not be depended on by other targets that have install() generated
    NO_INSTALL
)

aoe_add_executable(exe2
    DEPEND lib4
)
