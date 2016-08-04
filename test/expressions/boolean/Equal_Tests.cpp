//
// Equal_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/1/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "Equal.h"
#include "Integer.h"

using namespace Archimedes;


// Equal::evaluate()
TEST(Equal, evaluate_true) {
    // Setup
    Integer* five1 = new Integer(5);
    Integer* five2 = new Integer(5);
    Equal* equal = new Equal(five1, five2);

    // Assertion
    EXPECT_TRUE(equal->evaluate() == 1);

    // Clean up
    delete(equal);
}

TEST(Equal, evaluate_false) {
    // Setup
    Integer* five = new Integer(5);
    Integer* ten = new Integer(10);
    Equal* equal = new Equal(five, ten);

    // Assertion
    EXPECT_TRUE(equal->evaluate() == 0);

    // Clean up
    delete(equal);
}


// Equal::getType()
TEST(Equal, get_type) {
    // Setup
    Equal* equal = new Equal(nullptr, nullptr);

    // Assertion
    EXPECT_TRUE(equal->getType() == ExpressionType::Equal_);

    // Clean up
    delete(equal);
}


// Equal::toString()
TEST(Equal, to_string_simple) {
    // Setup
    Integer* five = new Integer(5);
    Integer* ten = new Integer(10);
    Equal* equal = new Equal(five, ten);

    // Assertion
    EXPECT_TRUE(equal->toString() == "(5 == 10)");

    // Clean up
    delete(equal);
}