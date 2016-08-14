//
// Maximum_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/1/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "Maximum.h"
#include "Integer.h"

using namespace Archimedes;


// Maximum::evaluate()
TEST(Maximum, evaluate_simple) {
    // Setup
    Integer* two = new Integer(2);
    Integer* eight = new Integer(8);
    Maximum* maximum = new Maximum(two, eight);

    // Assertion
    EXPECT_TRUE(maximum->evaluate() == 8);

    // Clean up
    delete(maximum);
}

TEST(Maximum, evaluate_negative) {
    // Setup
    Integer* ntwo = new Integer(-2);
    Integer* seven = new Integer(7);
    Maximum* maximum = new Maximum(seven, ntwo);

    // Assertion
    EXPECT_TRUE(maximum->evaluate() == 7);

    // Clean up
    delete(maximum);
}

TEST(Maximum, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* two = new Integer(2);
    Maximum* maximum = new Maximum(zero, two);

    // Assertion
    EXPECT_TRUE(maximum->evaluate() == 2);

    // Clean up
    delete(maximum);
}

TEST(Maximum, evaluate_zero_both) {
    // Setup
    Integer* zero1 = new Integer(0);
    Integer* zero2 = new Integer(0);
    Maximum* maximum = new Maximum(zero1, zero2);

    // Assertion
    EXPECT_TRUE(maximum->evaluate() == 0);

    // Clean up
    delete(maximum);
}


// Maximum::getType()
TEST(Maximum, get_type) {
    // Setup
    Maximum* maximum = new Maximum(nullptr, nullptr);

    // Assertion
    EXPECT_TRUE(maximum->getType() == ExpressionType::Maximum_);

    // Clean up
    delete(maximum);
}


//** Maximum::toString() **//
TEST(Maximum, to_string_simple) {
    // Setup
    Integer* two = new Integer(2);
    Integer* eight = new Integer(8);
    Maximum* maximum = new Maximum(two, eight);

    // Assertion
    EXPECT_TRUE(maximum->toString() == "max(2, 8)");

    // Clean up
    delete(maximum);
}