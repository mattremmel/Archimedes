//
// LogicalXor_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/1/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "LogicalXor.h"
#include "Integer.h"

using namespace Archimedes;


// LogicalXor::evaluate()
TEST(LogicalXor, evaluate_true_first) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* one = new Integer(1);
    LogicalXor* logical_xor = new LogicalXor(zero, one);

    // Assertion
    EXPECT_TRUE(logical_xor->evaluate() == 1);

    // Clean up
    delete(logical_xor);
}

TEST(LogicalXor, evaluate_true_second) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* one = new Integer(1);
    LogicalXor* logical_xor = new LogicalXor(one, zero);

    // Assertion
    EXPECT_TRUE(logical_xor->evaluate() == 1);

    // Clean up
    delete(logical_xor);
}

TEST(LogicalXor, evaluate_false_ones) {
    // Setup
    Integer* one1 = new Integer(1);
    Integer* one2 = new Integer(1);
    LogicalXor* logical_xor = new LogicalXor(one1, one2);

    // Assertion
    EXPECT_TRUE(logical_xor->evaluate() == 0);

    // Clean up
    delete(logical_xor);
}

TEST(LogicalXor, evaluate_false_zeros) {
    // Setup
    Integer* zero1 = new Integer(0);
    Integer* zero2 = new Integer(0);
    LogicalXor* logical_xor = new LogicalXor(zero1, zero2);

    // Assertion
    EXPECT_TRUE(logical_xor->evaluate() == 0);

    // Clean up
    delete(logical_xor);
}


// LogicalXor::getType()
TEST(LogicalXor, get_type) {
    // Setup
    LogicalXor* logical_xor = new LogicalXor(nullptr, nullptr);

    // Assertion
    EXPECT_TRUE(logical_xor->getType() == ExpressionType::LogicalXor_);

    // Clean up
    delete(logical_xor);
}


// LogicalXor::toString()
TEST(LogicalXor, to_string_simple) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* one = new Integer(1);
    LogicalXor* logical_xor = new LogicalXor(zero, one);

    // Assertion
    EXPECT_TRUE(logical_xor->toString() == "(0 ⊕ 1)");

    // Clean up
    delete(logical_xor);
}