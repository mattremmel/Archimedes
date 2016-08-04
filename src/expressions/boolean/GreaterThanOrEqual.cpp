//
// GreaterThanOrEqual.cpp
// Archimedes
//
// Created by Matthew Remmel on 5/16/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "GreaterThanOrEqual.h"

using namespace Archimedes;


// Constructors
GreaterThanOrEqual::GreaterThanOrEqual(Expression* lvalue, Expression* rvalue) {
    this->lvalue = lvalue;
    this->rvalue = rvalue;
}


// Functions
double GreaterThanOrEqual::evaluate() {
    // Return 1 if lvalue is greater than or equal to rvalue, return 0 otherwise
    return (this->lvalue->evaluate() >= this->rvalue->evaluate()) ? 1 : 0;
}

ExpressionType GreaterThanOrEqual::getType() {
    return ExpressionType::GreaterThanOrEqual_;
}

std::string GreaterThanOrEqual::toString() {
    std::ostringstream os;
    os << "(" << this->lvalue->toString() << " >= " << this->rvalue->toString() << ")";
    return os.str();
}