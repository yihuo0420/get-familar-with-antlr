# TS PARSER

## Reference

https://github.com/antlr/antlr4
https://github.com/antlr/grammars-v4

## For latest runtime && generation tools

https://www.antlr.org/download/

## How to install Cpp runtime

### Compile from source

#### On Ubuntu

1. cd lib/antlr4-cpp-runtime-4.8-source
2. mkdir build
3. cmake ..
4. make -j10
5. make install

#### On Windows

1. Open lib/antlr4-cpp-runtime-4.8-source with VScode
2. Install CMAKE plugin
3. touch .vscode/setting.json ,and set up CMAKE configuration following template bellow for installing to specified path
4. Add "CMAKE_PREFIX_PATH" in Windows system environment like "D:\ProgramData\cmake_modules", which is used by CMAKE find_package command
5. Config all && build all through CMAKE plugin UI
6. Open Visual Studio `x64 Native Tools Command Prompt for VS 2019` && cd build
7. Run `msbuild INSTALL.vcxproj`

```json //setting.json
    "cmake.configureArgs": [
        "-DCMAKE_MODULE_PATH=D:/ProgramData/cmake_modules/lib/cmake/antlr4",
        "-DCMAKE_INSTALL_PREFIX=D:/ProgramData/cmake_modules/lib/cmake/antlr4" ,
        " -DCMAKE_BUILD_TYPE=Debug"
    ]
```

### Use pre-compiled binaries from CONNAN  official

https://conan.io/center/antlr4-cppruntime?os=Windows&tab=configuration

## NOTICE

1. Using Dynamic scope in grammar while generating Cpp target will lead to `error(33):  missing code generation template NonLocalAttrRefHeader`
https://stackoverflow.com/questions/56299784/running-antlr4-parser-for-c-on-grammar-file-shows-error-33-missing-code-gener