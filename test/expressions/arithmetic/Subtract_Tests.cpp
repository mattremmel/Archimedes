//
// Subtract_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/1/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "Subtract.h"
#include "Integer.h"

using namespace Archimedes;


// Subtract::evaluate()
TEST(Subtract, evaluate_simple) {
    // Setup
    Integer* five = new Integer(5);
    Integer* ten = new Integer(10);
    Subtract* subtract = new Subtract(ten, five);

    // Assertion
    EXPECT_TRUE(subtract->evaluate() == 5);

    // Clean up
    delete(subtract);
}

TEST(Subtract, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* ten = new Integer(10);
    Subtract* subtract = new Subtract(ten, zero);

    // Assertion
    EXPECT_TRUE(subtract->evaluate() == 10);

    // Clean up
    delete(subtract);
}


// Subtract::getType()
TEST(Subtract, get_type) {
    // Setup
    Subtract* subtract = new Subtract(nullptr, nullptr);

    // Assertion
    EXPECT_TRUE(subtract->getType() == ExpressionType::Subtract_);

    // Clean up
    delete(subtract);
}


// Subtract::toString()
TEST(Subtract, to_string_simple) {
    // Setup
    Integer* five = new Integer(5);
    Integer* ten = new Integer(10);
    Subtract* subtract = new Subtract(ten, five);

    // Assertion
    EXPECT_TRUE(subtract->toString() == "(10 - 5)");

    // Clean up
    delete(subtract);
}