cmake_minimum_required(VERSION 3.20.0)
<<<<<<< HEAD
project(lecture5 VERSION 0.1.0)

include_directories(lecture5/include)
=======
project(lecture4 VERSION 0.1.0)

>>>>>>> upstream/main

# Compilation flags
add_compile_options(-Wall)

# Add executable
<<<<<<< HEAD
add_executable(lecture5 lecture5/src/lecture5.cpp)
=======
add_executable(lecture4 lecture4/src/lecture4.cpp)

>>>>>>> upstream/main


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

# add_custom_command(TARGET lecture3 POST_BUILD
#     COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./lecture3
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
#     COMMENT "Running Valgrind after building lecture3"
#     VERBATIM
# )


# add_custom_target(run_valgrind ALL
#     COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./lecture3
#     DEPENDS lecture3
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
# )

<<<<<<< HEAD

# Set C++ standard to C++17
set_property(TARGET lecture5 PROPERTY CXX_STANDARD 17)
=======
# add_custom_command(TARGET lecture3 POST_BUILD
#     COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./lecture3
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
#     COMMENT "Running Valgrind after building lecture3"
#     VERBATIM
# )


# add_custom_target(run_valgrind ALL
#     COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./lecture3
#     DEPENDS lecture3
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
# )


# Set C++ standard to C++17
set_property(TARGET lecture4 PROPERTY CXX_STANDARD 17)
>>>>>>> upstream/main

