//
// Divide_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/1/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "Divide.h"
#include "Integer.h"
#include <math.h>

using namespace Archimedes;


// Divide::evaluate()
TEST(Divide, evaluate_simple) {
    // Setup
    Integer* five = new Integer(5);
    Integer* ten = new Integer(10);
    Divide* divide = new Divide(ten, five);

    // Assertion
    EXPECT_TRUE(divide->evaluate() == 2);

    // Clean up
    delete(divide);
}

TEST(Divide, evaluate_negative) {
    // Setup
    Integer* nfive = new Integer(-5);
    Integer* ten = new Integer(10);
    Divide* divide = new Divide(ten, nfive);

    // Assertion
    EXPECT_TRUE(divide->evaluate() == -2);

    // Clean up
    delete(divide);
}

TEST(Divide, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* ten = new Integer(10);
    Divide* divide = new Divide(ten, zero);

    // Assertion
    EXPECT_TRUE(isnan(divide->evaluate()));

    // Clean up
    delete(divide);
}


// Divide::getType()
TEST(Divide, get_type) {
    // Setup
    Divide* divide = new Divide(nullptr, nullptr);

    // Assertion
    EXPECT_TRUE(divide->getType() == ExpressionType::Divide_);

    // Clean up
    delete(divide);
}


// Divide::toString()
TEST(Divide, to_string_simple) {
    // Setup
    Integer* five = new Integer(5);
    Integer* ten = new Integer(10);
    Divide* divide = new Divide(ten, five);

    // Assertion
    EXPECT_TRUE(divide->toString() == "(10 / 5)");

    // Clean up
    delete(divide);
}