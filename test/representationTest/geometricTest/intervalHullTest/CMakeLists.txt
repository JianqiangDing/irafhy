add_executable(runIntervalHullTests)
target_compile_options(runIntervalHullTests PRIVATE -fPIC ${OpenMP_CXX_FLAGS})
target_sources(runIntervalHullTests PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/runTest.cpp)

target_include_directories(runIntervalHullTests
                           PRIVATE
                           ${GTEST_INCLUDE_DIR})

target_link_libraries(runIntervalHullTests
                      PRIVATE
                      ${TEST_LINKED_LIBRARIES})

add_test(NAME intervalHullTests COMMAND $<TARGET_FILE:runIntervalHullTests>)