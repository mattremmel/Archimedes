//
// Integer.cpp
// Archimedes
//
// Created by Matthew Remmel on 6/5/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "Integer.h"

using namespace Archimedes;

// Constructors

Integer::Integer(int value) {
    this->value = value;
}


// Functions
double Integer::evaluate() {
    return this->value;
}

ExpressionType Integer::getType() {
    return ExpressionType::Integer_;
}

std::string Integer::toString() {
    std::ostringstream os;
    os << this->value;
    return os.str();
}