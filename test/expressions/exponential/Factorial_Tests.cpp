//
// Factorial_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/1/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "Factorial.h"
#include "Integer.h"
#include <math.h>

using namespace Archimedes;


// Factorial::evaluate()
TEST(Factorial, evaluate_simple) {
    // Setup
    Integer* one = new Integer(1);
    Factorial* factorial = new Factorial(one);

    // Assertion
    EXPECT_TRUE(factorial->evaluate() == 1);

    // Clean up
    delete(factorial);
}

TEST(Factorial, evaluate_negative) {
    // Setup
    Integer* ntwo = new Integer(-2);
    Factorial* factorial = new Factorial(ntwo);

    // Assertion
    EXPECT_TRUE(isnan(factorial->evaluate()));

    // Clean up
    delete(factorial);
}

TEST(Factorial, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    Factorial* factorial = new Factorial(zero);

    // Assertion
    EXPECT_TRUE(factorial->evaluate() == 1);

    // Clean up
    delete(factorial);
}


// Factorial::getType()
TEST(Factorial, get_type) {
    // Setup
    Factorial* factorial = new Factorial(nullptr);

    // Assertion
    EXPECT_TRUE(factorial->getType() == ExpressionType::Factorial_);

    // Clean up
    delete(factorial);
}


// Factorial::toString()
TEST(Factorial, to_string_simple) {
    // Setup
    Integer* zero = new Integer(0);
    Factorial* factorial = new Factorial(zero);

    // Assertion
    EXPECT_TRUE(factorial->toString() == "factorial(0)");

    // Clean up
    delete(factorial);
}