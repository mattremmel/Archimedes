//
// Expression.cpp
// Archimedes
//
// Created by Matthew Remmel on 5/11/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_EXPRESSION_H
#define ARCHIMEDES_EXPRESSION_H

#include "ExpressionType.h"
#include <string>
#include <sstream>

namespace Archimedes {

    class Expression {
    public:
        virtual double evaluate() = 0;
        virtual ExpressionType getType() = 0;
        virtual std::string toString() = 0;
        virtual ~Expression() { }
    };
}

#endif //ARCHIMEDES_EXPRESSION_H
