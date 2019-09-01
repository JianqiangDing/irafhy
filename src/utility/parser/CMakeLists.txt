target_sources(${LIBRARY_TARGET_NAME} PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/parser.tpp)

add_subdirectory(grammar)
add_subdirectory(visitor)
