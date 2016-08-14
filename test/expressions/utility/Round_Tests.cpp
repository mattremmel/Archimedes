//
// Round_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/2/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "Round.h"
#include "Constant.h"
#include "Integer.h"

using namespace Archimedes;


// Round::evaluate()
TEST(Round, evaluate_simple) {
    // Setup
    Constant* x = new Constant(0.9);
    Round* round = new Round(x);

    // Assertion
    EXPECT_TRUE(round->evaluate() == 1);

    // Clean up
    delete(round);
}

TEST(Round, evaluate_negative) {
    // Setup
    Constant* x = new Constant(-1.2);
    Round* round = new Round(x);

    // Assertion
    EXPECT_TRUE(round->evaluate() == -1);

    // Clean up
    delete(round);
}

TEST(Round, evaluate_integer) {
    // Setup
    Integer* one = new Integer(1);
    Round* round = new Round(one);

    // Assertion
    EXPECT_TRUE(round->evaluate() == 1);

    // Clean up
    delete(round);
}

TEST(Round, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    Round* round = new Round(zero);

    // Assertion
    EXPECT_TRUE(round->evaluate() == 0);

    // Clean up
    delete(round);
}


// Round::getType()
TEST(Round, get_type) {
    // Setup
    Round* round = new Round(nullptr);

    // Assertion
    EXPECT_TRUE(round->getType() == ExpressionType::Round_);

    // Clean up
    delete(round);
}


// Round::toString()
TEST(Round, to_string_simple) {
    // Setup
    Constant* zero = new Constant(0);
    Round* round = new Round(zero);

    // Assertion
    EXPECT_TRUE(round->toString() == "round(0)");

    // Clean up
    delete(round);
}