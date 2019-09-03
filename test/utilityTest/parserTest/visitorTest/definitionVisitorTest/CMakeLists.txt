add_executable(runDefinitionVisitorTests)
target_compile_options(runDefinitionVisitorTests PRIVATE -fPIC ${OpenMP_CXX_FLAGS})
target_sources(runDefinitionVisitorTests PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/runTest.cpp)

target_include_directories(runDefinitionVisitorTests
                           PRIVATE
                           ${GTEST_INCLUDE_DIR})

target_link_libraries(runDefinitionVisitorTests
                      PRIVATE
                      ${TEST_LINKED_LIBRARIES})

add_test(NAME definitionVisitorTests COMMAND $<TARGET_FILE:runDefinitionVisitorTests>)