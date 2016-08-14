//
// Modulo.cpp
// Archimedes
//
// Created by Matthew Remmel on 5/11/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "Modulo.h"
#include <math.h>

using namespace Archimedes;


// Constructors
Modulo::Modulo(Expression* lvalue, Expression* rvalue) {
    this->lvalue = lvalue;
    this->rvalue = rvalue;
}


// Functions
double Modulo::evaluate() {

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

    return fmod(this->lvalue->evaluate(), this->rvalue->evaluate());
}

ExpressionType Modulo::getType() {
    return ExpressionType::Modulo_;
}

std::string Modulo::toString() {
    std::ostringstream os;
    os << "mod(" << this->lvalue->toString() << ", " << this->rvalue->toString() << ")";
    return os.str();
}