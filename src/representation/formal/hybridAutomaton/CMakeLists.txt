add_subdirectory(locations)
add_subdirectory(transitions)

target_sources(${LIBRARY_TARGET_NAME} PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/hybridautomaton.tpp)
