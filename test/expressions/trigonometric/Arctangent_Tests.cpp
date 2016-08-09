//
// Arctangent_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/2/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "Arctangent.h"
#include "Integer.h"

using namespace Archimedes;


// Arctangent::evaluate()
TEST(Arctangent, evaluate_simple) {
    // Setup
    Integer* one = new Integer(1);
    Arctangent* arctangent = new Arctangent(one);

    // Assertion
    EXPECT_NEAR(arctangent->evaluate(), 0.7853, 0.0001);

    // Clean up
    delete(arctangent);
}

TEST(Arctangent, evaluate_negative) {
    // Setup
    Integer* none = new Integer(-1);
    Arctangent* arctangent = new Arctangent(none);

    // Assertion
    EXPECT_NEAR(arctangent->evaluate(), -0.7853, 0.0001);

    // Clean up
    delete(arctangent);
}

TEST(Arctangent, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    Arctangent* arctangent = new Arctangent(zero);

    // Assertion
    EXPECT_TRUE(arctangent->evaluate() == 0);

    // Clean up
    delete(arctangent);
}


// Arctangent::getType()
TEST(Arctangent, get_type) {
    // Setup
    Arctangent* arctangent = new Arctangent(nullptr);

    // Assertion
    EXPECT_TRUE(arctangent->getType() == ExpressionType::Arctangent_);

    // Clean up
    delete(arctangent);
}


// Arctangent::toString()
TEST(Arctangent, to_string_simple) {
    // Setup
    Integer* zero = new Integer(0);
    Arctangent* arctangent = new Arctangent(zero);

    // Assertion
    EXPECT_TRUE(arctangent->toString() == "atan(0)");

    // Clean up
    delete(arctangent);
}