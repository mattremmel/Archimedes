//
// GaussianFunction_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/2/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "GaussianFunction.h"
#include "Integer.h"

using namespace Archimedes;


// GaussianFunction::evaluate()
TEST(GaussianFunction, evaluate_simple) {
    // Setup
    Integer* one = new Integer(1);
    GaussianFunction* gaussian_function = new GaussianFunction(one);

    // Assertion
    EXPECT_NEAR(gaussian_function->evaluate(), 0.3678, 0.0001);

    // Clean up
    delete(gaussian_function);
}

TEST(GaussianFunction, evaluate_negative) {
    // Setup
    Integer* ntwo = new Integer(-2);
    GaussianFunction* gaussian_function = new GaussianFunction(ntwo);

    // Assertion
    EXPECT_NEAR(gaussian_function->evaluate(), 0.0183, 0.0001);

    // Clean up
    delete(gaussian_function);
}

TEST(GaussianFunction, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    GaussianFunction* gaussian_function = new GaussianFunction(zero);

    // Assertion
    EXPECT_TRUE(gaussian_function->evaluate() == 1);

    // Clean up
    delete(gaussian_function);
}


// GaussianFunction::getType()
TEST(GaussianFunction, get_type) {
    // Setup
    GaussianFunction* gaussian_function = new GaussianFunction(nullptr);

    // Assertion
    EXPECT_TRUE(gaussian_function->getType() == ExpressionType::GaussianFunction_);

    // Clean up
    delete(gaussian_function);
}


// GaussianFunction::toString()
TEST(GaussianFunction, to_string_simple) {
    // Setup
    Integer* zero = new Integer(0);
    GaussianFunction* gaussian_function = new GaussianFunction(zero);

    // Assertion
    EXPECT_TRUE(gaussian_function->toString() == "gauss(0)");

    // Clean up
    delete(gaussian_function);
}