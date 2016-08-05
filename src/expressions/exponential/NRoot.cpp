//
// NRoot.cpp
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#include "NRoot.h"
#include <math.h>

using namespace Archimedes;


// Constructors
NRoot::NRoot(Expression *lvalue, Expression *rvalue) {
    this->lvalue = lvalue;
    this->rvalue = rvalue;
}


// Functions
double NRoot::evaluate() {
    double lv = this->lvalue->evaluate();
    if (lv == 0) return 0; // zero if any power is zero
    if (lv < 0) return nan(""); // root of negative number is undefined

    double rv = this->rvalue->evaluate();
    if (rv == 0) return nan("");

    return pow(lv, 1 / rv);
}

ExpressionType NRoot::getType() {
    return ExpressionType::NRoot_;
}

std::string NRoot::toString() {
    std::ostringstream os;
    os << "nroot(" << this->lvalue->toString() << ", " << this->rvalue->toString() << ")";
    return os.str();
}