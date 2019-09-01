cmake_minimum_required(VERSION 3.12)
cmake_policy(SET CMP0079 NEW)
string(TIMESTAMP PROJECT_VERSION_MAJOR %y)
string(TIMESTAMP PROJECT_VERSION_MINOR %m)
string(TIMESTAMP PROJECT_VERSION_PATCH %d)
string(TIMESTAMP PROJECT_VERSION_TWEAK %H)
project(
  irafhy
  VERSION
    ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}.${PROJECT_VERSION_TWEAK}
  DESCRIPTION
    "Interval arithematic based Reachability Analysis Facility for Hybrid system"
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_C_EXTENSIONS NO)
set(CMAKE_CXX_EXTENSIONS NO)

include(GNUInstallDirs)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/${CMAKE_INSTALL_BINDIR})

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

include(Marcros)
include_directories(/usr/local/include/antlr4-runtime)

option(ENABLE_STATIC_LIB "statically linked library" ON)
option(ENABLE_EXAMPLES "Enable generating examples" OFF)
option(ENABLE_TESTING "Enable Unit Testing" OFF)
option(ENABLE_DOC "Enable generating documents" OFF)
option(BUILD_SHARED_LIBS "Build libraries as shared as opposed to static" OFF)

# @brief: Enable building shared libraries with -DENABLE_STATIC_LIB=1
if(NOT ${ENABLE_STATIC_LIB})
  set(BUILD_SHARED_LIBS ON)
endif()

if(NOT CMAKE_CONFIGURATION_TYPES)
  if(NOT CMAKE_BUILD_TYPE)
    message(STATUS "Setting build type to 'Release' as none was specified.")
    set_property(CACHE CMAKE_BUILD_TYPE PROPERTY VALUE "Release")
  endif()
endif()

# Enable RPATH support for installed binaries and libraries
include(AddInstallRPATHSupport)
add_install_rpath_support(BIN_DIRS
                          "${CMAKE_INSTALL_FULL_BINDIR}"
                          LIB_DIRS
                          "${CMAKE_INSTALL_FULL_LIBDIR}"
                          INSTALL_NAME_DIR
                          "${CMAKE_INSTALL_FULL_LIBDIR}"
                          USE_LINK_PATH)

add_subdirectory(src)

include(InstallBasicPackageFiles)
install_basic_package_files(${PROJECT_NAME}
                            VERSION
                            ${${PROJECT_NAME}_VERSION}
                            COMPATIBILITY
                            AnyNewerVersion
                            VARS_PREFIX
                            ${PROJECT_NAME}
                            NO_CHECK_REQUIRED_COMPONENTS_MACRO)
# Add the uninstall target
include(AddUninstallTarget)

# @brief compile options
target_compile_options(${PROJECT_NAME} PUBLIC -Wno-attributes -fPIC)

# @brief: Enable code coverage with -DENABLE_EXAMPLES=1
if(ENABLE_EXAMPLES)
  message("Enable generating examples")
  add_subdirectory(example)
endif()

# @brief: Enable unit test with -DENABLE_TESTING=1
if(ENABLE_TESTING)
  message("Enable unit testing")
  enable_testing()
  add_subdirectory(test)
endif()

# @brief: Enable document with -DENABLE_DOC=1
if(ENABLE_DOC)
  message("Enable generating documents")
  add_subdirectory(doc)
endif()
