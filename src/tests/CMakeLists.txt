file(GLOB TEST_FILES . *.cpp)

add_executable (tests ${TEST_FILES})

target_link_libraries (tests token_utils)
target_include_directories (token_utils PUBLIC "${CMAKE_SOURCE_DIR}/src")
