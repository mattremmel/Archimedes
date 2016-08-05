//
// Logarithm.cpp
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "Logarithm.h"
#include <math.h>

using namespace Archimedes;


// Constructors
Logarithm::Logarithm(Expression* value) {
    this->value = value;
}


// Functions
double Logarithm::evaluate() {
    double result = this->value->evaluate();
    if (result <= 0) return nan("");
    return log(this->value->evaluate());
}

ExpressionType Logarithm::getType() {
    return ExpressionType::Logarithm_;
}

std::string Logarithm::toString() {
    std::ostringstream os;
    os << "log(" << this->value->toString() << ")";
    return os.str();
}