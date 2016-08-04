//
// LessThan_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/1/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "LessThan.h"
#include "Integer.h"

using namespace Archimedes;


// LessThan::evaluate()
TEST(LessThan, evaluate_true) {
    // Setup
    Integer* five = new Integer(5);
    Integer* ten = new Integer(10);
    LessThan* less_than = new LessThan(five, ten);

    // Assertion
    EXPECT_TRUE(less_than->evaluate() == 1);

    // Clean up
    delete(less_than);
}

TEST(LessThan, evaluate_false) {
    // Setup
    Integer* five = new Integer(5);
    Integer* ten = new Integer(10);
    LessThan* less_than = new LessThan(ten, five);

    // Assertion
    EXPECT_TRUE(less_than->evaluate() == 0);

    // Clean up
    delete(less_than);
}


// LessThan::getType()
TEST(LessThan, get_type) {
    // Setup
    LessThan* less_than = new LessThan(nullptr, nullptr);

    // Assertion
    EXPECT_TRUE(less_than->getType() == ExpressionType::LessThan_);

    // Clean up
    delete(less_than);
}


// LessThan::toString()
TEST(LessThan, to_string_simple) {
    // Setup
    Integer* five = new Integer(5);
    Integer* ten = new Integer(10);
    LessThan* less_than = new LessThan(five, ten);

    // Assertion
    EXPECT_TRUE(less_than->toString() == "(5 < 10)");

    // Clean up
    delete(less_than);
}