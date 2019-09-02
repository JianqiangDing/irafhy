add_executable(runPolytopeTests)
target_compile_options(runPolytopeTests PRIVATE -fPIC ${OpenMP_CXX_FLAGS})
target_sources(runPolytopeTests PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/runTest.cpp)

target_include_directories(runPolytopeTests
                           PRIVATE
                           ${GTEST_INCLUDE_DIR})

target_link_libraries(runPolytopeTests
                      PRIVATE
                      ${TEST_LINKED_LIBRARIES})

add_test(NAME polytopeTests COMMAND $<TARGET_FILE:runPolytopeTests>)