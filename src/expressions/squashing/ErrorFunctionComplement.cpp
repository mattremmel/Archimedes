//
// ErrorFunctionComplement.cpp
// Archimedes
//
// Created by Matthew Remmel on 6/30/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "ErrorFunctionComplement.h"
#include <math.h>

using namespace Archimedes;


// Constructors
ErrorFunctionComplement::ErrorFunctionComplement(Expression* node) {
    this->value = node;
}


// Functions
double ErrorFunctionComplement::evaluate() {
    return erfc(this->value->evaluate());
}

ExpressionType ErrorFunctionComplement::getType() {
    return ExpressionType::ErrorFunctionComplement_;
}

std::string ErrorFunctionComplement::toString() {
    std::ostringstream os;
    os << "erfc(" << this->value->toString() << ")";
    return os.str();
}