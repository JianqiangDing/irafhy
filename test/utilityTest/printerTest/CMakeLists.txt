add_executable(runPrinterTests)
target_compile_options(runPrinterTests PRIVATE -fPIC ${OpenMP_CXX_FLAGS})
target_sources(runPrinterTests PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/runTest.cpp)

target_include_directories(runPrinterTests
                           PRIVATE
                           ${GTEST_INCLUDE_DIR})

target_link_libraries(runPrinterTests
                      PRIVATE
                      ${TEST_LINKED_LIBRARIES})

add_test(NAME printerTests COMMAND $<TARGET_FILE:runPrinterTests>)