add_library (token_utils test.cpp)

find_package (Qt5Core REQUIRED)

target_link_libraries (token_utils Qt5::Core)
target_include_directories (token_utils PUBLIC ${CMAKE_SOURCE_DIR})
