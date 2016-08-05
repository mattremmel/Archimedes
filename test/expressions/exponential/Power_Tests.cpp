//
// Power_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/1/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "Power.h"
#include "Integer.h"
#include <math.h>

using namespace Archimedes;


// Power::evaluate()
TEST(Power, evaluate_simple) {
    // Setup
    Integer* two = new Integer(2);
    Integer* eight = new Integer(8);
    Power* power = new Power(two, eight);

    // Assertion
    EXPECT_TRUE(power->evaluate() == 256);

    // Clean up
    delete(power);
}

TEST(Power, evaluate_negative) {
    // Setup
    Integer* ntwo = new Integer(-2);
    Integer* seven = new Integer(7);
    Power* power = new Power(ntwo, seven);

    // Assertion
    EXPECT_TRUE(power->evaluate() == -128);

    // Clean up
    delete(power);
}

TEST(Power, evaluate_zero_base) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* two = new Integer(2);
    Power* power = new Power(zero, two);

    // Assertion
    EXPECT_TRUE(power->evaluate() == 0);

    // Clean up
    delete(power);
}

TEST(Power, evaluate_zero_power) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* two = new Integer(2);
    Power* power = new Power(two, zero);

    // Assertion
    EXPECT_TRUE(power->evaluate() == 1);

    // Clean up
    delete(power);
}

TEST(Power, evaluate_zero_both) {
    // Setup
    Integer* zero1 = new Integer(0);
    Integer* zero2 = new Integer(0);
    Power* power = new Power(zero1, zero2);

    // Assertion
    EXPECT_TRUE(isnan(power->evaluate()));

    // Clean up
    delete(power);
}


// Power::getType()
TEST(Power, get_type) {
    // Setup
    Power* power = new Power(nullptr, nullptr);

    // Assertion
    EXPECT_TRUE(power->getType() == ExpressionType::Power_);

    // Clean up
    delete(power);
}


// Power::toString()
TEST(Power, to_string_simple) {
    // Setup
    Integer* two = new Integer(2);
    Integer* eight = new Integer(8);
    Power* power = new Power(two, eight);

    // Assertion
    EXPECT_TRUE(power->toString() == "pow(2, 8)");

    // Clean up
    delete(power);
}