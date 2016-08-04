//
// LogicalAnd_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/1/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "LogicalAnd.h"
#include "Integer.h"

using namespace Archimedes;

// LogicalAnd::getType()
TEST(LogicalAnd, get_type) {
    // Setup
    LogicalAnd* logical_and = new LogicalAnd(nullptr, nullptr);

    // Assertion
    EXPECT_TRUE(logical_and->getType() == ExpressionType::LogicalAnd_);

    // Clean up
    delete(logical_and);
}


// LogicalAnd::evaluate()
TEST(LogicalAnd, evaluate_true) {
    // Setup
    Integer* one1 = new Integer(1);
    Integer* one2 = new Integer(1);
    LogicalAnd* logical_and = new LogicalAnd(one1, one2);

    // Assertion
    EXPECT_TRUE(logical_and->evaluate() == 1);

    // Clean up
    delete(logical_and);
}

TEST(LogicalAnd, evaluate_false_opposite) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* one = new Integer(1);
    LogicalAnd* logical_and = new LogicalAnd(zero, one);

    // Assertion
    EXPECT_TRUE(logical_and->evaluate() == 0);

    // Clean up
    delete(logical_and);
}

TEST(LogicalAnd, evaluate_false_same) {
    // Setup
    Integer* zero1 = new Integer(0);
    Integer* zero2 = new Integer(0);
    LogicalAnd* logical_and = new LogicalAnd(zero1, zero2);

    // Assertion
    EXPECT_TRUE(logical_and->evaluate() == 0);

    // Clean up
    delete(logical_and);
}


// LogicalAnd::toString()
TEST(LogicalAnd, to_string_simple) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* one = new Integer(1);
    LogicalAnd* logical_and = new LogicalAnd(zero, one);

    // Assertion
    EXPECT_TRUE(logical_and->toString() == "(0 && 1)");

    // Clean up
    delete(logical_and);
}