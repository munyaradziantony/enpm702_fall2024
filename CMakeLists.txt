cmake_minimum_required(VERSION 3.20.0)
project(lecture1 VERSION 0.1.0)

# Compilation flags
add_compile_options(-Wall)

# Add executable
add_executable(lecture1 lecture1/src/lecture1.cpp)

# add_custom_command(TARGET lecture1 POST_BUILD
#     COMMAND ./lecture1 | c++filt -t
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
#     COMMENT "Resolve name mangling"
#     VERBATIM
# )

# add_custom_command(TARGET lecture1 POST_BUILD
#     COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./lecture1
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
#     COMMENT "Running Valgrind after building lecture3"
#     VERBATIM
# )

# add_custom_target(demangle ALL
#     COMMAND COMMAND ./lecture | c++filt -t
#     DEPENDS lecture1
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
# )

# add_custom_target(run_valgrind ALL
#     COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./lecture1
#     DEPENDS lecture1
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
# )


# Set C++ standard to C++17
set_property(TARGET lecture1 PROPERTY CXX_STANDARD 17)
