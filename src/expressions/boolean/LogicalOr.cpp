//
// LogicalOr.cpp
// Archimedes
//
// Created by Matthew Remmel on 5/16/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "LogicalOr.h"

using namespace Archimedes;


// Constructors
LogicalOr::LogicalOr(Expression* lvalue, Expression* rvalue) {
    this->lvalue = lvalue;
    this->rvalue = rvalue;
}


// Functions
double LogicalOr::evaluate() {
    // Return 1 if either lvalue or rvalue are greater than 0, returns 0 otherwise
    return (this->lvalue->evaluate() > 0 || this->rvalue->evaluate() > 0) ? 1 : 0;
}

ExpressionType LogicalOr::getType() {
    return ExpressionType::LogicalOr_;
}

std::string LogicalOr::toString() {
    std::ostringstream os;
    os << "(" << this->lvalue->toString() << " || " << this->rvalue->toString() << ")";
    return os.str();
}