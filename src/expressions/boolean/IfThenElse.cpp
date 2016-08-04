//
// IfThenElse.cpp
// Archimedes
//
// Created by Matthew Remmel on 5/16/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "IfThenElse.h"

using namespace Archimedes;


// Constructors
IfThenElse::IfThenElse(Expression* condition, Expression* lvalue, Expression* rvalue) {
    this->value1 = condition;
    this->value2 = lvalue;
    this->value3 = rvalue;
}


// Functions
ExpressionType IfThenElse::getType() {
    return ExpressionType::IfThenElse_;
}

double IfThenElse::evaluate() {
    // Returns lvalue if condition is greater than 0, returns rvalue otherwise
    return (this->value1->evaluate() > 0) ? this->value2->evaluate() : this->value3->evaluate();
}

std::string IfThenElse::toString() {
    std::ostringstream os;
    os << "if(" << this->value1->toString() << ", " << this->value2->toString() << ", " << this->value3->toString() << ")";
    return os.str();
}