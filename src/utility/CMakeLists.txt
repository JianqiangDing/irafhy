target_sources(${LIBRARY_TARGET_NAME}
               PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/printer.cpp
               ${CMAKE_CURRENT_LIST_DIR}/viewer.cpp)

add_subdirectory(extension)
add_subdirectory(optimizer)
add_subdirectory(parser)
add_subdirectory(solver)
