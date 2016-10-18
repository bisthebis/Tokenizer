cmake_minimum_required(VERSION 3.0)
PROJECT(Tokenizer)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package (Qt5Core REQUIRED)

add_executable(tokenizer main.cpp)

target_link_libraries(tokenizer Qt5::Core)
