add_executable(runPlotterTests)
target_compile_options(runPlotterTests PRIVATE -fPIC ${OpenMP_CXX_FLAGS})
target_sources(runPlotterTests PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/runTest.cpp)

target_include_directories(runPlotterTests
                           PRIVATE
                           ${GTEST_INCLUDE_DIR})

target_link_libraries(runPlotterTests
                      PRIVATE
                      ${TEST_LINKED_LIBRARIES})

add_test(NAME plotterTests COMMAND $<TARGET_FILE:runPlotterTests>)