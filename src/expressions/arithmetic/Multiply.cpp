//
// Multiply.cpp
// Archimedes
//
// Created by Matthew Remmel on 5/12/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "Multiply.h"

using namespace Archimedes;

// Constructors
Multiply::Multiply(Expression* lvalue, Expression* rvalue) {
    this->lvalue = lvalue;
    this->rvalue = rvalue;
}


// Functions
double Multiply::evaluate() {
    return this->lvalue->evaluate() * this->rvalue->evaluate();
}

ExpressionType Multiply::getType() {
    return ExpressionType::Multiply_;
}

std::string Multiply::toString() {
    std::ostringstream os;
    os << "(" << this->lvalue->toString() << " * " << this->rvalue->toString() << ")";
    return os.str();
}