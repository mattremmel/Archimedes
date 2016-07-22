cmake_minimum_required(VERSION 3.5)
project(Archimedes)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(HEADER_FILES
        include/expressions/Expression.h include/expressions/ExpressionType.h include/expressions/UnaryExpression.h include/expressions/BinaryExpression.h include/expressions/arithmetic/Add.h
        )

set(SOURCE_FILES
        src/main.cpp
        )

include_directories(
        include/expressions include/expressions/arithmetic
        )

add_executable(Archimedes ${SOURCE_FILES})