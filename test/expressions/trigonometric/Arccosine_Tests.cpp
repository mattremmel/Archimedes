//
// Arccosine_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/2/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "Arccosine.h"
#include "Integer.h"

using namespace Archimedes;


// Arccosine::evaluate()
TEST(Arccosine, evaluate_simple) {
    // Setup
    Integer* one = new Integer(1);
    Arccosine* arccosine = new Arccosine(one);

    // Assertion
    EXPECT_TRUE(arccosine->evaluate() == 0);

    // Clean up
    delete(arccosine);
}

TEST(Arccosine, evaluate_negative) {
    // Setup
    Integer* none = new Integer(-1);
    Arccosine* arccosine = new Arccosine(none);

    // Assertion
    EXPECT_NEAR(arccosine->evaluate(), 3.1415, 0.0001);

    // Clean up
    delete(arccosine);
}

TEST(Arccosine, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    Arccosine* arccosine = new Arccosine(zero);

    // Assertion
    EXPECT_NEAR(arccosine->evaluate(), 1.5707, 0.0001);

    // Clean up
    delete(arccosine);
}


// Arccosine::getType()
TEST(Arccosine, get_type) {
    // Setup
    Arccosine* arccosine = new Arccosine(nullptr);

    // Assertion
    EXPECT_TRUE(arccosine->getType() == ExpressionType::Arccosine_);

    // Clean up
    delete(arccosine);
}


// Arccosine::toString()
TEST(Arccosine, to_string_simple) {
    // Setup
    Integer* zero = new Integer(0);
    Arccosine* arccosine = new Arccosine(zero);

    // Assertion
    EXPECT_TRUE(arccosine->toString() == "acos(0)");

    // Clean up
    delete(arccosine);
}