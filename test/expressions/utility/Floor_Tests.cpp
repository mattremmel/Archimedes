//
// Floor_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/2/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "Floor.h"
#include "Constant.h"
#include "Integer.h"

using namespace Archimedes;


// Floor::evaluate()
TEST(Floor, evaluate_simple) {
    // Setup
    Constant* x = new Constant(0.9);
    Floor* floor = new Floor(x);

    // Assertion
    EXPECT_TRUE(floor->evaluate() == 0);

    // Clean up
    delete(floor);
}

TEST(Floor, evaluate_negative) {
    // Setup
    Constant* x = new Constant(-1.2);
    Floor* floor = new Floor(x);

    // Assertion
    EXPECT_TRUE(floor->evaluate() == -2);

    // Clean up
    delete(floor);
}

TEST(Floor, evaluate_integer) {
    // Setup
    Integer* one = new Integer(1);
    Floor* floor = new Floor(one);

    // Assertion
    EXPECT_TRUE(floor->evaluate() == 1);

    // Clean up
    delete(floor);
}

TEST(Floor, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    Floor* floor = new Floor(zero);

    // Assertion
    EXPECT_TRUE(floor->evaluate() == 0);

    // Clean up
    delete(floor);
}


// Floor::getType()
TEST(Floor, get_type) {
    // Setup
    Floor* floor = new Floor(nullptr);

    // Assertion
    EXPECT_TRUE(floor->getType() == ExpressionType::Floor_);

    // Clean up
    delete(floor);
}


//** Floor::toString() **//
TEST(Floor, to_string_simple) {
    // Setup
    Constant* zero = new Constant(0);
    Floor* floor = new Floor(zero);

    // Assertion
    EXPECT_TRUE(floor->toString() == "floor(0)");

    // Clean up
    delete(floor);
}