//
// Add.cpp
// Archimedes
//
// Created by Matthew Remmel on 5/11/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "Add.h"

using namespace Archimedes;

// Constructors
Add::Add(Expression* lvalue, Expression* rvalue) {
    this->lvalue = lvalue;
    this->rvalue = rvalue;
}


// Functions
double Add::evaluate() {
    return this->lvalue->evaluate() + this->rvalue->evaluate();
}

ExpressionType Add::getType() {
    return ExpressionType ::Add_;
}

std::string Add::toString() {
    std::ostringstream os;
    os << "(" << this->lvalue->toString() << " + " << this->rvalue->toString() << ")";
    return os.str();
}