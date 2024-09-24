cmake_minimum_required(VERSION 3.20.0)
project(practice1 VERSION 0.1.0)

# Compilation flags
add_compile_options(-Wall)

# Add executable
add_executable(practice1 practice1/src/practice1.cpp)

# add_custom_command(TARGET lecture1 POST_BUILD
#     COMMAND ./lecture1 | c++filt -t
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
#     COMMENT "Resolve name mangling"
#     VERBATIM
# )

# add_custom_target(demangle ALL
#     COMMAND ./practice1 | c++filt -t
#     DEPENDS practice1
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
# )

# add_custom_command(TARGET practice1 POST_BUILD
#     COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./practice1
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
#     COMMENT "Running Valgrind after building practice1"
#     VERBATIM
# )


# add_custom_target(run_valgrind ALL
#     COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./practice1
#     DEPENDS practice1
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
# )


# Set C++ standard to C++17
set_property(TARGET practice1 PROPERTY CXX_STANDARD 17)
