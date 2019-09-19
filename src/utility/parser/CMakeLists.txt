target_sources(${LIBRARY_TARGET_NAME} PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/hybridAutomatonParser.tpp
               ${CMAKE_CURRENT_LIST_DIR}/settingsParser.cpp)

add_subdirectory(grammar)
add_subdirectory(visitor)
