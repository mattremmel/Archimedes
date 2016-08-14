//
// AbsoluteValue_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/2/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "AbsoluteValue.h"
#include "Integer.h"

using namespace Archimedes;


// AbsoluteValue::evaluate()
TEST(AbsoluteValue, evaluate_simple) {
    // Setup
    Integer* one = new Integer(1);
    AbsoluteValue* absolute_value = new AbsoluteValue(one);

    // Assertion
    EXPECT_TRUE(absolute_value->evaluate() == 1);

    // Clean up
    delete(absolute_value);
}

TEST(AbsoluteValue, evaluate_negative) {
    // Setup
    Integer* none = new Integer(-1);
    AbsoluteValue* absolute_value = new AbsoluteValue(none);

    // Assertion
    EXPECT_TRUE(absolute_value->evaluate() == 1);

    // Clean up
    delete(absolute_value);
}

TEST(AbsoluteValue, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    AbsoluteValue* absolute_value = new AbsoluteValue(zero);

    // Assertion
    EXPECT_TRUE(absolute_value->evaluate() == 0);

    // Clean up
    delete(absolute_value);
}


// AbsoluteValue::getType()
TEST(AbsoluteValue, get_type) {
    // Setup
    AbsoluteValue* absolute_value = new AbsoluteValue(nullptr);

    // Assertion
    EXPECT_TRUE(absolute_value->getType() == ExpressionType::AbsoluteValue_);

    // Clean up
    delete(absolute_value);
}


// AbsoluteValue::toString()
TEST(AbsoluteValue, to_string_simple) {
    // Setup
    Integer* zero = new Integer(0);
    AbsoluteValue* absolute_value = new AbsoluteValue(zero);

    // Assertion
    EXPECT_TRUE(absolute_value->toString() == "abs(0)");

    // Clean up
    delete(absolute_value);
}