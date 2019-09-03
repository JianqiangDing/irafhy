add_executable(runConstraintsVisitorTests)
target_compile_options(runConstraintsVisitorTests PRIVATE -fPIC ${OpenMP_CXX_FLAGS})
target_sources(runConstraintsVisitorTests PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/runTest.cpp)

target_include_directories(runConstraintsVisitorTests
                           PRIVATE
                           ${GTEST_INCLUDE_DIR})

target_link_libraries(runConstraintsVisitorTests
                      PRIVATE
                      ${TEST_LINKED_LIBRARIES})

add_test(NAME constraintsVisitorTests COMMAND $<TARGET_FILE:runConstraintsVisitorTests>)