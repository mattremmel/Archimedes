//
// Divide.cpp
// Archimedes
//
// Created by Matthew Remmel on 5/12/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "Divide.h"
#include <math.h>

using namespace Archimedes;


// Constructors
Divide::Divide(Expression* lvalue, Expression* rvalue) {
    this->lvalue = lvalue;
    this->rvalue = rvalue;
}


// Functions
double Divide::evaluate() {
    // Handle divide by 0 errors
    double rv = this->rvalue->evaluate();
    if (rv == 0) return nan("");
    return this->lvalue->evaluate() / rv;
}

ExpressionType Divide::getType() {
    return ExpressionType::Divide_;
}

std::string Divide::toString() {
    std::ostringstream os;
    os << "(" << this->lvalue->toString() << " / " << this->rvalue->toString() << ")";
    return os.str();
}