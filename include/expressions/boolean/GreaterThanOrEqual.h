//
// GreaterThanOrEqual.h
// Archimedes
//
// Created by Matthew Remmel on 5/16/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_GREATERTHANOREQUAL_H
#define ARCHIMEDES_GREATERTHANOREQUAL_H

#include "BinaryExpression.h"

namespace Archimedes {

    class GreaterThanOrEqual : public BinaryExpression {
    public:
        // Constructors
        GreaterThanOrEqual(Expression* lvalue, Expression* rvalue);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_GREATERTHANOREQUAL_H
