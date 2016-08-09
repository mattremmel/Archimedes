//
// ErrorFunction_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/2/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "ErrorFunction.h"
#include "Integer.h"

using namespace Archimedes;


// ErrorFunction::evaluate()
TEST(ErrorFunction, evaluate_simple) {
    // Setup
    Integer* one = new Integer(1);
    ErrorFunction* error_function = new ErrorFunction(one);

    // Assertion
    EXPECT_NEAR(error_function->evaluate(), 0.8427, 0.0001);

    // Clean up
    delete(error_function);
}

TEST(ErrorFunction, evaluate_negative) {
    // Setup
    Integer* ntwo = new Integer(-2);
    ErrorFunction* error_function = new ErrorFunction(ntwo);

    // Assertion
    EXPECT_NEAR(error_function->evaluate(), -0.9953, 0.0001);

    // Clean up
    delete(error_function);
}

TEST(ErrorFunction, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    ErrorFunction* error_function = new ErrorFunction(zero);

    // Assertion
    EXPECT_TRUE(error_function->evaluate() == 0);

    // Clean up
    delete(error_function);
}


// ErrorFunction::getType()
TEST(ErrorFunction, get_type) {
    // Setup
    ErrorFunction* error_function = new ErrorFunction(nullptr);

    // Assertion
    EXPECT_TRUE(error_function->getType() == ExpressionType::ErrorFunction_);

    // Clean up
    delete(error_function);
}


// ErrorFunction::toString()
TEST(ErrorFunction, to_string_simple) {
    // Setup
    Integer *zero = new Integer(0);
    ErrorFunction *error_function = new ErrorFunction(zero);

    // Assertion
    EXPECT_TRUE(error_function->toString() == "erf(0)");

    // Clean up
    delete (error_function);
}