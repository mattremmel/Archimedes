//
// Ceiling_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/2/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "Ceiling.h"
#include "Constant.h"
#include "Integer.h"

using namespace Archimedes;


// Ceiling::evaluate()
TEST(Ceiling, evaluate_simple) {
    // Setup
    Constant* x = new Constant(0.9);
    Ceiling* ceiling = new Ceiling(x);

    // Assertion
    EXPECT_TRUE(ceiling->evaluate() == 1);

    // Clean up
    delete(ceiling);
}

TEST(Ceiling, evaluate_negative) {
    // Setup
    Constant* x = new Constant(-1.2);
    Ceiling* ceiling = new Ceiling(x);

    // Assertion
    EXPECT_TRUE(ceiling->evaluate() == -1);

    // Clean up
    delete(ceiling);
}

TEST(Ceiling, evaluate_integer) {
    // Setup
    Integer* one = new Integer(1);
    Ceiling* ceiling = new Ceiling(one);

    // Assertion
    EXPECT_TRUE(ceiling->evaluate() == 1);

    // Clean up
    delete(ceiling);
}

TEST(Ceiling, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    Ceiling* ceiling = new Ceiling(zero);

    // Assertion
    EXPECT_TRUE(ceiling->evaluate() == 0);

    // Clean up
    delete(ceiling);
}


// Ceiling::getType()
TEST(Ceiling, get_type) {
    // Setup
    Ceiling* ceiling = new Ceiling(nullptr);

    // Assertion
    EXPECT_TRUE(ceiling->getType() == ExpressionType::Ceiling_);

    // Clean up
    delete(ceiling);
}


// Ceiling::toString()
TEST(Ceiling, to_string_simple) {
    // Setup
    Constant* zero = new Constant(0);
    Ceiling* ceiling = new Ceiling(zero);

    // Assertion
    EXPECT_TRUE(ceiling->toString() == "ceil(0)");

    // Clean up
    delete(ceiling);
}