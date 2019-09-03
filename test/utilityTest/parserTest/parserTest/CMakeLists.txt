add_executable(runParserTests)
target_compile_options(runParserTests PRIVATE -fPIC ${OpenMP_CXX_FLAGS})
target_sources(runParserTests PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/runTest.cpp)

target_include_directories(runParserTests
                           PRIVATE
                           ${GTEST_INCLUDE_DIR})

target_link_libraries(runParserTests
                      PRIVATE
                      ${TEST_LINKED_LIBRARIES})

add_test(NAME parserTests COMMAND $<TARGET_FILE:runParserTests>)