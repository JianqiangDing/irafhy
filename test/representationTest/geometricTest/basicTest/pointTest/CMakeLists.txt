add_executable(runPointTests)
target_compile_options(runPointTests PRIVATE -fPIC ${OpenMP_CXX_FLAGS})
target_sources(runPointTests PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/runTest.cpp)

target_include_directories(runPointTests
                           PRIVATE
                           ${GTEST_INCLUDE_DIR})

target_link_libraries(runPointTests
                      PRIVATE
                      ${TEST_LINKED_LIBRARIES})

add_test(NAME pointTests COMMAND $<TARGET_FILE:runPointTests>)