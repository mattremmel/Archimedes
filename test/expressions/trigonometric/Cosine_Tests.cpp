//
// Cosine_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/2/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "Cosine.h"
#include "Integer.h"

using namespace Archimedes;


// Cosine::evaluate()
TEST(Cosine, evaluate_simple) {
    // Setup
    Integer* one = new Integer(1);
    Cosine* cosine = new Cosine(one);

    // Assertion
    EXPECT_NEAR(cosine->evaluate(), 0.5403, 0.0001);

    // Clean up
    delete(cosine);
}

TEST(Cosine, evaluate_negative) {
    // Setup
    Integer* none = new Integer(-1);
    Cosine* cosine = new Cosine(none);

    // Assertion
    EXPECT_NEAR(cosine->evaluate(), 0.5403, 0.0001);

    // Clean up
    delete(cosine);
}

TEST(Cosine, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    Cosine* cosine = new Cosine(zero);

    // Assertion
    EXPECT_TRUE(cosine->evaluate() == 1);

    // Clean up
    delete(cosine);
}


// Cosine::getType()
TEST(Cosine, get_type) {
    // Setup
    Cosine* cosine = new Cosine(nullptr);

    // Assertion
    EXPECT_TRUE(cosine->getType() == ExpressionType::Cosine_);

    // Clean up
    delete(cosine);
}


// Cosine::toString()
TEST(Cosine, to_string_simple) {
    // Setup
    Integer* zero = new Integer(0);
    Cosine* cosine = new Cosine(zero);

    // Assertion
    EXPECT_TRUE(cosine->toString() == "cos(0)");

    // Clean up
    delete(cosine);
}