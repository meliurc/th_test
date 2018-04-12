PROJECT(TH_TEST)

cmake_minimum_required(VERSION 2.6)

set(INCLUDE_HEADER_DIR "F:/test/th_test/include/")

SET(CMAKE_C_FLAGS  "-std=c99 ${CMAKE_C_FLAGS}" )

include_directories(${INCLUDE_HEADER_DIR})
LINK_DIRECTORIES(F:\\test\\th_test\\bin)

add_executable(demo main.c)
TARGET_LINK_LIBRARIES(demo F:/test/th_test/bin/libTH.dll)
