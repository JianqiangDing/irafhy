add_subdirectory(model)

target_sources(${LIBRARY_TARGET_NAME} PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/locations.tpp)
