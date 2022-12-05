# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Cross_and_Null_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Cross_and_Null_autogen.dir\\ParseCache.txt"
  "Cross_and_Null_autogen"
  )
endif()
