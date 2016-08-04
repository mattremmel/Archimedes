//
// LessThan.cpp
// Archimedes
//
// Created by Matthew Remmel on 5/16/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "LessThan.h"

using namespace Archimedes;


// Constructors
LessThan::LessThan(Expression* lvalue, Expression* rvalue) {
    this->lvalue = lvalue;
    this->rvalue = rvalue;
}


// Functions
double LessThan::evaluate() {
    // Returns 1 if lvalue is less than rvalue, returns 0 otherwise
    return (this->lvalue->evaluate() < this->rvalue->evaluate()) ? 1 : 0;
}

ExpressionType LessThan::getType() {
    return ExpressionType::LessThan_;
}

std::string LessThan::toString() {
    std::ostringstream os;
    os << "(" << this->lvalue->toString() << " < " << this->rvalue->toString() << ")";
    return os.str();
}