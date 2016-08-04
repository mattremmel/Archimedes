//
// LogicalNot_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/1/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "LogicalNot.h"
#include "Integer.h"

using namespace Archimedes;


// LogicalNot::evaluate()
TEST(LogicalNot, evaluate_one) {
    // Setup
    Integer* one = new Integer(1);
    LogicalNot* logical_not = new LogicalNot(one);

    // Assertion
    EXPECT_TRUE(logical_not->evaluate() == 0);

    // Clean up
    delete(logical_not);
}

TEST(LogicalNot, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    LogicalNot* logical_not = new LogicalNot(zero);

    // Assertion
    EXPECT_TRUE(logical_not->evaluate() == 1);

    // Clean up
    delete(logical_not);
}

TEST(LogicalNot, evaluate_positive) {
    // Setup
    Integer* five = new Integer(5);
    LogicalNot* logical_not = new LogicalNot(five);

    // Assertion
    EXPECT_TRUE(logical_not->evaluate() == 0);

    // Clean up
    delete(logical_not);
}

TEST(LogicalNot, evaluate_negative) {
    // Setup
    Integer* nfive = new Integer(-5);
    LogicalNot* logical_not = new LogicalNot(nfive);

    // Assertion
    EXPECT_TRUE(logical_not->evaluate() == 1);

    // Clean up
    delete(logical_not);
}


// LogicalNot::getType()
TEST(LogicalNot, get_type) {
    // Setup
    LogicalNot* logical_not = new LogicalNot(nullptr);

    // Assertion
    EXPECT_TRUE(logical_not->getType() == ExpressionType::LogicalNot_);

    // Clean up
    delete(logical_not);
}


// LogicalNot::toString()
TEST(LogicalNot, to_string_simple) {
    // Setup
    Integer* zero = new Integer(0);
    LogicalNot* logical_not = new LogicalNot(zero);

    // Assertion
    EXPECT_TRUE(logical_not->toString() == "!(0)");

    // Clean up
    delete(logical_not);
}