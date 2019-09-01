add_executable(runOverApproximateForwardTests)
target_compile_options(runOverApproximateForwardTests PRIVATE -fPIC ${OpenMP_CXX_FLAGS})
target_sources(runOverApproximateForwardTests PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/../../../algorithm/overApproximateForward/analyser/analyser.cpp
               ${CMAKE_CURRENT_LIST_DIR}/../../../algorithm/overApproximateForward/settings/settings.cpp
               ${CMAKE_CURRENT_LIST_DIR}/../../../algorithm/overApproximateForward/verifier/verifier.cpp
               ${CMAKE_CURRENT_LIST_DIR}/runTest.cpp)

target_include_directories(runOverApproximateForwardTests
                           PRIVATE
                           ${CMAKE_CURRENT_LIST_DIR}/../../../algorithm
                           ${GTEST_INCLUDE_DIR})

target_link_libraries(runOverApproximateForwardTests
                      PRIVATE
                      ${TEST_LINKED_LIBRARIES})

add_test(NAME overApproximateForwardTests COMMAND $<TARGET_FILE:runOverApproximateForwardTests>)