//
// NRoot_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/1/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "NRoot.h"
#include "Integer.h"
#include <math.h>

using namespace Archimedes;


// NRoot::evaluate()
TEST(NRoot, evaluate_simple) {
    // Setup
    Integer* two = new Integer(2);
    Integer* hundred = new Integer(100);
    NRoot* nroot = new NRoot(hundred, two);

    // Assertion
    EXPECT_TRUE(nroot->evaluate() == 10);

    // Clean up
    delete(nroot);
}

TEST(NRoot, evaluate_negative) {
    // Setup
    Integer* two = new Integer(2);
    Integer* nhundred = new Integer(-100);
    NRoot* nroot = new NRoot(nhundred, two);

    // Assertion
    EXPECT_TRUE(isnan(nroot->evaluate()));

    // Clean up
    delete(nroot);
}

TEST(NRoot, evaluate_zero_radical) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* hundred = new Integer(100);
    NRoot* nroot = new NRoot(hundred, zero);

    // Assertion
    EXPECT_TRUE(isnan(nroot->evaluate()));

    // Clean up
    delete(nroot);
}

TEST(NRoot, evaluate_zero_base) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* two = new Integer(2);
    NRoot* nroot = new NRoot(zero, two);

    // Assertion
    EXPECT_TRUE(nroot->evaluate() == 0);

    // Clean up
    delete(nroot);
}


// NRoot::getType()
TEST(NRoot, get_type) {
    // Setup
    NRoot* nroot = new NRoot(nullptr, nullptr);

    // Assertion
    EXPECT_TRUE(nroot->getType() == ExpressionType::NRoot_);

    // Clean up
    delete(nroot);
}


// NRoot::toString()
TEST(NRoot, to_string_simple) {
    // Setup
    Integer* two = new Integer(2);
    Integer* hundred = new Integer(100);
    NRoot* nroot = new NRoot(hundred, two);

    // Assertion
    EXPECT_TRUE(nroot->toString() == "nroot(100, 2)");

    // Clean up
    delete(nroot);
}