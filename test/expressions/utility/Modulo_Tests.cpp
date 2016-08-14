//
// Modulo_Tests.cpp
// Archimedes
//
// Created by Matthew Remmel on 7/1/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "gtest.h"
#include "Modulo.h"
#include "Integer.h"
#include "Constant.h"
#include <math.h>

using namespace Archimedes;


// Modulo::evaluate()
TEST(Modulo, evaluate_simple) {
    // Setup
    Integer* two = new Integer(2);
    Integer* nine = new Integer(9);
    Modulo* modulo = new Modulo(nine, two);

    // Assertion
    EXPECT_TRUE(modulo->evaluate() == 1);

    // Clean up
    delete(modulo);
}

TEST(Modulo, evaluate_simple_float) {
    // Setup
    Integer* two = new Integer(2);
    Constant* ninefive = new Constant(9.5);
    Modulo* modulo = new Modulo(ninefive, two);

    // Assertion
    EXPECT_TRUE(modulo->evaluate() == 1.5);

    // Clean up
    delete(modulo);
}

TEST(Modulo, evaluate_simple_flipped) {
    // Setup
    Integer* two = new Integer(2);
    Integer* nine = new Integer(9);
    Modulo* modulo = new Modulo(two, nine);

    // Assertion
    EXPECT_TRUE(modulo->evaluate() == 2);

    // Clean up
    delete(modulo);
}

TEST(Modulo, evaluate_negative_dividend) {
    // Setup
    Integer* two = new Integer(2);
    Integer* nseven = new Integer(-7);
    Modulo* modulo = new Modulo(nseven, two);

    // Assertion
    EXPECT_TRUE(modulo->evaluate() == -1);

    // Clean up
    delete(modulo);
}

TEST(Modulo, evaluate_negative_divisor) {
    // Setup
    Integer* ntwo = new Integer(-2);
    Integer* seven = new Integer(7);
    Modulo* modulo = new Modulo(seven, ntwo);

    // Assertion
    EXPECT_TRUE(modulo->evaluate() == 1);

    // Clean up
    delete(modulo);
}

TEST(Modulo, evaluate_implementation) {

    /*
     * Depending on the implementation of the modulos function,
     * 340 mod 60 will either be 20, -20, 40, or -40.
     *
     * There are different ways of thinking about remainders when you deal
     * with negative numbers, and he is probably confusing two of them. The
     * mod function is defined as the amount by which a number exceeds the
     * largest integer multiple of the divisor that is not greater than that
     * number. In this case, -340 lies between -360 and -300, so -360 is the
     * greatest multiple LESS than -340; we subtract 60 * -6 = -360 from -340
     * and get 20:
     *
     * -420 -360 -300 -240 -180 -120  -60   0   60   120  180  240  300  360
     * --+----+----+----+----+----+----+----+----+----+----+----+----+----+--
     *     | |                                                    |  |
     *    -360| |-340                                             300|  |340
     *        |=|                                                    |==|
     *         20                                                     40
     *
     * Working with a positive number like 340, the multiple we subtract is
     * smaller in absolute value, giving us 40; but with negative numbers, we
     * subtract a number with a LARGER absolute value, so that the mod
     * function returns a positive value. This is not always what people
     * expect, but it is consistent.
     *
     * credit: http://mathforum.org/library/drmath/view/52343.html
     */

    // TODO: revisit implementation since C++ implementation is different than wolfram-alphas

    // Setup
    Integer* sixty = new Integer(60);
    Integer* nthreeforty = new Integer(-340);
    Modulo* modulo = new Modulo(nthreeforty, sixty);

    // Assertion
    EXPECT_TRUE(modulo->evaluate() == -40);

    // Clean up
    delete(modulo);
}

TEST(Modulo, evaluate_zero) {
    // Setup
    Integer* zero = new Integer(0);
    Integer* two = new Integer(2);
    Modulo* modulo = new Modulo(two, zero);

    // Assertion
    EXPECT_TRUE(isnan(modulo->evaluate()));

    // Clean up
    delete(modulo);
}

TEST(Modulo, evaluate_zero_both) {
    // Setup
    Integer* zero1 = new Integer(0);
    Integer* zero2 = new Integer(0);
    Modulo* modulo = new Modulo(zero1, zero2);

    // Assertion
    EXPECT_TRUE(isnan(modulo->evaluate()));

    // Clean up
    delete(modulo);
}


// Modulo::getType()
TEST(Modulo, get_type) {
    // Setup
    Modulo* modulo = new Modulo(nullptr, nullptr);

    // Assertion
    EXPECT_TRUE(modulo->getType() == ExpressionType::Modulo_);

    // Clean up
    delete(modulo);
}


//** Modulo::toString() **//
TEST(Modulo, to_string_simple) {
    // Setup
    Integer* two = new Integer(2);
    Integer* eight = new Integer(8);
    Modulo* modulo = new Modulo(two, eight);

    // Assertion
    EXPECT_TRUE(modulo->toString() == "mod(2, 8)");

    // Clean up
    delete(modulo);
}