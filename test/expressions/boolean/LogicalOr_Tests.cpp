//
// LogicalOr_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/1/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "LogicalOr.h"
#include "Integer.h"

using namespace Archimedes;


// LogicalOr::evaluate()
TEST(LogicalOr, evaluate_true_first) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* one = new Integer(1);
    LogicalOr* logical_or = new LogicalOr(zero, one);

    // Assertion
    EXPECT_TRUE(logical_or->evaluate() == 1);

    // Clean up
    delete(logical_or);
}

TEST(LogicalOr, evaluate_true_second) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* one = new Integer(1);
    LogicalOr* logical_or = new LogicalOr(one, zero);

    // Assertion
    EXPECT_TRUE(logical_or->evaluate() == 1);

    // Clean up
    delete(logical_or);
}

TEST(LogicalOr, evaluate_false_ones) {
    // Setup
    Integer* one1 = new Integer(1);
    Integer* one2 = new Integer(1);
    LogicalOr* logical_or = new LogicalOr(one1, one2);

    // Assertion
    EXPECT_TRUE(logical_or->evaluate() == 1);

    // Clean up
    delete(logical_or);
}

TEST(LogicalOr, evaluate_false_zeros) {
    // Setup
    Integer* zero1 = new Integer(0);
    Integer* zero2 = new Integer(0);
    LogicalOr* logical_or = new LogicalOr(zero1, zero2);

    // Assertion
    EXPECT_TRUE(logical_or->evaluate() == 0);

    // Clean up
    delete(logical_or);
}


// LogicalOr::getType()
TEST(LogicalOr, get_type) {
    // Setup
    LogicalOr* logical_or = new LogicalOr(nullptr, nullptr);

    // Assertion
    EXPECT_TRUE(logical_or->getType() == ExpressionType::LogicalOr_);

    // Clean up
    delete(logical_or);
}


// LogicalOr::toString()
TEST(LogicalOr, to_string_simple) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* one = new Integer(1);
    LogicalOr* logical_or = new LogicalOr(zero, one);

    // Assertion
    EXPECT_TRUE(logical_or->toString() == "(0 || 1)");

    // Clean up
    delete(logical_or);
}