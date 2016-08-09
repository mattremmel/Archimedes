//
// StepFunction.cpp
// Archimedes
//
// Created by Matthew Remmel on 6/30/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "StepFunction.h"

using namespace Archimedes;


// Constructors
StepFunction::StepFunction(Expression* node) {
    this->value = node;
}


// Functions
double StepFunction::evaluate() {
    // Returns 1 if x is positive, zero otherwise
    return (this->value->evaluate() < 0) ? 0 : 1;
}

ExpressionType StepFunction::getType() {
    return ExpressionType::StepFunction_;
}

std::string StepFunction::toString() {
    std::ostringstream os;
    os << "step(" << this->value->toString() << ")";
    return os.str();
}