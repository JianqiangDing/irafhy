set(ANTLR_BINARY_LIB /usr/local/lib)
find_package(OpenMP REQUIRED QUIET)

set(LINKING_LIBRARIES
    ${PROJECT_NAME}
    igl::core
    igl::opengl
    igl::opengl_glfw
    igl::opengl_glfw_imgui
    qhullcpp
    qhullstatic_r
    gtest_main
    gtest
    ${ANTLR_BINARY_LIB}/libantlr4-runtime.so
    glpk
    capd
    prim
    OpenMP::OpenMP_CXX
    boost_filesystem
    boost_system)

add_subdirectory(example_0)
add_subdirectory(example_1)
add_subdirectory(example_2)
add_subdirectory(example_3)
add_subdirectory(example_5)