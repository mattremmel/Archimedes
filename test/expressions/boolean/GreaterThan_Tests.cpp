//
// GreaterThan_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/1/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "GreaterThan.h"
#include "Integer.h"

using namespace Archimedes;


// GreaterThan::evaluate()
TEST(GreaterThan, evaluate_true) {
    // Setup
    Integer* five = new Integer(5);
    Integer* ten = new Integer(10);
    GreaterThan* greater_than = new GreaterThan(ten, five);

    // Assertion
    EXPECT_TRUE(greater_than->evaluate() == 1);

    // Clean up
    delete(greater_than);
}

TEST(GreaterThan, evaluate_false) {
    // Setup
    Integer* five = new Integer(5);
    Integer* ten = new Integer(10);
    GreaterThan* greater_than = new GreaterThan(five, ten);

    // Assertion
    EXPECT_TRUE(greater_than->evaluate() == 0);

    // Clean up
    delete(greater_than);
}


// GreaterThan::getType()
TEST(GreaterThan, get_type) {
    // Setup
    GreaterThan* greater_than = new GreaterThan(nullptr, nullptr);

    // Assertion
    EXPECT_TRUE(greater_than->getType() == ExpressionType::GreaterThan_);

    // Clean up
    delete(greater_than);
}


// GreaterThan::toString()
TEST(GreaterThan, to_string_simple) {
    // Setup
    Integer* five = new Integer(5);
    Integer* ten = new Integer(10);
    GreaterThan* greater_than = new GreaterThan(five, ten);

    // Assertion
    EXPECT_TRUE(greater_than->toString() == "(5 > 10)");

    // Clean up
    delete(greater_than);
}