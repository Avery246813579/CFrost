cmake_minimum_required(VERSION 3.8)
project(CFrost)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES src/main.c src/test.h src/test.c src/token.h src/token.c)
add_executable(CFrost ${SOURCE_FILES})