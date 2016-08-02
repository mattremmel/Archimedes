//
// Integer_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/1/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "Integer.h"

using namespace Archimedes;


// Integer::evaluate()
TEST(Integer, evaluate_positive) {
    // Setup
    Integer* x = new Integer(5);

    // Assertion
    EXPECT_TRUE(x->evaluate() == 5);

    // Clean up
    delete(x);
}

TEST(Integer, evaluate_negative) {
    // Setup
    Integer* x = new Integer(-5);

    // Assertion
    EXPECT_TRUE(x->evaluate() == -5);

    // Clean up
    delete(x);
}


// Integer::getType()
TEST(Integer, get_type) {
    // Setup
    Integer* x = new Integer(0);

    // Assertion
    EXPECT_TRUE(x->getType() == ExpressionType::Integer_);

    // Clean up
    delete(x);
}


// Integer::toString()
TEST(Integer, print_positive) {
    // Setup
    Integer* x = new Integer(5);

    // Assertion
    EXPECT_TRUE(x->toString() == "5");

    // Clean up
    delete(x);
}

TEST(Integer, print_negative) {
    // Setup
    Integer* x = new Integer(-5);

    // Assertion
    EXPECT_TRUE(x->toString() == "-5");

    // Clean up
    delete(x);
}