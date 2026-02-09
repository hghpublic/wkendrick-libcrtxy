set(helpers
    gamma
    trig
)
foreach(helper ${helpers})
    add_executable(${helper})
    target_compile_features(${helper} PUBLIC c_std_23)
    target_sources(${helper} PRIVATE ${helper}.c)
    target_link_libraries(${helper} PRIVATE crtxy)
    target_link_libraries(${helper} PRIVATE m)
    set_target_properties(${helper} PROPERTIES FOLDER helpers)
    # target_link_libraries(${helper} PRIVATE SDL::SDL)
    # target_link_libraries(${helper} PRIVATE SDL_image)
endforeach()