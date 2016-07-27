//
// LessThan.h
// Archimedes
//
// Created by Matthew Remmel on 5/16/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_LESSTHAN_H
#define ARCHIMEDES_LESSTHAN_H

#include "BinaryExpression.h"

namespace Archimedes {

    class LessThan : public BinaryExpression {
    public:
        // Constructors
        LessThan(Expression* lvalue, Expression* rvalue);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_LESSTHAN_H
