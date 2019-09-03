add_executable(runHybridAutomatonVisitorTests)
target_compile_options(runHybridAutomatonVisitorTests PRIVATE -fPIC ${OpenMP_CXX_FLAGS})
target_sources(runHybridAutomatonVisitorTests PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/../../../../../algorithm/overApproximateForward/analyser/analyser.cpp
               ${CMAKE_CURRENT_LIST_DIR}/../../../../../algorithm/overApproximateForward/settings/settings.cpp
               ${CMAKE_CURRENT_LIST_DIR}/../../../../../algorithm/overApproximateForward/verifier/verifier.cpp
               ${CMAKE_CURRENT_LIST_DIR}/runTest.cpp)

target_include_directories(runHybridAutomatonVisitorTests
                           PRIVATE
                           ${CMAKE_CURRENT_LIST_DIR}/../../../../../algorithm
                           ${GTEST_INCLUDE_DIR})

target_link_libraries(runHybridAutomatonVisitorTests
                      PRIVATE
                      ${TEST_LINKED_LIBRARIES})

add_test(NAME hybridAutomatonVisitorTests COMMAND $<TARGET_FILE:runHybridAutomatonVisitorTests>)