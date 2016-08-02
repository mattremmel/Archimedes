//
// Add_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 6/30/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "Add.h"
#include "Integer.h"

using namespace Archimedes;


// Add::evaluate()
TEST(Add, evaluate_simple) {
    // Setup
    Integer* five = new Integer(5);
    Integer* ten = new Integer(10);
    Add* add = new Add(five, ten);

    // Assertion
    EXPECT_TRUE(add->evaluate() == 15);

    // Clean up
    delete(add);
}

TEST(Add, evaluate_negative) {
    // Setup
    Integer* nfive = new Integer(-5);
    Integer* ten = new Integer(10);
    Add* add = new Add(nfive, ten);

    // Assertion
    EXPECT_TRUE(add->evaluate() == 5);

    // Clean up
    delete(add);
}

TEST(Add, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* ten = new Integer(10);
    Add* add = new Add(zero, ten);

    // Assertion
    EXPECT_TRUE(add->evaluate() == 10);

    // Clean up
    delete(add);
}


//** Add::getType() **//
TEST(Add, get_type) {
    // Setup
    Add* add = new Add(nullptr, nullptr);

    // Assertion
    EXPECT_TRUE(add->getType() == ExpressionType::Add_);

    // Clean up
    delete(add);
}


//** Add::print() **//
TEST(Add, print_simple) {
    // Setup
    Integer* five = new Integer(5);
    Integer* ten = new Integer(10);
    Add* add = new Add(five, ten);

    // Assertion
    EXPECT_TRUE(add->toString() == "(5 + 10)");

    // Clean up
    delete(add);
}