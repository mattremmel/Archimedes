# CMake
cmake_minimum_required(VERSION 3.5)


# Project
project(Archimedes)
project(Archimedes)
set(VERSION_MAJOR "0")
set(VERSION_MINOR "1")
set(VERSION_PATCH "0")
set(VERSION "${VERSION_MAJOR}.${VERSION_MINOR}.$VERSION_PATCH}")


# Compiler
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


# Headers
set(HEADERS_CORE
        )
set(HEADERS_EXPRESSIONS
        include/expressions/core
        include/expressions/arithmetic
        include/expressions/boolean
        include/expressions/exponential
        include/expressions/squashing
        include/expressions/trigonometric
        include/expressions/utility
        include/expressions/variable
        )
set(HEADERS_ALL
        ${HEADERS_CORE}
        ${HEADERS_EXPRESSIONS}
        )


# Source
set(SOURCE_EXPRESSIONS
        src/expressions/arithmetic/Add.cpp
        src/expressions/arithmetic/Constant.cpp
        src/expressions/arithmetic/Integer.cpp
        )
set(SOURCE_ALL
        ${SOURCE_EXPRESSIONS}
        )


# Testing
set(TESTS_SOURCE
        test/expressions/arithmetic/Add_Tests.cpp
        test/expressions/arithmetic/Constant_Tests.cpp
        test/expressions/arithmetic/Integer_Tests.cpp
        )
set(TEST_FRAMEWORK_HEADERS
        lib/googletest-1.7.0
        )
set(TEST_FRAMEWORK_ALL
        lib/googletest-1.7.0/gtest_main.cc
        lib/googletest-1.7.0/gtest-all.cc
        )


# Include
include_directories(
        ${HEADERS_ALL}
        ${TEST_FRAMEWORK_HEADERS}
        )


# Project Executable
set(PROJECT_MAIN src/main.cpp)
add_executable(Archimedes
        ${PROJECT_MAIN}
        ${SOURCE_ALL}
        )


# Testing Executable
add_executable(ArchimedesTest
        ${TEST_FRAMEWORK_ALL}
        ${TESTS_SOURCE}
        ${SOURCE_ALL}
        )
