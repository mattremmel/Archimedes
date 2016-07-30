cmake_minimum_required(VERSION 3.5)
project(Archimedes)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(HEADER_FILES
        include/expressions/core/Expression.h include/expressions/core/ExpressionType.h include/expressions/core/UnaryExpression.h include/expressions/core/BinaryExpression.h include/expressions/arithmetic/Add.h
        )

set(SOURCE_FILES
        src/main.cpp
        )

include_directories(
        include/expressions/core include/expressions/arithmetic include/expressions/boolean include/expressions/exponential include/expressions/squashing
        )

add_executable(Archimedes ${SOURCE_FILES})