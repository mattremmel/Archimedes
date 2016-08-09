//
// Tangent.cpp
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "Tangent.h"
#include <math.h>

using namespace Archimedes;


// Constructors
Tangent::Tangent(Expression* value) {
    this->value = value;
}


// Functions
double Tangent::evaluate() {
    return tan(this->value->evaluate());
}

ExpressionType Tangent::getType() {
    return ExpressionType::Tangent_;
}

std::string Tangent::toString() {
    std::ostringstream os;
    os << "tan(" << this->value->toString() << ")";
    return os.str();
}