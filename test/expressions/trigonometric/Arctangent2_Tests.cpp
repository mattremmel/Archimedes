//
// Arctangent2_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/2/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "Arctangent2.h"
#include "Integer.h"

using namespace Archimedes;


// Arctangent2::evaluate()
TEST(Arctangent2, evaluate_simple) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* one = new Integer(1);
    Arctangent2* arctangent2 = new Arctangent2(one, zero);

    // Assertion
    EXPECT_NEAR(arctangent2->evaluate(), 1.5707, 0.0001);

    // Clean up
    delete(arctangent2);
}

TEST(Arctangent2, evaluate_negative) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* none = new Integer(-1);
    Arctangent2* arctangent2 = new Arctangent2(none, zero);

    // Assertion
    EXPECT_NEAR(arctangent2->evaluate(), -1.5707, 0.0001);

    // Clean up
    delete(arctangent2);
}

TEST(Arctangent2, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* one = new Integer(1);
    Arctangent2* arctangent2 = new Arctangent2(zero, one);

    // Assertion
    EXPECT_TRUE(arctangent2->evaluate() == 0);

    // Clean up
    delete(arctangent2);
}


// Arctangent2::getType()
TEST(Arctangent2, get_type) {
    // Setup
    Arctangent2* arctangent2 = new Arctangent2(nullptr, nullptr);

    // Assertion
    EXPECT_TRUE(arctangent2->getType() == ExpressionType::Arctangent2_);

    // Clean up
    delete(arctangent2);
}


// Arctangent2::toString()
TEST(Arctangent2, to_string_simple) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* one = new Integer(1);
    Arctangent2* arctangent2 = new Arctangent2(zero, one);

    // Assertion
    EXPECT_TRUE(arctangent2->toString() == "atan2(0, 1)");

    // Clean up
    delete(arctangent2);
}