//
// Power.h
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_POWER_H
#define ARCHIMEDES_POWER_H

#include "BinaryExpression.h"

namespace Archimedes {

    class Power : public BinaryExpression {
    public:
        // Constructors
        Power(Expression* lvalue, Expression* rvalue);

        // Functions

        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_POWER_H
