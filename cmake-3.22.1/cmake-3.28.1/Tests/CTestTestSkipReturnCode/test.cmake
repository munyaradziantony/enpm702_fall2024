cmake_minimum_required(VERSION 3.5)

# Settings:
set(CTEST_DASHBOARD_ROOT                "/home/munyaantony/enpm702_cpp_ws/enpm702_fall2024/cmake-3.22.1/cmake-3.28.1/Tests/CTestTest")
set(CTEST_SITE                          "munyaantony-Precision-7550")
set(CTEST_BUILD_NAME                    "CTestTest-Linux-g++-SkipReturnCode")

set(CTEST_SOURCE_DIRECTORY              "/home/munyaantony/enpm702_cpp_ws/enpm702_fall2024/cmake-3.22.1/cmake-3.28.1/Tests/CTestTestSkipReturnCode")
set(CTEST_BINARY_DIRECTORY              "/home/munyaantony/enpm702_cpp_ws/enpm702_fall2024/cmake-3.22.1/cmake-3.28.1/Tests/CTestTestSkipReturnCode")
set(CTEST_CVS_COMMAND                   "")
set(CTEST_CMAKE_GENERATOR               "Unix Makefiles")
set(CTEST_CMAKE_GENERATOR_PLATFORM      "")
set(CTEST_CMAKE_GENERATOR_TOOLSET       "")
set(CTEST_BUILD_CONFIGURATION           "$ENV{CMAKE_CONFIG_TYPE}")
set(CTEST_COVERAGE_COMMAND              "/usr/bin/gcov")
set(CTEST_NOTES_FILES                   "${CTEST_SCRIPT_DIRECTORY}/${CTEST_SCRIPT_NAME}")

#CTEST_EMPTY_BINARY_DIRECTORY(${CTEST_BINARY_DIRECTORY})

CTEST_START(Experimental)
CTEST_CONFIGURE(BUILD "${CTEST_BINARY_DIRECTORY}" RETURN_VALUE res)
CTEST_BUILD(BUILD "${CTEST_BINARY_DIRECTORY}" RETURN_VALUE res)
CTEST_TEST(BUILD "${CTEST_BINARY_DIRECTORY}" RETURN_VALUE res)