//
// GreaterThan.cpp
// Archimedes
//
// Created by Matthew Remmel on 5/16/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "GreaterThan.h"

using namespace Archimedes;


// Constructors
GreaterThan::GreaterThan(Expression* lvalue, Expression* rvalue) {
    this->lvalue = lvalue;
    this->rvalue = rvalue;
}


// Functions
double GreaterThan::evaluate() {
    // Returns 1 if lvalue is greater than rvalue, returns 0 otherwise
    return (this->lvalue->evaluate() > this->rvalue->evaluate()) ? 1 : 0;
}

ExpressionType GreaterThan::getType() {
    return ExpressionType::GreaterThan_;
}

std::string GreaterThan::toString() {
    std::ostringstream os;
    os << "(" << this->lvalue->toString() << " > " << this->rvalue->toString() << ")";
    return os.str();
}