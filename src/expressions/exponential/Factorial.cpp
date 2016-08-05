//
// Factorial.cpp
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "Factorial.h"
#include <math.h>

using namespace Archimedes;


// Constructors
Factorial::Factorial(Expression *value) {
    this->value = value;
}


// Functions
double Factorial::evaluate() {
    return tgamma(this->value->evaluate() + 1);
}

ExpressionType Factorial::getType() {
    return ExpressionType::Factorial_;
}

std::string Factorial::toString() {
    std::ostringstream os;
    os << "factorial(" << this->value->toString() << ")";
    return os.str();
}