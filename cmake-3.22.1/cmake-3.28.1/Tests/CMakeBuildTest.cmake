# create the binary directory
make_directory("/home/munyaantony/enpm702_cpp_ws/enpm702_fall2024/cmake-3.22.1/cmake-3.28.1/Tests/CMakeBuildCOnly")

# remove the CMakeCache.txt file from the source dir
# if there is one, so that in-source cmake tests
# still pass
message("Remove: /home/munyaantony/enpm702_cpp_ws/enpm702_fall2024/cmake-3.22.1/cmake-3.28.1/Tests/COnly/CMakeCache.txt")
file(REMOVE "/home/munyaantony/enpm702_cpp_ws/enpm702_fall2024/cmake-3.22.1/cmake-3.28.1/Tests/COnly/CMakeCache.txt")

# run cmake in the binary directory
message("running: ${CMAKE_COMMAND}")
execute_process(COMMAND "${CMAKE_COMMAND}"
  "/home/munyaantony/enpm702_cpp_ws/enpm702_fall2024/cmake-3.22.1/cmake-3.28.1/Tests/COnly"
  "-GUnix Makefiles"
  -A ""
  -T ""
  WORKING_DIRECTORY "/home/munyaantony/enpm702_cpp_ws/enpm702_fall2024/cmake-3.22.1/cmake-3.28.1/Tests/CMakeBuildCOnly"
  RESULT_VARIABLE RESULT)
if(RESULT)
  message(FATAL_ERROR "Error running cmake command")
endif()

# Now use the --build option to build the project
message("running: ${CMAKE_COMMAND} --build")
execute_process(COMMAND "${CMAKE_COMMAND}"
  --build "/home/munyaantony/enpm702_cpp_ws/enpm702_fall2024/cmake-3.22.1/cmake-3.28.1/Tests/CMakeBuildCOnly" --config Debug
  RESULT_VARIABLE RESULT)
if(RESULT)
  message(FATAL_ERROR "Error running cmake --build")
endif()

# run the executable out of the Debug directory if using a
# multi-config generator
set(_isMultiConfig 0)
if(_isMultiConfig)
  set(RUN_TEST "/home/munyaantony/enpm702_cpp_ws/enpm702_fall2024/cmake-3.22.1/cmake-3.28.1/Tests/CMakeBuildCOnly/Debug/COnly")
else()
  set(RUN_TEST "/home/munyaantony/enpm702_cpp_ws/enpm702_fall2024/cmake-3.22.1/cmake-3.28.1/Tests/CMakeBuildCOnly/COnly")
endif()
# run the test results
message("running [${RUN_TEST}]")
execute_process(COMMAND "${RUN_TEST}" RESULT_VARIABLE RESULT)
if(RESULT)
  message(FATAL_ERROR "Error running test COnly")
endif()

# build it again with clean and only COnly target
execute_process(COMMAND "${CMAKE_COMMAND}"
  --build "/home/munyaantony/enpm702_cpp_ws/enpm702_fall2024/cmake-3.22.1/cmake-3.28.1/Tests/CMakeBuildCOnly" --config Debug
  --clean-first --target COnly
  RESULT_VARIABLE RESULT)
if(RESULT)
  message(FATAL_ERROR "Error running cmake --build")
endif()

# run it again after clean
execute_process(COMMAND "${RUN_TEST}" RESULT_VARIABLE RESULT)
if(RESULT)
  message(FATAL_ERROR "Error running test COnly after clean ")
endif()