cmake_minimum_required(VERSION 3.16)
project(robot_actions VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(robot_core
    src/move_forward.cpp
    src/rotate.cpp
    src/wave.cpp
    src/robot.cpp
)
target_include_directories(robot_core PUBLIC include)
if (MSVC)
    target_compile_options(robot_core PRIVATE /W4 /utf-8)
else()
    target_compile_options(robot_core PRIVATE -Wall -Wextra -Wpedantic)
endif()
add_executable(robot_demo src/main.cpp)
target_link_libraries(robot_demo PRIVATE robot_core)
if (MSVC)
    target_compile_options(robot_demo PRIVATE /W4 /utf-8)
else()
    target_compile_options(robot_demo PRIVATE -Wall -Wextra -Wpedantic)
endif()
