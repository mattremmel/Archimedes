//
// Cosine.cpp
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "Cosine.h"
#include <math.h>

using namespace Archimedes;


// Constructors
Cosine::Cosine(Expression* value) {
    this->value = value;
}


// Functions
double Cosine::evaluate() {
    return cos(this->value->evaluate());
}

ExpressionType Cosine::getType() {
    return ExpressionType::Cosine_;
}

std::string Cosine::toString() {
    std::ostringstream os;
    os << "cos(" << this->value->toString() << ")";
    return os.str();
}