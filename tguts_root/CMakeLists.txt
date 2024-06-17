file(GLOB_RECURSE SOURCES src/*.cpp)

if(WIN32)
    set(RC_FILE src/manifest.rc)
    set(SOURCES ${SOURCES} ${RC_FILE})
endif()

add_executable(main ${SOURCES})
target_link_libraries(main wx::net wx::core wx::base)