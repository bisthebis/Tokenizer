
add_executable (tokenizer main.cpp )

find_package (Qt5Core REQUIRED)

target_link_libraries (tokenizer Qt5::Core)
target_link_libraries (tokenizer token_utils)
