add_executable(runViewerTests)
target_compile_options(runViewerTests PRIVATE -fPIC ${OpenMP_CXX_FLAGS})
target_sources(runViewerTests PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/runTest.cpp)

target_include_directories(runViewerTests
                           PRIVATE
                           ${GTEST_INCLUDE_DIR})

target_link_libraries(runViewerTests
                      PRIVATE
                      ${TEST_LINKED_LIBRARIES})

add_test(NAME viewerTests COMMAND $<TARGET_FILE:runViewerTests>)