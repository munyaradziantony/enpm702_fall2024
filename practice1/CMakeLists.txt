# cmake_minimum_required(VERSION 3.20.0)
# project(practice2 VERSION 0.1.0)


# # Compilation flags
# add_compile_options(-Wall)

# include_directories(practice2/include)
# # Add executable
# add_executable(practice2 
#     practice2/src/main.cpp practice2/src/date.cpp)

# # add_custom_command(TARGET practice2 POST_BUILD
# #     COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./practice2
# #     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
# #     COMMENT "Running Valgrind after building practice2"
# #     VERBATIM
# # )


# # add_custom_target(run_valgrind ALL
# #     COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./practice2
# #     DEPENDS practice2
# #     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
# # )


# Set C++ standard to C++17
#set_property(TARGET practice2 PROPERTY CXX_STANDARD 17)

cmake_minimum_required(VERSION 3.10)

# Define the project name
project(Practice1)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(Practice1 src/practice2.cpp)

