//
// IfThenElse_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/1/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "IfThenElse.h"
#include "Integer.h"

using namespace Archimedes;


// IfThenElse::evaluate()
TEST(IfThenElse, evaluate_simple_true) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* one = new Integer(1);
    Integer* two = new Integer(2);
    IfThenElse* if_then_else = new IfThenElse(one, zero, two);

    // Assertion
    EXPECT_TRUE(if_then_else->evaluate() == 0);

    // Clean up
    delete(if_then_else);
}

TEST(IfThenElse, evaluate_simple_false) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* one = new Integer(1);
    Integer* two = new Integer(2);
    IfThenElse* if_then_else = new IfThenElse(zero, one, two);

    // Assertion
    EXPECT_TRUE(if_then_else->evaluate() == 2);

    // Clean up
    delete(if_then_else);
}

TEST(IfThenElse, evaluate_simple_negative) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* one = new Integer(1);
    Integer* ntwo = new Integer(-2);
    IfThenElse* if_then_else = new IfThenElse(ntwo, zero, one);

    // Assertion
    EXPECT_TRUE(if_then_else->evaluate() == 1);

    // Clean up
    delete(if_then_else);
}


// IfThenElse::getType()
TEST(IfThenElse, get_type) {
    // Setup
    IfThenElse* if_then_else = new IfThenElse(nullptr, nullptr, nullptr);

    // Assertion
    EXPECT_TRUE(if_then_else->getType() == ExpressionType::IfThenElse_);

    // Clean up
    delete(if_then_else);
}


// IfThenElse::toString()
TEST(IfThenElse, to_string_simple) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* one = new Integer(1);
    Integer* two = new Integer(2);
    IfThenElse* if_then_else = new IfThenElse(zero, one, two);

    // Assertion
    EXPECT_TRUE(if_then_else->toString() == "if(0, 1, 2)");

    // Clean up
    delete(if_then_else);
}