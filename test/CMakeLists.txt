include(FetchContent)
FetchContent_Declare(googletest
                     GIT_REPOSITORY https://github.com/google/googletest.git
                     GIT_TAG release-1.8.1)

FetchContent_GetProperties(googletest)
if(NOT googletest_POPULATED)
  FetchContent_Populate(googletest)
  add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})
endif()

set(ANTLR_BINARY_LIB /usr/local/lib)
find_package(OpenMP REQUIRED QUIET)

set(TEST_LINKED_LIBRARIES
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

add_subdirectory(algorithmTest)
add_subdirectory(representationTest)
add_subdirectory(utilityTest)
