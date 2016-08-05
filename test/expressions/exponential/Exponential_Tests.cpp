//
// Exponential_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/1/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "Exponential.h"
#include "Integer.h"

using namespace Archimedes;


// Exponential::evaluate()
TEST(Exponential, evaluate_simple) {
    // Setup
    Integer* one = new Integer(1);
    Exponential* exponential = new Exponential(one);

    // Assertion
    EXPECT_NEAR(exponential->evaluate(), 2.7182, 0.0001);

    // Clean up
    delete(exponential);
}

TEST(Exponential, evaluate_negative) {
    // Setup
    Integer* ntwo = new Integer(-2);
    Exponential* exponential = new Exponential(ntwo);

    // Assertion
    EXPECT_NEAR(exponential->evaluate(), 0.1353, 0.0001);

    // Clean up
    delete(exponential);
}

TEST(Exponential, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    Exponential* exponential = new Exponential(zero);

    // Assertion
    EXPECT_TRUE(exponential->evaluate() == 1);

    // Clean up
    delete(exponential);
}


// Exponential::getType()
TEST(Exponential, get_type) {
    // Setup
    Exponential* exponential = new Exponential(nullptr);

    // Assertion
    EXPECT_TRUE(exponential->getType() == ExpressionType::Exponential_);

    // Clean up
    delete(exponential);
}


// Exponential::toString()
TEST(Exponential, to_string_simple) {
    // Setup
    Integer* zero = new Integer(0);
    Exponential* exponential = new Exponential(zero);

    // Assertion
    EXPECT_TRUE(exponential->toString() == "exp(0)");

    // Clean up
    delete(exponential);
}