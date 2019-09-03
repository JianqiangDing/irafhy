add_executable(runExampleCase_0)
target_compile_options(runExampleCase_0 PRIVATE -fPIC ${OpenMP_CXX_FLAGS})
target_sources(runExampleCase_0 PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/../../algorithm/overApproximateForward/analyser/analyser.cpp
               ${CMAKE_CURRENT_LIST_DIR}/../../algorithm/overApproximateForward/settings/settings.cpp
               ${CMAKE_CURRENT_LIST_DIR}/../../algorithm/overApproximateForward/verifier/verifier.cpp
               ${CMAKE_CURRENT_LIST_DIR}/main.cpp)

target_include_directories(runExampleCase_0
                           PRIVATE
                           ${CMAKE_CURRENT_LIST_DIR}/../../../algorithm
                           ${GTEST_INCLUDE_DIR})

target_link_libraries(runExampleCase_0
                      PRIVATE
                      ${LINKING_LIBRARIES})

add_test(NAME exampleCase_0 COMMAND $<TARGET_FILE:runExampleCase_0>)