add_executable(runTransitionsVisitorTests)
target_compile_options(runTransitionsVisitorTests PRIVATE -fPIC ${OpenMP_CXX_FLAGS})
target_sources(runTransitionsVisitorTests PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/../../../../../algorithm/overApproximateForward/analyser/analyser.cpp
               ${CMAKE_CURRENT_LIST_DIR}/../../../../../algorithm/overApproximateForward/settings/settings.cpp
               ${CMAKE_CURRENT_LIST_DIR}/../../../../../algorithm/overApproximateForward/verifier/verifier.cpp
               ${CMAKE_CURRENT_LIST_DIR}/runTest.cpp)

target_include_directories(runTransitionsVisitorTests
                           PRIVATE
                           ${CMAKE_CURRENT_LIST_DIR}/../../../../../algorithm
                           ${GTEST_INCLUDE_DIR})

target_link_libraries(runTransitionsVisitorTests
                      PRIVATE
                      ${TEST_LINKED_LIBRARIES})

add_test(NAME transitionsVisitorTests COMMAND $<TARGET_FILE:runTransitionsVisitorTests>)