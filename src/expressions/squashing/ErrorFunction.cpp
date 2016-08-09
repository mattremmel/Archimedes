//
// ErrorFunction.cpp
// Archimedes
//
// Created by Matthew Remmel on 6/30/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "ErrorFunction.h"
#include <math.h>

using namespace Archimedes;


// Constructors
ErrorFunction::ErrorFunction(Expression* value) {
    this->value = value;
}


// Functions
double ErrorFunction::evaluate() {
    return erf(this->value->evaluate());
}

ExpressionType ErrorFunction::getType() {
    return ExpressionType::ErrorFunction_;
}

std::string ErrorFunction::toString() {
    std::ostringstream os;
    os << "erf(" << this->value->toString() << ")";
    return os.str();
}