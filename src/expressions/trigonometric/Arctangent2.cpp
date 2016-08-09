//
// Arctangent2.cpp
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "Arctangent2.h"
#include <math.h>

using namespace Archimedes;


// Constructors
Arctangent2::Arctangent2(Expression* lvalue, Expression* rvalue) {
    this->lvalue = lvalue;
    this->rvalue = rvalue;
}


// Functions
double Arctangent2::evaluate() {
    return atan2(this->lvalue->evaluate(), this->rvalue->evaluate());
}

ExpressionType Arctangent2::getType() {
    return ExpressionType::Arctangent2_;
}

std::string Arctangent2::toString() {
    std::ostringstream os;
    os << "atan2(" << this->lvalue->toString() << ", " << this->rvalue->toString() << ")";
    return os.str();
}