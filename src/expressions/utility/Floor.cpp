//
// Floor.cpp
// Archimedes
//
// Created by Matthew Remmel on 5/11/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "Floor.h"
#include <math.h>

using namespace Archimedes;


// Constructors
Floor::Floor(Expression* value) {
    this->value = value;
}


// Functions
double Floor::evaluate() {
    return floor(this->value->evaluate());
}

ExpressionType Floor::getType() {
    return ExpressionType::Floor_;
}

std::string Floor::toString() {
    std::ostringstream os;
    os << "floor(" << this->value->toString() << ")";
    return os.str();
}