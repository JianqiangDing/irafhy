add_subdirectory(entity)

target_sources(${LIBRARY_TARGET_NAME}
               PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/condition.cpp
               ${CMAKE_CURRENT_LIST_DIR}/constraint.cpp
               ${CMAKE_CURRENT_LIST_DIR}/constraints.cpp
               ${CMAKE_CURRENT_LIST_DIR}/formula.cpp
               ${CMAKE_CURRENT_LIST_DIR}/item.cpp
               ${CMAKE_CURRENT_LIST_DIR}/system.cpp)
