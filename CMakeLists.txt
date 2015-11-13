
cmake_minimum_required (VERSION 2.8)
project (util)

add_executable(util-test test.cpp)

add_definitions(-std=c++14 -O3 -stdlib=libc++ -Wall -pedantic -Werror)

