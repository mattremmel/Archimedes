//
// Equal.cpp
// Archimedes
//
// Created by Matthew Remmel on 5/16/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "Equal.h"

using namespace Archimedes;


// Constructors
Equal::Equal(Expression* lvalue, Expression* rvalue) {
    this->lvalue = lvalue;
    this->rvalue = rvalue;
}


// Functions
double Equal::evaluate() {
    // Returns 1 if lvalue and rvalue are equal, returns 0 otherwise
    return (this->lvalue->evaluate() == this->rvalue->evaluate()) ? 1 : 0;
    // TODO: May need to handle small floating point errors
}

ExpressionType Equal::getType() {
    return ExpressionType::Equal_;
}

std::string Equal::toString() {
    std::ostringstream os;
    os << "(" << this->lvalue->toString() << " == " << this->rvalue->toString() << ")";
    return os.str();
}