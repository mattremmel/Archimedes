//
// LogicalXor.cpp
// Archimedes
//
// Created by Matthew Remmel on 5/16/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "LogicalXor.h"

using namespace Archimedes;


// Constructors
LogicalXor::LogicalXor(Expression* lvalue, Expression* rvalue) {
    this->lvalue = lvalue;
    this->rvalue = rvalue;
}


// Functions
double LogicalXor::evaluate() {
    // Returns 1 if only either the lvalue or the rvalue is greater than 0, returns 0 otherwise;
    double lval = this->lvalue->evaluate();
    double rval = this->rvalue->evaluate();
    return ((lval > 0 && rval <= 0) || (lval <= 0 && rval > 0)) ? 1 : 0;
}

ExpressionType LogicalXor::getType() {
    return ExpressionType::LogicalXor_;
}

std::string LogicalXor::toString() {
    std::ostringstream os;
    os << "(" << this->lvalue->toString() << " ⊕ " << this->rvalue->toString() << ")";
    return os.str();
}