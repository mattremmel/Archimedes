//
// Tangent_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/2/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "Tangent.h"
#include "Integer.h"

using namespace Archimedes;


// Tangent::evaluate()
TEST(Tangent, evaluate_simple) {
    // Setup
    Integer* one = new Integer(1);
    Tangent* tangent = new Tangent(one);

    // Assertion
    EXPECT_NEAR(tangent->evaluate(), 1.5574, 0.0001);

    // Clean up
    delete(tangent);
}

TEST(Tangent, evaluate_negative) {
    // Setup
    Integer* none = new Integer(-1);
    Tangent* tangent = new Tangent(none);

    // Assertion
    EXPECT_NEAR(tangent->evaluate(), -1.5574, 0.0001);

    // Clean up
    delete(tangent);
}

TEST(Tangent, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    Tangent* tangent = new Tangent(zero);

    // Assertion
    EXPECT_TRUE(tangent->evaluate() == 0);

    // Clean up
    delete(tangent);
}


// Tangent::getType()
TEST(Tangent, get_type) {
    // Setup
    Tangent* tangent = new Tangent(nullptr);

    // Assertion
    EXPECT_TRUE(tangent->getType() == ExpressionType::Tangent_);

    // Clean up
    delete(tangent);
}


// Tangent::toString()
TEST(Tangent, to_string_simple) {
    // Setup
    Integer* zero = new Integer(0);
    Tangent* tangent = new Tangent(zero);

    // Assertion
    EXPECT_TRUE(tangent->toString() == "tan(0)");

    // Clean up
    delete(tangent);
}