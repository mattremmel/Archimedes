//
// LessThanOrEqual_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/1/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "LessThanOrEqual.h"
#include "Integer.h"

using namespace Archimedes;


// LessThanOrEqual::evaluate()
TEST(LessThanOrEqual, evaluate_true_less) {
    // Setup
    Integer* five = new Integer(5);
    Integer* ten = new Integer(10);
    LessThanOrEqual* less_than_equal = new LessThanOrEqual(five, ten);

    // Assertion
    EXPECT_TRUE(less_than_equal->evaluate() == 1);

    // Clean up
    delete(less_than_equal);
}

TEST(LessThanOrEqual, evaluate_true_equal) {
    // Setup
    Integer* five1 = new Integer(5);
    Integer* five2 = new Integer(5);
    LessThanOrEqual* less_than_equal = new LessThanOrEqual(five1, five2);

    // Assertion
    EXPECT_TRUE(less_than_equal->evaluate() == 1);

    // Clean up
    delete(less_than_equal);
}

TEST(LessThanOrEqual, evaluate_false) {
    // Setup
    Integer* five = new Integer(5);
    Integer* ten = new Integer(10);
    LessThanOrEqual* less_than_equal = new LessThanOrEqual(ten, five);

    // Assertion
    EXPECT_TRUE(less_than_equal->evaluate() == 0);

    // Clean up
    delete(less_than_equal);
}


// LessThanOrEqual::getType()
TEST(LessThanOrEqual, get_type) {
    // Setup
    LessThanOrEqual* less_than_equal = new LessThanOrEqual(nullptr, nullptr);

    // Assertion
    EXPECT_TRUE(less_than_equal->getType() == ExpressionType::LessThanOrEqual_);

    // Clean up
    delete(less_than_equal);
}


// LessThanOrEqual::toString()
TEST(LessThanOrEqual, print_simple) {
    // Setup
    Integer* five = new Integer(5);
    Integer* ten = new Integer(10);
    LessThanOrEqual* less_than_equal = new LessThanOrEqual(five, ten);

    // Assertion
    EXPECT_TRUE(less_than_equal->toString() == "(5 <= 10)");

    // Clean up
    delete(less_than_equal);
}