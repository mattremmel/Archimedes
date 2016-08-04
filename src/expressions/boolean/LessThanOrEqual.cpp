//
// LessThanOrEqual.cpp
// Archimedes
//
// Created by Matthew Remmel on 5/16/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "LessThanOrEqual.h"

using namespace Archimedes;


// Constructors
LessThanOrEqual::LessThanOrEqual(Expression* lvalue, Expression* rvalue) {
    this->lvalue = lvalue;
    this->rvalue = rvalue;
}


// Functions
double LessThanOrEqual::evaluate() {
    // Return 1 if lvalue is less than or equal than rvalue, return 0 otherwise
    return (this->lvalue->evaluate() <= this->rvalue->evaluate()) ? 1 : 0;
}

ExpressionType LessThanOrEqual::getType() {
    return ExpressionType::LessThanOrEqual_;
}

std::string LessThanOrEqual::toString() {
    std::ostringstream os;
    os << "(" << this->lvalue->toString() << " <= " << this->rvalue->toString() << ")";
    return os.str();
}