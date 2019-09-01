add_subdirectory(jump)

target_sources(${LIBRARY_TARGET_NAME} PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/transitions.tpp)
