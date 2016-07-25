//
// Subtract.h
// Archimedes
//
// Created by Matthew Remmel on 5/12/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_SUBTRACT_H
#define ARCHIMEDES_SUBTRACT_H

#include "BinaryExpression.h"

namespace Archimedes {

    class Subtract : public BinaryExpression {
    public:
        // Constructors
        Subtract(Expression* lvalue, Expression* rvalue);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_SUBTRACT_H
