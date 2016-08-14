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
        src/expressions/arithmetic/Divide.cpp
        src/expressions/arithmetic/Integer.cpp
        src/expressions/arithmetic/Multiply.cpp
        src/expressions/arithmetic/Negation.cpp
        src/expressions/arithmetic/Subtract.cpp
        src/expressions/boolean/Equal.cpp
        src/expressions/boolean/GreaterThan.cpp
        src/expressions/boolean/GreaterThanOrEqual.cpp
        src/expressions/boolean/IfThenElse.cpp
        src/expressions/boolean/LessThan.cpp
        src/expressions/boolean/LessThanOrEqual.cpp
        src/expressions/boolean/LogicalAnd.cpp
        src/expressions/boolean/LogicalNot.cpp
        src/expressions/boolean/LogicalOr.cpp
        src/expressions/boolean/LogicalXor.cpp
        src/expressions/exponential/Exponential.cpp
        src/expressions/exponential/Factorial.cpp
        src/expressions/exponential/Logarithm.cpp
        src/expressions/exponential/NRoot.cpp
        src/expressions/exponential/Power.cpp
        src/expressions/exponential/SquareRoot.cpp
        src/expressions/squashing/ErrorFunction.cpp
        src/expressions/squashing/ErrorFunctionComplement.cpp
        src/expressions/squashing/GaussianFunction.cpp
        src/expressions/squashing/HyperbolicTangent.cpp
        src/expressions/squashing/LogisticFunction.cpp
        src/expressions/squashing/SignFunction.cpp
        src/expressions/squashing/StepFunction.cpp
        src/expressions/trigonometric/Arccosine.cpp
        src/expressions/trigonometric/Arcsine.cpp
        src/expressions/trigonometric/Arctangent.cpp
        src/expressions/trigonometric/Arctangent2.cpp
        src/expressions/trigonometric/Cosine.cpp
        src/expressions/trigonometric/Sine.cpp
        src/expressions/trigonometric/Tangent.cpp
        src/expressions/utility/AbsoluteValue.cpp
        src/expressions/utility/Ceiling.cpp
        src/expressions/utility/Floor.cpp
        )
set(SOURCE_ALL
        ${SOURCE_EXPRESSIONS}
        )


# Testing
set(TESTS_SOURCE
        test/expressions/arithmetic/Add_Tests.cpp
        test/expressions/arithmetic/Constant_Tests.cpp
        test/expressions/arithmetic/Divide_Tests.cpp
        test/expressions/arithmetic/Integer_Tests.cpp
        test/expressions/arithmetic/Multiply_Tests.cpp
        test/expressions/arithmetic/Negation_Tests.cpp
        test/expressions/arithmetic/Subtract_Tests.cpp
        test/expressions/boolean/Equal_Tests.cpp
        test/expressions/boolean/GreaterThan_Tests.cpp
        test/expressions/boolean/GreaterThanOrEqual_Tests.cpp
        test/expressions/boolean/IfThenElse_Tests.cpp
        test/expressions/boolean/LessThan_Tests.cpp
        test/expressions/boolean/LessThanOrEqual_Tests.cpp
        test/expressions/boolean/LogicalAnd_Tests.cpp
        test/expressions/boolean/LogicalNot_Tests.cpp
        test/expressions/boolean/LogicalOr_Tests.cpp
        test/expressions/boolean/LogicalXor_Tests.cpp
        test/expressions/exponential/Exponential_Tests.cpp
        test/expressions/exponential/Factorial_Tests.cpp
        test/expressions/exponential/Logarithm_Tests.cpp
        test/expressions/exponential/NRoot_Tests.cpp
        test/expressions/exponential/Power_Tests.cpp
        test/expressions/exponential/SquareRoot_Tests.cpp
        test/expressions/squashing/ErrorFunction_Tests.cpp
        test/expressions/squashing/ErrorFunctionComplement_Tests.cpp
        test/expressions/squashing/GaussianFunction_Tests.cpp
        test/expressions/squashing/HyperbolicTangent_Tests.cpp
        test/expressions/squashing/LogisticFunction_Tests.cpp
        test/expressions/squashing/SignFunction_Test.cpp
        test/expressions/squashing/StepFunction_Tests.cpp
        test/expressions/trigonometric/Arccosine_Tests.cpp
        test/expressions/trigonometric/Arcsine_Tests.cpp
        test/expressions/trigonometric/Arctangent_Tests.cpp
        test/expressions/trigonometric/Arctangent2_Tests.cpp
        test/expressions/trigonometric/Cosine_Tests.cpp
        test/expressions/trigonometric/Sine_Tests.cpp
        test/expressions/trigonometric/Tangent_Tests.cpp
        test/expressions/utility/AbsoluteValue_Tests.cpp
        test/expressions/utility/Ceiling_Tests.cpp
        test/expressions/utility/Floor_Tests.cpp
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
