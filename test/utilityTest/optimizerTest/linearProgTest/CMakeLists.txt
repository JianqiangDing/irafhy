add_executable(runLinearProgTests)
target_compile_options(runLinearProgTests PRIVATE -fPIC ${OpenMP_CXX_FLAGS})
target_sources(runLinearProgTests PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/runTest.cpp)

target_include_directories(runLinearProgTests
                           PRIVATE
                           ${GTEST_INCLUDE_DIR})

target_link_libraries(runLinearProgTests
                      PRIVATE
                      ${TEST_LINKED_LIBRARIES})

add_test(NAME linearProgTests COMMAND $<TARGET_FILE:runLinearProgTests>)