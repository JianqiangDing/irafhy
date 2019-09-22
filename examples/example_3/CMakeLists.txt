add_executable(runExampleCase_3)
target_compile_options(runExampleCase_3 PRIVATE -fPIC ${OpenMP_CXX_FLAGS})
target_sources(runExampleCase_3 PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/../../algorithm/underApproximateBackwardUsingPolytope/analyser/analyser.cpp
               ${CMAKE_CURRENT_LIST_DIR}/../../algorithm/underApproximateBackwardUsingPolytope/settings/settings.cpp
               ${CMAKE_CURRENT_LIST_DIR}/../../algorithm/underApproximateBackwardUsingPolytope/verifier/verifier.cpp
               ${CMAKE_CURRENT_LIST_DIR}/main.cpp)

target_include_directories(runExampleCase_3
                           PRIVATE
                           ${CMAKE_CURRENT_LIST_DIR}/../../algorithm
                           ${GTEST_INCLUDE_DIR})

target_link_libraries(runExampleCase_3
                      PRIVATE
                      ${LINKING_LIBRARIES})

add_test(NAME exampleCase_3 COMMAND $<TARGET_FILE:runExampleCase_3>)