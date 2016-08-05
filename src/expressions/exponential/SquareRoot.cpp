//
// SquareRoot.cpp
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "SquareRoot.h"
#include <math.h>

using namespace Archimedes;


// Constructors
SquareRoot::SquareRoot(Expression *value) {
    this->value = value;
}


// Functions
double SquareRoot::evaluate() {
    // TODO: must be positive
    return sqrt(this->value->evaluate());
}

ExpressionType SquareRoot::getType() {
    return ExpressionType::SquareRoot_;
}

std::string SquareRoot::toString() {
    std::ostringstream os;
    os << "sqrt(" << this->value->toString() << ")";
    return os.str();
}