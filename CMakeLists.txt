project(GetFamilarfWithAntlr)
cmake_minimum_required(VERSION 3.15)

find_package(antlr4-runtime REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

file(GLOB_RECURSE ANTLR_GEN_SRC official-demo/*.cpp)
add_executable(officialDemo
    ${ANTLR_GEN_SRC}
)

find_library(ANTLR4_RUNTIME ${ANTLR4_LIB_DIR})
# add runtime include directories on this project.
include_directories( ${ANTLR4_INCLUDE_DIR} )
# add runtime to project dependencies
target_link_libraries( officialDemo
                       antlr4_static)
