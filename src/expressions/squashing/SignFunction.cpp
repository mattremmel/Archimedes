//
// SignFunction.cpp
// Archimedes
//
// Created by Matthew Remmel on 6/30/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "SignFunction.h"

using namespace Archimedes;


// Constructors
SignFunction::SignFunction(Expression* node) {
    this->value = node;
}


// Functions
double SignFunction::evaluate() {
    // Returns -1 if x is negative, +1 if x is positive, and 0 if x is zero
    double result = this->value->evaluate();
    if (result > 0) return 1;
    else if (result < 0) return -1;
    else return 0;
}

ExpressionType SignFunction::getType() {
    return ExpressionType::SignFunction_;
}

std::string SignFunction::toString() {
    std::ostringstream os;
    os << "sign(" << this->value->toString() << ")";
    return os.str();
}