//
// GreaterThanOrEqual_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/1/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "GreaterThanOrEqual.h"
#include "Integer.h"

using namespace Archimedes;


// GreaterThanOrEqual::evaluate()
TEST(GreaterThanOrEqual, evaluate_true_greater) {
    // Setup
    Integer* five = new Integer(5);
    Integer* ten = new Integer(10);
    GreaterThanOrEqual* greater_than_equal = new GreaterThanOrEqual(ten, five);

    // Assertion
    EXPECT_TRUE(greater_than_equal->evaluate() == 1);

    // Clean up
    delete(greater_than_equal);
}

TEST(GreaterThanOrEqual, evaluate_true_equal) {
    // Setup
    Integer* five1 = new Integer(5);
    Integer* five2 = new Integer(5);
    GreaterThanOrEqual* greater_than_equal = new GreaterThanOrEqual(five1, five2);

    // Assertion
    EXPECT_TRUE(greater_than_equal->evaluate() == 1);

    // Clean up
    delete(greater_than_equal);
}

TEST(GreaterThanOrEqual, evaluate_false) {
    // Setup
    Integer* five = new Integer(5);
    Integer* ten = new Integer(10);
    GreaterThanOrEqual* greater_than_equal = new GreaterThanOrEqual(five, ten);

    // Assertion
    EXPECT_TRUE(greater_than_equal->evaluate() == 0);

    // Clean up
    delete(greater_than_equal);
}


// GreaterThanOrEqual::getType()
TEST(GreaterThanOrEqual, get_type) {
    // Setup
    GreaterThanOrEqual* greater_than_equal = new GreaterThanOrEqual(nullptr, nullptr);

    // Assertion
    EXPECT_TRUE(greater_than_equal->getType() == ExpressionType::GreaterThanOrEqual_);

    // Clean up
    delete(greater_than_equal);
}


// GreaterThanOrEqual::toString()
TEST(GreaterThanOrEqual, to_string_simple) {
    // Setup
    Integer* five = new Integer(5);
    Integer* ten = new Integer(10);
    GreaterThanOrEqual* greater_than_equal = new GreaterThanOrEqual(five, ten);

    // Assertion
    EXPECT_TRUE(greater_than_equal->toString() == "(5 >= 10)");

    // Clean up
    delete(greater_than_equal);
}