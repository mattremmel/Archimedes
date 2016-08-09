//
// GuassianFunction.cpp
// Archimedes
//
// Created by Matthew Remmel on 6/30/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "GaussianFunction.h"
#include <math.h>

using namespace Archimedes;


// Constructors
GaussianFunction::GaussianFunction(Expression* node) {
    this->value = node;
}


// Functions
double GaussianFunction::evaluate() {
    // Returns exp(-x^2)
    return exp(-pow(this->value->evaluate(), 2));
}

ExpressionType GaussianFunction::getType() {
    return ExpressionType::GaussianFunction_;
}

std::string GaussianFunction::toString() {
    std::ostringstream os;
    os << "gauss(" << this->value->toString() << ")";
    return os.str();
}