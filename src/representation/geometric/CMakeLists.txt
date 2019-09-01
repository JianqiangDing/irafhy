add_subdirectory(basic)

target_sources(${LIBRARY_TARGET_NAME}
               PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/intervalHull.cpp
               ${CMAKE_CURRENT_LIST_DIR}/polytope.cpp)
