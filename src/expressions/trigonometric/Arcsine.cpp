//
// Arcsine.cpp
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "Arcsine.h"
#include <math.h>

using namespace Archimedes;


// Constructors
Arcsine::Arcsine(Expression* value) {
    this->value = value;
}


// Functions
double Arcsine::evaluate() {
    return asin(this->value->evaluate());
}

ExpressionType Arcsine::getType() {
    return ExpressionType::Arcsine_;
}

std::string Arcsine::toString() {
    std::ostringstream os;
    os << "asin(" << this->value->toString() << ")";
    return os.str();
}