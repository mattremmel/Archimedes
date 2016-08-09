//
// HyperbolicTangent.cpp
// Archimedes
//
// Created by Matthew Remmel on 6/30/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "HyperbolicTangent.h"
#include <math.h>

using namespace Archimedes;


// Constructors
HyperbolicTangent::HyperbolicTangent(Expression* value) {
    this->value = value;
}


// Functions
double HyperbolicTangent::evaluate() {
    // Returns value between -1 and +1
    return tanh(this->value->evaluate());
}

ExpressionType HyperbolicTangent::getType() {
    return ExpressionType::HyperbolicTangent_;
}

std::string HyperbolicTangent::toString() {
    std::ostringstream os;
    os << "tanh(" << this->value->toString() << ")";
    return os.str();
}