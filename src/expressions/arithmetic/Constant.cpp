//
// Constant.cpp
// Archimedes
//
// Created by Matthew Remmel on 6/5/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "Constant.h"

using namespace Archimedes;


// Constructors
Constant::Constant(double value) {
    this->value = value;
}


// Functions
double Constant::evaluate() {
    return this->value;
}

ExpressionType Constant::getType() {
    return ExpressionType::Constant_;
}

std::string Constant::toString() {
    std::ostringstream os;
    os << this->value;
    return os.str();
}