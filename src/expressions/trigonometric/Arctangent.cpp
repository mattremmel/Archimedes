//
// Arctangent.cpp
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "Arctangent.h"
#include <math.h>

using namespace Archimedes;


// Constructors
Arctangent::Arctangent(Expression* value) {
    this->value = value;
}


// Functions
double Arctangent::evaluate() {
    return atan(this->value->evaluate());
}

ExpressionType Arctangent::getType() {
    return ExpressionType::Arctangent_;
}

std::string Arctangent::toString() {
    std::ostringstream os;
    os << "atan(" << this->value->toString() << ")";
    return os.str();
}