file(GLOB MAIN_FILES . *.cpp)
add_executable (tokenizer ${MAIN_FILES} )

find_package (Qt5Core REQUIRED)

target_link_libraries (tokenizer Qt5::Core)
target_link_libraries (tokenizer token_utils)

add_subdirectory(token_utils)
add_subdirectory(tests)
