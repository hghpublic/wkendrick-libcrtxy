cmake_minimum_required(VERSION 4.2)

project(examples LANGUAGES C CXX)

include(FetchContent)

FetchContent_Declare(
    crtxy
    GIT_REPOSITORY "https://github.com/hghpublic/wkendrick-libcrtxy.git"
    GIT_TAG dev/0
)

FetchContent_Declare(
    frozen
    GIT_REPOSITORY "https://github.com/serge-sans-paille/frozen.git"
    GIT_TAG master
)

FetchContent_MakeAvailable(crtxy frozen)


set(examples
    lines
)

foreach(example IN LISTS examples)

    add_executable(${example})

    target_compile_features(${example} PRIVATE cxx_std_26)
    target_sources(${example} PRIVATE ${example}.cpp)
    set_target_properties(${example} PROPERTIES FOLDER examples)

    # deps

    target_link_libraries(${example} PRIVATE crtxy)
    target_link_libraries(${example} PRIVATE frozen::frozen)
    find_package(SDL REQUIRED)
    target_link_libraries(${example} PRIVATE SDL::SDL)
    find_package(SDL_image REQUIRED)
    target_link_libraries(${example} PRIVATE SDL_image)


endforeach()


