//
// SignFunction_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/2/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "SignFunction.h"
#include "Integer.h"

using namespace Archimedes;


// SignFunction::evaluate()
TEST(SignFunction, evaluate_positive) {
    // Setup
    Integer* one = new Integer(1);
    SignFunction* sign_function = new SignFunction(one);

    // Assertion
    EXPECT_TRUE(sign_function->evaluate() == 1);

    // Clean up
    delete(sign_function);
}

TEST(SignFunction, evaluate_negative) {
    // Setup
    Integer* ntwo = new Integer(-2);
    SignFunction* sign_function = new SignFunction(ntwo);

    // Assertion
    EXPECT_TRUE(sign_function->evaluate() == -1);

    // Clean up
    delete(sign_function);
}

TEST(SignFunction, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    SignFunction* sign_function = new SignFunction(zero);

    // Assertion
    EXPECT_TRUE(sign_function->evaluate() == 0);

    // Clean up
    delete(sign_function);
}


// SignFunction::getType()
TEST(SignFunction, get_type) {
    // Setup
    SignFunction* sign_function = new SignFunction(nullptr);

    // Assertion
    EXPECT_TRUE(sign_function->getType() == ExpressionType::SignFunction_);

    // Clean up
    delete(sign_function);
}


// SignFunction::toString()
TEST(SignFunction, to_string_simple) {
    // Setup
    Integer* zero = new Integer(0);
    SignFunction* sign_function = new SignFunction(zero);

    // Assertion
    EXPECT_TRUE(sign_function->toString() == "sign(0)");

    // Clean up
    delete(sign_function);
}