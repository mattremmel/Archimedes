//
// Arcsine_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/2/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "Arcsine.h"
#include "Integer.h"

using namespace Archimedes;


// Arcsine::evaluate()
TEST(Arcsine, evaluate_simple) {
    // Setup
    Integer* one = new Integer(1);
    Arcsine* arcsine = new Arcsine(one);

    // Assertion
    EXPECT_NEAR(arcsine->evaluate(), 1.5707, 0.0001);

    // Clean up
    delete(arcsine);
}

TEST(Arcsine, evaluate_negative) {
    // Setup
    Integer* none = new Integer(-1);
    Arcsine* arcsine = new Arcsine(none);

    // Assertion
    EXPECT_NEAR(arcsine->evaluate(), -1.5707, 0.0001);

    // Clean up
    delete(arcsine);
}

TEST(Arcsine, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    Arcsine* arcsine = new Arcsine(zero);

    // Assertion
    EXPECT_TRUE(arcsine->evaluate() == 0);

    // Clean up
    delete(arcsine);
}


// Arcsine::getType()
TEST(Arcsine, get_type) {
    // Setup
    Arcsine* arcsine = new Arcsine(nullptr);

    // Assertion
    EXPECT_TRUE(arcsine->getType() == ExpressionType::Arcsine_);

    // Clean up
    delete(arcsine);
}


// Arcsine::toString()
TEST(Arcsine, to_string_simple) {
    // Setup
    Integer* zero = new Integer(0);
    Arcsine* arcsine = new Arcsine(zero);

    // Assertion
    EXPECT_TRUE(arcsine->toString() == "asin(0)");

    // Clean up
    delete(arcsine);
}