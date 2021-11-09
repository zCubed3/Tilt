set(INCLUDE_DIRS
        "${DEPENDS_DIR}"
        "${ENGINE_DIR}/extern"
        )

if (DEFINED WIN32)
    set(LIBRARIES)
else ()
    #find_package(PkgConfig REQUIRED)

    #pkg_check_modules(MONOPKG REQUIRED mono-2)

    #${MONOPKG_LIBRARIES}
    #${MONOPKG_INCLUDE_DIRS}

    set(LIBRARIES "GL" "dl" "glfw" "GLEW")
    list(APPEND INCLUDE_DIRS)
endif ()

set(SOURCE_DIRS
        "${CMAKE_CURRENT_SOURCE_DIR}/src"
)

set(SOURCE_EXTENSIONS
        "*.cpp"
)

get_sources(${SOURCE_DIRS} ${SOURCE_EXTENSIONS} GLOB_SOURCES)

add_executable(TiltEngine ${GLOB_SOURCES})
target_include_directories(TiltEngine PUBLIC ${INCLUDE_DIRS})
target_link_libraries(TiltEngine PUBLIC ${LIBRARIES})

set_target_properties(TiltEngine PROPERTIES
        OUTPUT_NAME "Tilt"
        )

