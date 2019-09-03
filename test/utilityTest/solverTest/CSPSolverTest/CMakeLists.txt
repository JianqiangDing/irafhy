add_executable(runCSPSolverTests)
target_compile_options(runCSPSolverTests PRIVATE -fPIC ${OpenMP_CXX_FLAGS})
target_sources(runCSPSolverTests PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/runTest.cpp)

target_include_directories(runCSPSolverTests
                           PRIVATE
                           ${GTEST_INCLUDE_DIR})

target_link_libraries(runCSPSolverTests
                      PRIVATE
                      ${TEST_LINKED_LIBRARIES})

add_test(NAME CSPSolverTests COMMAND $<TARGET_FILE:runCSPSolverTests>)