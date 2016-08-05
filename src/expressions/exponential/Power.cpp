//
// Power.cpp
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "Power.h"
#include <math.h>

using namespace Archimedes;


// Constructors
Power::Power(Expression *lvalue, Expression* rvalue) {
    this->lvalue = lvalue;
    this->rvalue = rvalue;
}


// Functions
double Power::evaluate() {
    double lv = this->lvalue->evaluate();
    double rv = this->rvalue->evaluate();
    if (lv == 0 && rv == 0) return nan(""); // zero to power of zero is undefined

    return pow(this->lvalue->evaluate(), this->rvalue->evaluate());
}

ExpressionType Power::getType() {
    return ExpressionType::Power_;
}

std::string Power::toString() {
    std::ostringstream os;
    os << "pow(" << this->lvalue->toString() << ", " << this->rvalue->toString() << ")";
    return os.str();
}