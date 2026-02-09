target_sources(${target} PRIVATE crtxy.c)

if(BUILD_TESTS)
set(tests
    drawlines
    mathtest
    polytest
    rockdodge
)
foreach(test ${tests})
    add_executable(${test})
    target_compile_features(${target} PUBLIC c_std_23)
    target_sources(${test} PRIVATE ${test}.c)
    target_link_libraries(${test} PRIVATE crtxy)
    set_target_properties(${test} PROPERTIES FOLDER tests)
    target_link_libraries(${test} PRIVATE SDL::SDL)
    target_link_libraries(${test} PRIVATE SDL_image)

    if(test STREQUAL "mathtest")
        target_link_libraries(${test} PRIVATE m)
    endif()
endforeach()
endif(BUILD_TESTS)

if(BUILD_HELPERS)
add_subdirectory(helpers)
endif(BUILD_HELPERS)