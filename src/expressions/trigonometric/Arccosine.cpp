//
// Arccosine.cpp
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "Arccosine.h"
#include <math.h>

using namespace Archimedes;


// Constructors
Arccosine::Arccosine(Expression* value) {
    this->value = value;
}


// Functions
double Arccosine::evaluate() {
    return acos(this->value->evaluate());
}

ExpressionType Arccosine::getType() {
    return ExpressionType::Arccosine_;
}

std::string Arccosine::toString() {
    std::ostringstream os;
    os << "acos(" << this->value->toString() << ")";
    return os.str();
}