add_executable(runConvexHullTests)
target_compile_options(runConvexHullTests PRIVATE -fPIC ${OpenMP_CXX_FLAGS})
target_sources(runConvexHullTests PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/runTest.cpp)

target_include_directories(runConvexHullTests
                           PRIVATE
                           ${GTEST_INCLUDE_DIR})

target_link_libraries(runConvexHullTests
                      PRIVATE
                      ${TEST_LINKED_LIBRARIES})

add_test(NAME convexHullTests COMMAND $<TARGET_FILE:runConvexHullTests>)