//
// Minimum_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/1/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "Minimum.h"
#include "Integer.h"

using namespace Archimedes;


// Minimum::evaluate()
TEST(Minimum, evaluate_simple) {
    // Setup
    Integer* two = new Integer(2);
    Integer* eight = new Integer(8);
    Minimum* minimum = new Minimum(two, eight);

    // Assertion
    EXPECT_TRUE(minimum->evaluate() == 2);

    // Clean up
    delete(minimum);
}

TEST(Minimum, evaluate_negative) {
    // Setup
    Integer* ntwo = new Integer(-2);
    Integer* seven = new Integer(7);
    Minimum* minimum = new Minimum(seven, ntwo);

    // Assertion
    EXPECT_TRUE(minimum->evaluate() == -2);

    // Clean up
    delete(minimum);
}

TEST(Minimum, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* two = new Integer(2);
    Minimum* minimum = new Minimum(zero, two);

    // Assertion
    EXPECT_TRUE(minimum->evaluate() == 0);

    // Clean up
    delete(minimum);
}

TEST(Minimum, evaluate_zero_both) {
    // Setup
    Integer* zero1 = new Integer(0);
    Integer* zero2 = new Integer(0);
    Minimum* minimum = new Minimum(zero1, zero2);

    // Assertion
    EXPECT_TRUE(minimum->evaluate() == 0);

    // Clean up
    delete(minimum);
}


// Minimum::getType()
TEST(Minimum, get_type) {
    // Setup
    Minimum* minimum = new Minimum(nullptr, nullptr);

    // Assertion
    EXPECT_TRUE(minimum->getType() == ExpressionType::Minimum_);

    // Clean up
    delete(minimum);
}


// Minimum::toString()
TEST(Minimum, to_string_simple) {
    // Setup
    Integer* two = new Integer(2);
    Integer* eight = new Integer(8);
    Minimum* minimum = new Minimum(two, eight);

    // Assertion
    EXPECT_TRUE(minimum->toString() == "min(2, 8)");

    // Clean up
    delete(minimum);
}