//
// HyperbolicTangent_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/2/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "HyperbolicTangent.h"
#include "Integer.h"

using namespace Archimedes;


// HyperbolicTangent::evaluate()
TEST(HyperbolicTangent, evaluate_simple) {
    // Setup
    Integer* one = new Integer(1);
    HyperbolicTangent* hyperbolic_tangent = new HyperbolicTangent(one);

    // Assertion
    EXPECT_NEAR(hyperbolic_tangent->evaluate(), 0.7615, 0.0001);

    // Clean up
    delete(hyperbolic_tangent);
}

TEST(HyperbolicTangent, evaluate_negative) {
    // Setup
    Integer* ntwo = new Integer(-2);
    HyperbolicTangent* hyperbolic_tangent = new HyperbolicTangent(ntwo);

    // Assertion
    EXPECT_NEAR(hyperbolic_tangent->evaluate(), -0.9640, 0.0001);

    // Clean up
    delete(hyperbolic_tangent);
}

TEST(HyperbolicTangent, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    HyperbolicTangent* hyperbolic_tangent = new HyperbolicTangent(zero);

    // Assertion
    EXPECT_TRUE(hyperbolic_tangent->evaluate() == 0);

    // Clean up
    delete(hyperbolic_tangent);
}


// HyperbolicTangent::getType()
TEST(HyperbolicTangent, get_type) {
    // Setup
    HyperbolicTangent* hyperbolic_tangent = new HyperbolicTangent(nullptr);

    // Assertion
    EXPECT_TRUE(hyperbolic_tangent->getType() == ExpressionType::HyperbolicTangent_);

    // Clean up
    delete(hyperbolic_tangent);
}


// HyperbolicTangent::toString()
TEST(HyperbolicTangent, to_string_simple) {
    // Setup
    Integer* zero = new Integer(0);
    HyperbolicTangent* hyperbolic_tangent = new HyperbolicTangent(zero);

    // Assertion
    EXPECT_TRUE(hyperbolic_tangent->toString() == "tanh(0)");

    // Clean up
    delete(hyperbolic_tangent);
}