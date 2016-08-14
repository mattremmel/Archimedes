//
// AbsoluteValue.cpp
// Archimedes
//
// Created by Matthew Remmel on 5/11/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "AbsoluteValue.h"
#include <math.h>

using namespace Archimedes;


// Constructors
AbsoluteValue::AbsoluteValue(Expression* value) {
    this->value = value;
}


// Functions
double AbsoluteValue::evaluate() {
    return fabs(this->value->evaluate());
}

ExpressionType AbsoluteValue::getType() {
    return ExpressionType::AbsoluteValue_;
}

std::string AbsoluteValue::toString() {
    std::ostringstream os;
    os << "abs(" << this->value->toString() << ")";
    return os.str();
}