add_executable(runUnderApproximateBackwardUsingPolytopeTests)
target_compile_options(runUnderApproximateBackwardUsingPolytopeTests PRIVATE -fPIC ${OpenMP_CXX_FLAGS})
target_sources(runUnderApproximateBackwardUsingPolytopeTests PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/../../../algorithm/underApproximateBackwardUsingPolytope/analyser/analyser.cpp
               ${CMAKE_CURRENT_LIST_DIR}/../../../algorithm/underApproximateBackwardUsingPolytope/settings/settings.cpp
               ${CMAKE_CURRENT_LIST_DIR}/../../../algorithm/underApproximateBackwardUsingPolytope/verifier/verifier.cpp
               ${CMAKE_CURRENT_LIST_DIR}/runTest.cpp)

target_include_directories(runUnderApproximateBackwardUsingPolytopeTests
                           PRIVATE
                           ${CMAKE_CURRENT_LIST_DIR}/../../../algorithm
                           ${GTEST_INCLUDE_DIR})

target_link_libraries(runUnderApproximateBackwardUsingPolytopeTests
                      PRIVATE
                      ${TEST_LINKED_LIBRARIES})

add_test(NAME underApproximateBackwardUsingPolytopeTests COMMAND $<TARGET_FILE:runUnderApproximateBackwardUsingPolytopeTests>)