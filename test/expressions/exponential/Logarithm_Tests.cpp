//
// Logarithm_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/1/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "Logarithm.h"
#include "Integer.h"
#include <math.h>

using namespace Archimedes;


// Logarithm::evaluate()
TEST(Logarithm, evaluate_simple) {
    // Setup
    Integer* two = new Integer(2);
    Logarithm* logarithm = new Logarithm(two);

    // Assertion
    EXPECT_NEAR(logarithm->evaluate(), 0.6931, 0.0001);

    // Clean up
    delete(logarithm);
}

TEST(Logarithm, evaluate_negative) {
    // Setup
    Integer* ntwo = new Integer(-2);
    Logarithm* logarithm = new Logarithm(ntwo);

    // Assertion
    EXPECT_TRUE(isnan(logarithm->evaluate()));

    // Clean up
    delete(logarithm);
}

TEST(Logarithm, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    Logarithm* logarithm = new Logarithm(zero);

    // Assertion
    EXPECT_TRUE(isnan(logarithm->evaluate()));

    // Clean up
    delete(logarithm);
}


// Logarithm::getType()
TEST(Logarithm, get_type) {
    // Setup
    Logarithm* logarithm = new Logarithm(nullptr);

    // Assertion
    EXPECT_TRUE(logarithm->getType() == ExpressionType::Logarithm_);

    // Clean up
    delete(logarithm);
}


// Logarithm::toString()
TEST(Logarithm, to_string_simple) {
    // Setup
    Integer* zero = new Integer(0);
    Logarithm* logarithm = new Logarithm(zero);

    // Assertion
    EXPECT_TRUE(logarithm->toString() == "log(0)");

    // Clean up
    delete(logarithm);
}