cmake_minimum_required(VERSION 4.2)

project(tests LANGUAGES C)

include(FetchContent)
FetchContent_Declare(
    crtxy
    GIT_REPOSITORY "https://github.com/hghpublic/wkendrick-libcrtxy.git"
    GIT_TAG dev/0
)
FetchContent_MakeAvailable(crtxy)


set(tests
    drawlines
    mathtest
    polytest
    rockdodge
)

foreach(test IN LISTS tests)

    add_executable(${test})

    target_compile_features(${test} PRIVATE cxx_std_23)
    target_sources(${test} PRIVATE ${test}.c)
    set_target_properties(${test} PROPERTIES FOLDER tests)

    # deps

    target_link_libraries(${test} PRIVATE crtxy)
    find_package(SDL REQUIRED)
    target_link_libraries(${test} PRIVATE SDL::SDL)
    find_package(SDL_image REQUIRED)
    target_link_libraries(${test} PRIVATE SDL_image)

    if(test STREQUAL "mathtest")
        target_link_libraries(${test} PRIVATE m)
    endif()
    
    if(test STREQUAL "drawlines")
    # copy testdata

    add_custom_command(TARGET ${test} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory 
            ${CMAKE_CURRENT_SOURCE_DIR}/testdata
            $<TARGET_FILE_DIR:${test}>/testdata)
    endif()
endforeach()


