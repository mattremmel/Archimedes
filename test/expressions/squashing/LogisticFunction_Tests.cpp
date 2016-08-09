//
// LogisticFunction_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/2/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "LogisticFunction.h"
#include "Integer.h"

using namespace Archimedes;


// LogisticFunction::evaluate()
TEST(LogisticFunction, evaluate_simple) {
    // Setup
    Integer* one = new Integer(1);
    LogisticFunction* logistic_function = new LogisticFunction(one);

    // Assertion
    EXPECT_NEAR(logistic_function->evaluate(), 0.7310, 0.0001);

    // Clean up
    delete(logistic_function);
}

TEST(LogisticFunction, evaluate_negative) {
    // Setup
    Integer* ntwo = new Integer(-2);
    LogisticFunction* logistic_function = new LogisticFunction(ntwo);

    // Assertion
    EXPECT_NEAR(logistic_function->evaluate(), 0.1192, 0.0001);

    // Clean up
    delete(logistic_function);
}

TEST(LogisticFunction, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    LogisticFunction* logistic_function = new LogisticFunction(zero);

    // Assertion
    EXPECT_TRUE(logistic_function->evaluate() == 0.5);

    // Clean up
    delete(logistic_function);
}


// LogisticFunction::getType()
TEST(LogisticFunction, get_type) {
    // Setup
    LogisticFunction* logistic_function = new LogisticFunction(nullptr);

    // Assertion
    EXPECT_TRUE(logistic_function->getType() == ExpressionType::LogisticFunction_);

    // Clean up
    delete(logistic_function);
}


// LogisticFunction::toString()
TEST(LogisticFunction, to_string_simple) {
    // Setup
    Integer* zero = new Integer(0);
    LogisticFunction* logistic_function = new LogisticFunction(zero);

    // Assertion
    EXPECT_TRUE(logistic_function->toString() == "logistic(0)");

    // Clean up
    delete(logistic_function);
}