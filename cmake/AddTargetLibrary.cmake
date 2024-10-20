# AddTargetLibrary(
#    LIBRARY_NAME lvtxxx
#    SOURCES source1.cpp source2.cpp source3.cpp
#    HEADERS source1.h source2.h source3.h
#    LIBRARIES -lmath -lthread
#    DESIGNER_FORMS widget.ui
#)

macro(AddTargetLibrary)
    set(booleanValueArgs "")
    set(oneValueArgs LIBRARY_NAME)
    set(multiValueArgs SOURCES HEADERS LIBRARIES DESIGNER_FORMS)
    cmake_parse_arguments(DTARGS "${booleanValueArgs}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

    include_directories(${PROJECT_SOURCE_DIR})
    include_directories(${CMAKE_CURRENT_SOURCE_DIR})
    include_directories(${CMAKE_CURRENT_BINARY_DIR})

    if (BUILD_DESKTOP_APP)
        cmake_language(CALL
            qt${QT_MAJOR_VERSION}_wrap_ui
            DTARGS_SOURCES ${DTARGS_DESIGNER_FORMS}
        )
    endif()


    add_library(${DTARGS_LIBRARY_NAME} SHARED ${DTARGS_SOURCES} ${DTARGS_HEADERS})
    add_library(Codethink::${DTARGS_LIBRARY_NAME} ALIAS ${DTARGS_LIBRARY_NAME})
    # message("ADDED LIBRARY: Codethink::${DTARGS_LIBRARY_NAME} ALIAS ${DTARGS_LIBRARY_NAME}")


    if(DTARGS_LIBRARY_NAME STREQUAL "lvtclp")
        #
        set(ANTLR_HEADERS_DIR "${ANTLR_ROOT}/antlr4/runtime/Cpp/run/usr/local/include/antlr4-runtime/")
        set(ANTLR_LIBS_DIR "${ANTLR_ROOT}/antlr4/runtime/Cpp/run/usr/local/lib64")
        # set(ANTLR_HEADERS_DIR "/usr/include/antlr4-runtime")
        # set(ANTLR_LIBS_DIR "/usr/lib64")
        set(ANTLR_VERSION "4.13.2")
        add_definitions(-DQT_NO_KEYWORDS)
        include_directories(${ANTLR_HEADERS_DIR})
        target_include_directories(${DTARGS_LIBRARY_NAME} PUBLIC ${ANTLR_HEADERS_DIR})
        # list(APPEND DTARGS_LIBRARIES ${ANTLR_LIBS_DIR}/libantlr4-runtime.so)
        list(APPEND DTARGS_LIBRARIES ${ANTLR_LIBS_DIR}/libantlr4-runtime.a)
        # message("Those will be linked: ${DTARGS_LIBRARIES}")

    endif()
    target_link_libraries(
        ${DTARGS_LIBRARY_NAME}
        ${DTARGS_LIBRARIES}
    )
    generate_export_header(${DTARGS_LIBRARY_NAME}
    BASE_NAME ${DTARGS_LIBRARY_NAME}
    )





    target_include_directories(${DTARGS_LIBRARY_NAME}
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:include/lakos/${DTARGS_LIBRARY_NAME}>
    )

    # get_target_property(LINKED_LIBS ${DTARGS_LIBRARY_NAME} LINK_LIBRARIES)
    # message(STATUS "Linked libs for : ${DTARGS_LIBRARY_NAME} ${LINKED_LIBS}")
    # get_target_property(INCLUDED_DIRS ${DTARGS_LIBRARY_NAME} INCLUDE_DIRECTORIES)
    # message(STATUS "included headers for : ${DTARGS_LIBRARY_NAME} ${INCLUDED_DIRS}")

    install(TARGETS
        ${DTARGS_LIBRARY_NAME}
        DESTINATION ${KDE_INSTALL_TARGETS_DEFAULT_ARGS}
    )
endmacro()
