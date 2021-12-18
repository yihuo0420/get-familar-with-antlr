project(GetFamilarfWithAntlr)
cmake_minimum_required(VERSION 3.15)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#Disable unnecessary warning for vc
if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
set(CMAKE_CXX_FLAGS "/wo4530 /wo4251 /wo4838")
endif()

#find package through cmake facility
find_package(antlr4-runtime REQUIRED)
#link to the antlr runtime
find_library(ANTLR4_RUNTIME ${ANTLR4_LIB_DIR})
# add runtime include directories on this project.
include_directories( ${ANTLR4_INCLUDE_DIR} )

#offical demo configuration
file(GLOB_RECURSE OFFICIAL_DEMO_GEN official-demo/*.cpp)
add_executable(officialDemo
    ${OFFICIAL_DEMO_GEN}
)
target_link_libraries( officialDemo PRIVATE 
                        antlr4_shared)

#ts parser test configuration
file(GLOB_RECURSE TS_PARSER_GEN ts-parser/gen-cpp-typescript/*.cpp)
add_executable(ts_parser_test
    ${TS_PARSER_GEN}
    ts-parser/ast_to_json.cpp
    ts-parser/common_def.cpp
    ts-parser/test/gen-cpp-typescript.test.cpp
)
target_link_libraries( ts_parser_test PRIVATE 
                        antlr4_shared)
