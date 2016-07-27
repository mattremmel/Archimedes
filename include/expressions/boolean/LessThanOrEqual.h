//
// LessThanOrEqual.h
// Archimedes
//
// Created by Matthew Remmel on 5/16/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_LESSTHANOREQUAL_H
#define ARCHIMEDES_LESSTHANOREQUAL_H

#include "BinaryExpression.h"

namespace Archimedes {

    class LessThanOrEqual : public BinaryExpression {
    public:
        // Constructors
        LessThanOrEqual(Expression* lvalue, Expression* rvalue);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_LESSTHANOREQUAL_H
