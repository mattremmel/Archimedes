//
// Exponential.cpp
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "Exponential.h"
#include <math.h>

using namespace Archimedes;


// Constructors
Exponential::Exponential(Expression* value) {
    this->value = value;
}


// Functions
double Exponential::evaluate() {
    return exp(this->value->evaluate());
}

ExpressionType Exponential::getType() {
    return ExpressionType::Exponential_;
}

std::string Exponential::toString() {
    std::ostringstream os;
    os << "exp(" << this->value->toString() << ")";
    return os.str();
}