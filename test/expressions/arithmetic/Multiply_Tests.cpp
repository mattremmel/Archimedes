//
// Multiply_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/1/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "Multiply.h"
#include "Integer.h"

using namespace Archimedes;


// Multiply::evaluate()
TEST(Multiply, evaluate_simple) {
    // Setup
    Integer* five = new Integer(5);
    Integer* ten = new Integer(10);
    Multiply* multiply = new Multiply(five, ten);

    // Assertion
    EXPECT_TRUE(multiply->evaluate() == 50);

    // Clean up
    delete(multiply);
}

TEST(Multiply, evaluate_negative) {
    // Setup
    Integer* nfive = new Integer(-5);
    Integer* ten = new Integer(10);
    Multiply* multiply = new Multiply(nfive, ten);

    // Assertion
    EXPECT_TRUE(multiply->evaluate() == -50);

    // Clean up
    delete(multiply);
}

TEST(Multiply, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* ten = new Integer(10);
    Multiply* multiply = new Multiply(zero, ten);

    // Assertion
    EXPECT_TRUE(multiply->evaluate() == 0);

    // Clean up
    delete(multiply);
}


// Multiply::getType()
TEST(Multiply, get_type) {
    // Setup
    Multiply* multiply = new Multiply(nullptr, nullptr);

    // Assertion
    EXPECT_TRUE(multiply->getType() == ExpressionType::Multiply_);

    // Clean up
    delete(multiply);
}


// Multiply::toString()
TEST(Multiply, to_string_simple) {
    // Setup
    Integer* five = new Integer(5);
    Integer* ten = new Integer(10);
    Multiply* multiply = new Multiply(five, ten);

    // Assertion
    EXPECT_TRUE(multiply->toString() == "(5 * 10)");

    // Clean up
    delete(multiply);
}