//
// GreaterThan.h
// Archimedes
//
// Created by Matthew Remmel on 5/16/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_GREATERTHAN_H
#define ARCHIMEDES_GREATERTHAN_H

#include "BinaryExpression.h"

namespace Archimedes {

    class GreaterThan : public BinaryExpression {
    public:
        // Constructors
        GreaterThan(Expression* lvalue, Expression* rvalue);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_GREATERTHAN_H
