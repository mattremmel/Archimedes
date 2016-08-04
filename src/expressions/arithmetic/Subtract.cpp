//
// Subtract.cpp
// Archimedes
//
// Created by Matthew Remmel on 5/12/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "Subtract.h"

using namespace Archimedes;

// Constructors

Subtract::Subtract(Expression* lvalue, Expression* rvalue) {
    this->lvalue = lvalue;
    this->rvalue = rvalue;
}


// Functions
double Subtract::evaluate() {
    return this->lvalue->evaluate() - this->rvalue->evaluate();
}

ExpressionType Subtract::getType() {
    return ExpressionType::Subtract_;
}

std::string Subtract::toString() {
    std::ostringstream os;
    os << "(" << this->lvalue->toString() << " - " << this->rvalue->toString() << ")";
    return os.str();
}