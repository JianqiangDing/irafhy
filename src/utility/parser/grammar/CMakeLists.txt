set(ANTLR4 java -jar /usr/local/lib/antlr-4.7.2-complete.jar)

set(
  GENERATED_SRC
  ${CMAKE_CURRENT_LIST_DIR}/../../../../include/irafhy/utility/parser/grammar/antlr4-runtime-cpp/definitionLexer.cpp
  ${CMAKE_CURRENT_LIST_DIR}/../../../../include/irafhy/utility/parser/grammar/antlr4-runtime-cpp/definitionParser.cpp
  ${CMAKE_CURRENT_LIST_DIR}/../../../../include/irafhy/utility/parser/grammar/antlr4-runtime-cpp/locationsLexer.cpp
  ${CMAKE_CURRENT_LIST_DIR}/../../../../include/irafhy/utility/parser/grammar/antlr4-runtime-cpp/locationsParser.cpp
  ${CMAKE_CURRENT_LIST_DIR}/../../../../include/irafhy/utility/parser/grammar/antlr4-runtime-cpp/settingsLexer.cpp
  ${CMAKE_CURRENT_LIST_DIR}/../../../../include/irafhy/utility/parser/grammar/antlr4-runtime-cpp/settingsParser.cpp
  ${CMAKE_CURRENT_LIST_DIR}/../../../../include/irafhy/utility/parser/grammar/antlr4-runtime-cpp/transitionsLexer.cpp
  ${CMAKE_CURRENT_LIST_DIR}/../../../../include/irafhy/utility/parser/grammar/antlr4-runtime-cpp/transitionsParser.cpp
  ${CMAKE_CURRENT_LIST_DIR}/../../../../include/irafhy/utility/parser/grammar/antlr4-runtime-cpp/hybridautomatonLexer.cpp
  ${CMAKE_CURRENT_LIST_DIR}/../../../../include/irafhy/utility/parser/grammar/antlr4-runtime-cpp/hybridautomatonParser.cpp
  CACHE INTERNAL "GrammerFiles" FORCE)

include(${CMAKE_ROOT}/Modules/ExternalProject.cmake)

find_library(findAntlr4 antlr4-runtime)

if(NOT findAntlr4)
  ExternalProject_Add(Antlr4-Cpp
                      GIT_REPOSITORY https://github.com/antlr/antlr4.git
                      SOURCE_DIR antlr4-Cpp
                      SOURCE_SUBDIR runtime/Cpp)
endif()

add_custom_target(
  antlr4-runtime-cpp ALL
  COMMAND
    ${ANTLR4}
    -Dlanguage=Cpp
    -o
    ${CMAKE_CURRENT_LIST_DIR}/../../../../include/irafhy/utility/parser/grammar/antlr4-runtime-cpp
    ${CMAKE_CURRENT_LIST_DIR}/token.g4
    ${CMAKE_CURRENT_LIST_DIR}/definition.g4
    ${CMAKE_CURRENT_LIST_DIR}/locations.g4
    ${CMAKE_CURRENT_LIST_DIR}/transitions.g4
    ${CMAKE_CURRENT_LIST_DIR}/settings.g4
    ${CMAKE_CURRENT_LIST_DIR}/hybridautomaton.g4
    -visitor
  VERBATIM)

target_sources(${PROJECT_NAME} PRIVATE ${GENERATED_SRC})
