
add_executable (tests main.cpp dummy_test.cpp)

target_link_libraries (tests token_utils)
target_include_directories (token_utils PUBLIC "${CMAKE_SOURCE_DIR}/src")
message(STATUS "CMAKE_SOURCE_DIR : ${CMAKE_SOURCE_DIR}")
