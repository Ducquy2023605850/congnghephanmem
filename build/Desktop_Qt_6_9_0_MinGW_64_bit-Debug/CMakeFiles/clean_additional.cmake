# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\dangnhap_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\dangnhap_autogen.dir\\ParseCache.txt"
  "dangnhap_autogen"
  )
endif()
