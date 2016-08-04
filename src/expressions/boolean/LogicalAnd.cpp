//
// LogicalAnd.cpp
// Archimedes
//
// Created by Matthew Remmel on 5/16/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "LogicalAnd.h"

using namespace Archimedes;


// Constructors
LogicalAnd::LogicalAnd(Expression* lvalue, Expression* rvalue) {
    this->lvalue = lvalue;
    this->rvalue = rvalue;
}


// Functions
double LogicalAnd::evaluate() {
    // Returns 1 if lvalue and rvalue are greater than 0, returns 0 otherwise
    return (this->lvalue->evaluate() > 0 && this->rvalue->evaluate() > 0) ? 1 : 0;
}

ExpressionType LogicalAnd::getType() {
    return ExpressionType::LogicalAnd_;
}

std::string LogicalAnd::toString() {
    std::ostringstream os;
    os << "(" << this->lvalue->toString() << " && " << this->rvalue->toString() << ")";
    return os.str();
}