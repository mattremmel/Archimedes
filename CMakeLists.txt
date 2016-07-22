cmake_minimum_required(VERSION 3.5)
project(Archimedes)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    include/expressions/Expression.h src/main.cpp include/expressions/ExpressionType.h)

add_executable(Archimedes ${SOURCE_FILES})