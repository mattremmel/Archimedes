//
// Ceiling.cpp
// Archimedes
//
// Created by Matthew Remmel on 5/11/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "Ceiling.h"
#include <math.h>

using namespace Archimedes;


// Constructors
Ceiling::Ceiling(Expression* value) {
    this->value = value;
}


// Functions
double Ceiling::evaluate() {
    return ceil(this->value->evaluate());
}

ExpressionType Ceiling::getType() {
    return ExpressionType::Ceiling_;
}

std::string Ceiling::toString() {
    std::ostringstream os;
    os << "ceil(" << this->value->toString() << ")";
    return os.str();
}