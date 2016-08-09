//
// Sine_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/2/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "Sine.h"
#include "Integer.h"

using namespace Archimedes;


// Sine::evaluate()
TEST(Sine, evaluate_simple) {
    // Setup
    Integer* one = new Integer(1);
    Sine* sine = new Sine(one);

    // Assertion
    EXPECT_NEAR(sine->evaluate(), 0.8414, 0.0001);

    // Clean up
    delete(sine);
}

TEST(Sine, evaluate_negative) {
    // Setup
    Integer* none = new Integer(-1);
    Sine* sine = new Sine(none);

    // Assertion
    EXPECT_NEAR(sine->evaluate(), -0.8414, 0.0001);

    // Clean up
    delete(sine);
}

TEST(Sine, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    Sine* sine = new Sine(zero);

    // Assertion
    EXPECT_TRUE(sine->evaluate() == 0);

    // Clean up
    delete(sine);
}


// Sine::getType()
TEST(Sine, get_type) {
    // Setup
    Sine* sine = new Sine(nullptr);

    // Assertion
    EXPECT_TRUE(sine->getType() == ExpressionType::Sine_);

    // Clean up
    delete(sine);
}


// Sine::toString()
TEST(Sine, print_simple) {
    // Setup
    Integer* zero = new Integer(0);
    Sine* sine = new Sine(zero);

    // Assertion
    EXPECT_TRUE(sine->toString() == "sin(0)");

    // Clean up
    delete(sine);
}