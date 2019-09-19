add_executable(runParserTests)
target_compile_options(runParserTests PRIVATE -fPIC ${OpenMP_CXX_FLAGS})
target_sources(runParserTests PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/runTest.cpp
               ${CMAKE_CURRENT_LIST_DIR}/../../../../algorithm/underApproximateBackwardUsingPolytope/analyser/analyser.cpp
               ${CMAKE_CURRENT_LIST_DIR}/../../../../algorithm/underApproximateBackwardUsingPolytope/verifier/verifier.cpp
               ${CMAKE_CURRENT_LIST_DIR}/../../../../algorithm/underApproximateBackwardUsingPolytope/settings/settings.cpp)

target_include_directories(runParserTests
                           PRIVATE
                           ${CMAKE_CURRENT_LIST_DIR}/../../../../algorithm
                           ${GTEST_INCLUDE_DIR})

target_link_libraries(runParserTests
                      PRIVATE
                      ${TEST_LINKED_LIBRARIES})

add_test(NAME parserTests COMMAND $<TARGET_FILE:runParserTests>)