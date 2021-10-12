set(LIBRARY_TARGET_NAME ${PROJECT_NAME})

add_library(${LIBRARY_TARGET_NAME})
add_library(${PROJECT_NAME}::${LIBRARY_TARGET_NAME} ALIAS
        ${LIBRARY_TARGET_NAME})

file(GLOB_RECURSE
        ${LIBRARY_TARGET_NAME}_HDR
        ${CMAKE_CURRENT_SOURCE_DIR}/../include/*.h
        ${CMAKE_CURRENT_SOURCE_DIR}/../include/*.hpp)

target_sources(${LIBRARY_TARGET_NAME}
        PRIVATE
        ${${LIBRARY_TARGET_NAME}_HDR}
        ${CMAKE_CURRENT_LIST_DIR}/settings.cpp)
set_target_properties(${LIBRARY_TARGET_NAME}
        PROPERTIES VERSION
        ${${PROJECT_NAME}_VERSION}
        LINKER_LANGUAGE
        CXX
        #[[ PUBLIC_HEADER
"${${LIBRARY_TARGET_NAME}_HDR}"]]
        )

# libigl
option(USE_AS_STATIC "Use as static library" ON)
option(LIBIGL_WITH_OPENGL "Use OpenGL" ON)
option(LIBIGL_WITH_OPENGL_GLFW "Use GLFW" ON)
option(LIBIGL_WITH_OPENGL_GLFW_IMGUI "Use ImGui" ON)
option(LIBIGL_WITH_PNG "Use PNG" ON)

# external packages
find_package(LIBIGL REQUIRED QUIET)
find_package(Eigen3 REQUIRED QUITE)
find_package(OpenMP REQUIRED QUIET)
find_package(PythonLibs 2.7 REQUIRED QUIET)

target_compile_options(${LIBRARY_TARGET_NAME}
        PUBLIC -D__USE_FILIB__ -fPIC ${OpenMP_CXX_FLAGS})

target_compile_definitions(${LIBRARY_TARGET_NAME}
        PUBLIC
        _USE_MATH_DEFINES)

target_include_directories(
        ${LIBRARY_TARGET_NAME}
        PUBLIC "$<BUILD_INTERFACE:${EIGEN3_INCLUDE_DIRS}>"
        "$<BUILD_INTERFACE:${LIBIGL_INCLUDE_DIR}>"
        "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../include>"
        "${PYTHON_INCLUDE_DIRS}"
        "$<INSTALL_INTERFACE:$<INSTALL_PREFIX>/${CMAKE_INSTALL_INCLUDEDIR}>")

add_subdirectory(representation)
add_subdirectory(utility)

target_link_libraries(${LIBRARY_TARGET_NAME}
        PRIVATE
        $<BUILD_INTERFACE:igl::core>
        $<BUILD_INTERFACE:igl::opengl_glfw>
        $<BUILD_INTERFACE:igl::opengl_glfw_imgui>)

install(TARGETS ${LIBRARY_TARGET_NAME}
        imguizmo
        igl_eigen
        igl_common
        igl
        igl_opengl
        glad
        glfw
        igl_opengl_glfw
        imgui
        igl_opengl_glfw_imgui
        EXPORT ${PROJECT_NAME}
        LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}/${LIBRARY_TARGET_NAME}"
        COMPONENT lib
        ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}/${LIBRARY_TARGET_NAME}"
        COMPONENT lib/static
        RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}/${LIBRARY_TARGET_NAME}"
        COMPONENT bin)

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../include/${LIBRARY_TARGET_NAME}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
