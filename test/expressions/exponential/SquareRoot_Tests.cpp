//
// SquareRoot.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/1/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "SquareRoot.h"
#include "Integer.h"
#include <math.h>

using namespace Archimedes;


// SquareRoot::evaluate()
TEST(SquareRoot, evaluate_simple) {
    // Setup
    Integer* hundred = new Integer(100);
    SquareRoot* square_root = new SquareRoot(hundred);

    // Assertion
    EXPECT_TRUE(square_root->evaluate() == 10);

    // Clean up
    delete(square_root);
}

TEST(SquareRoot, evaluate_negative) {
    // Setup
    Integer* nhundred = new Integer(-100);
    SquareRoot* square_root = new SquareRoot(nhundred);

    // Assertion
    EXPECT_TRUE(isnan(square_root->evaluate()));

    // Clean up
    delete(square_root);
}

TEST(SquareRoot, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    SquareRoot* square_root = new SquareRoot(zero);

    // Assertion
    EXPECT_TRUE(square_root->evaluate() == 0);

    // Clean up
    delete(square_root);
}


// SquareRoot::getType()
TEST(SquareRoot, get_type) {
    // Setup
    SquareRoot* square_root = new SquareRoot(nullptr);

    // Assertion
    EXPECT_TRUE(square_root->getType() == ExpressionType::SquareRoot_);

    // Clean up
    delete(square_root);
}


// SquareRoot::toString()
TEST(SquareRoot, to_string_simple) {
    // Setup
    Integer* hundred = new Integer(100);
    SquareRoot* square_root = new SquareRoot(hundred);

    // Assertion
    EXPECT_TRUE(square_root->toString() == "sqrt(100)");

    // Clean up
    delete(square_root);
}