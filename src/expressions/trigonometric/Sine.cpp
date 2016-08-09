//
// Sine.cpp
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "Sine.h"
#include <math.h>

using namespace Archimedes;


// Constructors
Sine::Sine(Expression* value) {
    this->value = value;
}


// Functions
double Sine::evaluate() {
    return sin(this->value->evaluate());
}

ExpressionType Sine::getType() {
    return ExpressionType::Sine_;
}

std::string Sine::toString() {
    std::ostringstream os;
    os << "sin(" << this->value->toString() << ")";
    return os.str();
}