//
// Round.cpp
// Archimedes
//
// Created by Matthew Remmel on 5/11/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "Round.h"
#include <math.h>

using namespace Archimedes;


// Constructors
Round::Round(Expression *value) {
    this->value = value;
}


// Functions
double Round::evaluate() {
    return round(this->value->evaluate());
}

ExpressionType Round::getType() {
    return ExpressionType::Round_;
}

std::string Round::toString() {
    std::ostringstream os;
    os << "round(" << this->value->toString() << ")";
    return os.str();
}