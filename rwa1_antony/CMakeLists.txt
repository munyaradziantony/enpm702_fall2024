cmake_minimum_required(VERSION 3.20.0)
project(exercise3 VERSION 0.1.0)

# Compilation flags
add_compile_options(-Wall)

# Add executable
add_executable(exercise3 exercise3/src/exercise3.cpp)

# add_custom_command(TARGET exercise1 POST_BUILD
#     COMMAND ./exercise1 | c++filt -t
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
#     COMMENT "Resolve name mangling"
#     VERBATIM
# )

# add_custom_command(TARGET exercise1 POST_BUILD
#     COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./exercise1
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
#     COMMENT "Running Valgrind after building exercise1"
#     VERBATIM
# )

# add_custom_target(demangle ALL
#     COMMAND COMMAND ./exercise1 | c++filt -t
#     DEPENDS exercise1
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
# )

# add_custom_target(run_valgrind ALL
#     COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./exercise1
#     DEPENDS exercise1
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
# )

# Set C++ standard to C++17
set_property(TARGET exercise3 PROPERTY CXX_STANDARD 17)
