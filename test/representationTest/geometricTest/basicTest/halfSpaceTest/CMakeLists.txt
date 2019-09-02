add_executable(runHalfSpaceTests)
target_compile_options(runHalfSpaceTests PRIVATE -fPIC ${OpenMP_CXX_FLAGS})
target_sources(runHalfSpaceTests PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/runTest.cpp)

target_include_directories(runHalfSpaceTests
                           PRIVATE
                           ${GTEST_INCLUDE_DIR})

target_link_libraries(runHalfSpaceTests
                      PRIVATE
                      ${TEST_LINKED_LIBRARIES})

add_test(NAME halfSpaceTests COMMAND $<TARGET_FILE:runHalfSpaceTests>)