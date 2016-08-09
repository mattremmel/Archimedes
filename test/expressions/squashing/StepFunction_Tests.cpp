//
// StepFunction_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/2/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "StepFunction.h"
#include "Integer.h"

using namespace Archimedes;


// StepFunction::evaluate()
TEST(StepFunction, evaluate_positive) {
    // Setup
    Integer* one = new Integer(1);
    StepFunction* step_function = new StepFunction(one);

    // Assertion
    EXPECT_TRUE(step_function->evaluate() == 1);

    // Clean up
    delete(step_function);
}

TEST(StepFunction, evaluate_negative) {
    // Setup
    Integer* ntwo = new Integer(-2);
    StepFunction* step_function = new StepFunction(ntwo);

    // Assertion
    EXPECT_TRUE(step_function->evaluate() == 0);

    // Clean up
    delete(step_function);
}

TEST(StepFunction, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    StepFunction* step_function = new StepFunction(zero);

    // Assertion
    EXPECT_TRUE(step_function->evaluate() == 1);

    // Clean up
    delete(step_function);
}


// StepFunction::getType()
TEST(StepFunction, get_type) {
    // Setup
    StepFunction* step_function = new StepFunction(nullptr);

    // Assertion
    EXPECT_TRUE(step_function->getType() == ExpressionType::StepFunction_);

    // Clean up
    delete(step_function);
}


// StepFunction::toString()
TEST(StepFunction, to_string_simple) {
    // Setup
    Integer* zero = new Integer(0);
    StepFunction* step_function = new StepFunction(zero);

    // Assertion
    EXPECT_TRUE(step_function->toString() == "step(0)");

    // Clean up
    delete(step_function);
}