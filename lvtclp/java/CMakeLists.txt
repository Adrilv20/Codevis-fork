MESSAGE("JAVA support ENABLED")
AddTargetLibrary(
    LIBRARY_NAME
    lvtclp_java
    SOURCES
    ct_lvtclp_java_tool.cpp
    HEADERS
    ct_lvtclp_java_tool.h
    LIBRARIES
    Codethink::lvtmdb
    ${SYSTEM_EXTRA_LIBRARIES}
)
