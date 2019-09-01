target_sources(${LIBRARY_TARGET_NAME}
               PRIVATE
               ${CMAKE_CURRENT_LIST_DIR}/constant.cpp
               ${CMAKE_CURRENT_LIST_DIR}/variable.cpp
               ${CMAKE_CURRENT_LIST_DIR}/unaryItem.cpp
               ${CMAKE_CURRENT_LIST_DIR}/binaryItem.cpp)
