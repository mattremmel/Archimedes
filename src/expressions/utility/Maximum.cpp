//
// Maximum.cpp
// Archimedes
//
// Created by Matthew Remmel on 5/11/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "Maximum.h"

using namespace Archimedes;


// Constructors

Maximum::Maximum(Expression* lvalue, Expression* rvalue) {
    this->lvalue = lvalue;
    this->rvalue = rvalue;
}


// Functions
double Maximum::evaluate() {
    double lv = this->lvalue->evaluate();
    double rv = this->rvalue->evaluate();
    return (lv >= rv) ? lv : rv;
}

ExpressionType Maximum::getType() {
    return ExpressionType::Maximum_;
}

std::string Maximum::toString() {
    std::ostringstream os;
    os << "max(" << this->lvalue->toString() << ", " << this->rvalue->toString() << ")";
    return os.str();
}