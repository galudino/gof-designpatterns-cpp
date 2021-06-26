cmake_minimum_required(VERSION "3.18")
project("gof-designpatterns-cpp")

set(CXX_STANDARD "20") # C++20
set(CFLAGS "-Wall -Werror -pedantic-errors")

set(CMAKE_CXX_STANDARD ${CXX_STANDARD})
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} ${CFLAGS})

add_subdirectory("./src")
