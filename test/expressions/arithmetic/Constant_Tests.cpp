//
// Constant_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 6/30/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "Constant.h"

using namespace Archimedes;


// Constant::evaluate()
TEST(Constant, evaluate_positive) {
    // Setup
    Constant* x = new Constant(1.5);

    // Assertion
    EXPECT_TRUE(x->evaluate() == 1.5);

    // Clean up
    delete(x);
}

TEST(Constant, evaluate_negative) {
    // Setup
    Constant* x = new Constant(-1.5);

    // Assertion
    EXPECT_TRUE(x->evaluate() == -1.5);

    // Clean up
    delete(x);
}


// Constant::getType()
TEST(Constant, get_type) {
    // Setup
    Constant* x = new Constant(0);

    // Assertion
    EXPECT_TRUE(x->getType() == ExpressionType::Constant_);

    // Clean up
    delete(x);
}


// Constant::toString()
TEST(Constant, to_string_positive) {
    // Setup
    Constant* x = new Constant(1.5);

    // Assertion
    EXPECT_TRUE(x->toString() == "1.5");

    // Clean up
    delete(x);
}

TEST(Constant, to_string_negative) {
    // Setup
    Constant* x = new Constant(-1.5);

    // Assertion
    EXPECT_TRUE(x->toString() == "-1.5");

    // Clean up
    delete(x);
}