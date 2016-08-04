//
// Negation.cpp
// Archimedes
//
// Created by Matthew Remmel on 5/14/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "Negation.h"

using namespace Archimedes;


// Constructors
Negation::Negation(Expression* value) {
    this->value = value;
}


// Functions
double Negation::evaluate() {
    return -this->value->evaluate();
}

ExpressionType Negation::getType() {
    return ExpressionType::Negation_;
}

std::string Negation::toString() {
    std::ostringstream os;
    os << "-(" << this->value->toString() << ")";
    return os.str();
}