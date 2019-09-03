add_executable(runSettingsVisitorTests)
target_compile_options(runSettingsVisitorTests PRIVATE -fPIC ${OpenMP_CXX_FLAGS})
target_sources(runSettingsVisitorTests PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/../../../../../algorithm/overApproximateForward/settings/settings.cpp
               ${CMAKE_CURRENT_LIST_DIR}/../../../../../algorithm/underApproximateBackwardUsingPolytope/settings/settings.cpp
               ${CMAKE_CURRENT_LIST_DIR}/runTest.cpp)

target_include_directories(runSettingsVisitorTests
                           PRIVATE
                           ${CMAKE_CURRENT_LIST_DIR}/../../../../../algorithm
                           ${GTEST_INCLUDE_DIR})

target_link_libraries(runSettingsVisitorTests
                      PRIVATE
                      ${TEST_LINKED_LIBRARIES})

add_test(NAME settingsVisitorTests COMMAND $<TARGET_FILE:runSettingsVisitorTests>)