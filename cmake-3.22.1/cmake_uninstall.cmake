if(NOT EXISTS "/home/munyaantony/enpm702_cpp_ws/enpm702_fall2024/cmake-3.22.1/install_manifest.txt")
  message(FATAL_ERROR "Cannot find install manifest: \"/home/munyaantony/enpm702_cpp_ws/enpm702_fall2024/cmake-3.22.1/install_manifest.txt\"")
endif()

file(READ "/home/munyaantony/enpm702_cpp_ws/enpm702_fall2024/cmake-3.22.1/install_manifest.txt" files)
string(REPLACE "\n" ";" files "${files}")
foreach(file ${files})
  message(STATUS "Uninstalling \"$ENV{DESTDIR}${file}\"")
  if(EXISTS "$ENV{DESTDIR}${file}")
    exec_program(
      "/home/munyaantony/enpm702_cpp_ws/enpm702_fall2024/cmake-3.22.1/Bootstrap.cmk/cmake" ARGS "-E rm -f \"$ENV{DESTDIR}${file}\""
      OUTPUT_VARIABLE rm_out
      RETURN_VALUE rm_retval
      )
    if("${rm_retval}" STREQUAL 0)
    else()
      message(FATAL_ERROR "Problem when removing \"$ENV{DESTDIR}${file}\"")
    endif()
  else()
    message(STATUS "File \"$ENV{DESTDIR}${file}\" does not exist.")
  endif()
endforeach()