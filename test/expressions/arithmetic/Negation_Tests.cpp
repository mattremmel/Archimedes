//
// Negation_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/1/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "Integer.h"
#include "Negation.h"

using namespace Archimedes;


// Negation::evaluate()
TEST(Negation, evaluate_simple) {
    // Setup
    Integer* x = new Integer(5);
    Negation* negation = new Negation(x);

    // Assertion
    EXPECT_TRUE(negation->evaluate() == -5);

    // Clean up
    delete(negation);
}

TEST(Negation, evaluate_negative) {
    // Setup
    Integer* x = new Integer(-5);
    Negation* negation = new Negation(x);

    // Assertion
    EXPECT_TRUE(negation->evaluate() == 5);

    // Clean up
    delete(negation);
}

TEST(Negation, evaluate_zero) {
    // Setup
    Integer* x = new Integer(0);
    Negation* negation = new Negation(x);

    // Assertion
    EXPECT_TRUE(negation->evaluate() == 0);

    // Clean up
    delete(negation);
}


// Negation::getType()
TEST(Negation, get_type) {
    // Setup
    Negation* negation = new Negation(nullptr);

    // Assertion
    EXPECT_TRUE(negation->getType() == ExpressionType::Negation_);

    // Clean up
    delete(negation);
}


// Negation::toString()
TEST(Negation, to_string_simple) {
    // Setup
    Integer* x = new Integer(5);
    Negation* negation = new Negation(x);

    // Assertion
    EXPECT_TRUE(negation->toString() == "-(5)");

    // Clean up
    delete(negation);
}