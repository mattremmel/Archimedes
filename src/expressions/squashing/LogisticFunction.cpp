//
// LogisticFunction.cpp
// Archimedes
//
// Created by Matthew Remmel on 6/30/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "LogisticFunction.h"
#include <math.h>

using namespace Archimedes;


// Constructors
LogisticFunction::LogisticFunction(Expression* value) {
    this->value = value;
}


// Functions
double LogisticFunction::evaluate() {
    // Returns 1/(1 + exp(-x))
    return 1 / (1 + exp(-this->value->evaluate()));
}

ExpressionType LogisticFunction::getType() {
    return ExpressionType::LogisticFunction_;
}

std::string LogisticFunction::toString() {
    std::ostringstream os;
    os << "logistic(" << this->value->toString() << ")";
    return os.str();
}