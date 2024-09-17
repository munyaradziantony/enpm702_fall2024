# Execute each test listed in:
#
set(scriptname "/home/munyaantony/enpm702_cpp_ws/enpm702_fall2024/cmake-3.22.1/cmake-3.28.1/Tests/CMakeTests/MathTestScript.cmake")
set(number_of_tests_expected 4)

include("/home/munyaantony/enpm702_cpp_ws/enpm702_fall2024/cmake-3.22.1/cmake-3.28.1/Tests/CMakeTests/ExecuteScriptTests.cmake")
execute_all_script_tests(${scriptname} number_of_tests_executed)

# And verify that number_of_tests_executed is at least as many as we know
# about as of this writing...
#
message(STATUS "scriptname='${scriptname}'")
message(STATUS "number_of_tests_executed='${number_of_tests_executed}'")
message(STATUS "number_of_tests_expected='${number_of_tests_expected}'")

if(number_of_tests_executed LESS number_of_tests_expected)
  message(FATAL_ERROR "error: some test cases were skipped")
endif()
