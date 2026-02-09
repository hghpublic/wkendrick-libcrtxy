cmake_minimum_required(VERSION 4.2)

project(crtxy LANGUAGES C)

set(target ${PROJECT_NAME})
add_library(${target})
target_include_directories(${target} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_compile_features(${target} PUBLIC c_std_23)
target_compile_definitions(${target} PRIVATE CONFDIR="")
find_package(SDL REQUIRED)
target_link_libraries(${target} PRIVATE SDL::SDL)
find_package(SDL_image REQUIRED)
target_link_libraries(${target} PRIVATE SDL_image)

if(PROJECT_IS_TOP_LEVEL)
option(BUILD_TESTS "Build tests" ON)
option(BUILD_HELPERS "Build helper tools" ON)
endif(PROJECT_IS_TOP_LEVEL)

add_subdirectory(src)