add_executable(runODESolverTests)
target_compile_options(runODESolverTests PRIVATE -fPIC ${OpenMP_CXX_FLAGS})
target_sources(runODESolverTests PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/runTest.cpp)

target_include_directories(runODESolverTests
                           PRIVATE
                           ${GTEST_INCLUDE_DIR})

target_link_libraries(runODESolverTests
                      PRIVATE
                      ${TEST_LINKED_LIBRARIES})

add_test(NAME ODESolverTests COMMAND $<TARGET_FILE:runODESolverTests>)