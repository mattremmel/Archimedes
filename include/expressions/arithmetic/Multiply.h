//
// Multiply.h
// Archimedes
//
// Created by Matthew Remmel on 5/12/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_MULTIPLY_H
#define ARCHIMEDES_MULTIPLY_H

#include "BinaryExpression.h"

namespace Archimedes {

    class Multiply : public BinaryExpression {
    public:
        // Constructors
        Multiply(Expression* lvalue, Expression* rvalue);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_MULTIPLY_H
