add_executable(runSystemVisitorTests)
target_compile_options(runSystemVisitorTests PRIVATE -fPIC ${OpenMP_CXX_FLAGS})
target_sources(runSystemVisitorTests PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/runTest.cpp)

target_include_directories(runSystemVisitorTests
                           PRIVATE
                           ${GTEST_INCLUDE_DIR})

target_link_libraries(runSystemVisitorTests
                      PRIVATE
                      ${TEST_LINKED_LIBRARIES})

add_test(NAME systemVisitorTests COMMAND $<TARGET_FILE:runSystemVisitorTests>)