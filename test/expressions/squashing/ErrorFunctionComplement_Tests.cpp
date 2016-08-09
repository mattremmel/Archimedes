//
// ErrorFunctionComplement_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/2/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "ErrorFunctionComplement.h"
#include "Integer.h"

using namespace Archimedes;


// ErrorFunctionComplement::evaluate()
TEST(ErrorFunctionComplement, evaluate_simple) {
    // Setup
    Integer* one = new Integer(1);
    ErrorFunctionComplement* error_function_complement = new ErrorFunctionComplement(one);

    // Assertion
    EXPECT_NEAR(error_function_complement->evaluate(), 0.1572, 0.0001);

    // Clean up
    delete(error_function_complement);
}

TEST(ErrorFunctionComplement, evaluate_negative) {
    // Setup
    Integer* ntwo = new Integer(-2);
    ErrorFunctionComplement* error_function_complement = new ErrorFunctionComplement(ntwo);

    // Assertion
    EXPECT_NEAR(error_function_complement->evaluate(), 1.9953, 0.0001);

    // Clean up
    delete(error_function_complement);
}

TEST(ErrorFunctionComplement, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    ErrorFunctionComplement* error_function_complement = new ErrorFunctionComplement(zero);

    // Assertion
    EXPECT_TRUE(error_function_complement->evaluate() == 1);

    // Clean up
    delete(error_function_complement);
}


// ErrorFunctionComplement::getType()
TEST(ErrorFunctionComplement, get_type) {
    // Setup
    ErrorFunctionComplement* error_function_complement = new ErrorFunctionComplement(nullptr);

    // Assertion
    EXPECT_TRUE(error_function_complement->getType() == ExpressionType::ErrorFunctionComplement_);

    // Clean up
    delete(error_function_complement);
}


// ErrorFunctionComplement::toString
TEST(ErrorFunctionComplement, to_string_simple) {
    // Setup
    Integer* zero = new Integer(0);
    ErrorFunctionComplement* error_function_complement = new ErrorFunctionComplement(zero);

    // Assertion
    EXPECT_TRUE(error_function_complement->toString() == "erfc(0)");

    // Clean up
    delete(error_function_complement);
}