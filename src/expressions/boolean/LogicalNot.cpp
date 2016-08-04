//
// LogicalNot.cpp
// Archimedes
//
// Created by Matthew Remmel on 5/16/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "LogicalNot.h"

using namespace Archimedes;


// Constructors
LogicalNot::LogicalNot(Expression* value) {
    this->value = value;
}


// Functions
double LogicalNot::evaluate() {
    // Returns 0 if value is greater than 0, returns 1 otherwise
    return (this->value->evaluate() > 0) ? 0 : 1;
}

ExpressionType LogicalNot::getType() {
    return ExpressionType::LogicalNot_;
}

std::string LogicalNot::toString() {
    std::ostringstream os;
    os <<  "!(" << this->value->toString() << ")";
    return os.str();
}