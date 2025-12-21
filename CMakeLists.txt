cmake_minimum_required(VERSION 3.17)


project(DataStruct)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if (NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

file(GLOB_RECURSE SRC src/*.cpp)

add_executable(${PROJECT_NAME} ${SRC} main.cpp)
target_compile_options(${PROJECT_NAME} PRIVATE
    # -------- MSVC --------
    $<$<CXX_COMPILER_ID:MSVC>:
        /W4       
        /WX        
        /permissive-   
    >

    # -------- Clang --------
    $<$<CXX_COMPILER_ID:Clang>:
        -Wall
        -Wextra
        -Wpedantic
        -Werror
        -Wreturn-type
    >
)

target_include_directories(${PROJECT_NAME} PUBLIC include)
