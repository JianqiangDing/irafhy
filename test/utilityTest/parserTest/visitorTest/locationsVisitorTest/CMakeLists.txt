add_executable(runLocationsVisitorTests)
target_compile_options(runLocationsVisitorTests PRIVATE -fPIC ${OpenMP_CXX_FLAGS})
target_sources(runLocationsVisitorTests PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/../../../../../algorithm/overApproximateForward/analyser/analyser.cpp
               ${CMAKE_CURRENT_LIST_DIR}/runTest.cpp)

target_include_directories(runLocationsVisitorTests
                           PRIVATE
                           ${CMAKE_CURRENT_LIST_DIR}/../../../../../algorithm
                           ${GTEST_INCLUDE_DIR})

target_link_libraries(runLocationsVisitorTests
                      PRIVATE
                      ${TEST_LINKED_LIBRARIES})

add_test(NAME locationsVisitorTests COMMAND $<TARGET_FILE:runLocationsVisitorTests>)