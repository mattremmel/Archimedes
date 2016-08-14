//
// Minimum.cpp
// Archimedes
//
// Created by Matthew Remmel on 5/11/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "Minimum.h"

using namespace Archimedes;


// Constructors
Minimum::Minimum(Expression* lvalue, Expression* rvalue) {
    this->lvalue = lvalue;
    this->rvalue = rvalue;
}


// Functions
double Minimum::evaluate() {
    double lv = this->lvalue->evaluate();
    double rv = this->rvalue->evaluate();
    return (lv <= rv) ? lv : rv;
}

ExpressionType Minimum::getType() {
    return ExpressionType::Minimum_;
}

std::string Minimum::toString() {
    std::ostringstream os;
    os << "min(" << this->lvalue->toString() << ", " << this->rvalue->toString() << ")";
    return os.str();
}