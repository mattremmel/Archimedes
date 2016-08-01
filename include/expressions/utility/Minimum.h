//
// Minimum.h
// Archimedes
//
// Created by Matthew Remmel on 5/11/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_MINIMUM_H
#define ARCHIMEDES_MINIMUM_H

#include "BinaryExpression.h"

namespace Archimedes {

    class Minimum : public BinaryExpression {
    public:
        // Constructors
        Minimum(Expression* lvalue, Expression* rvalue);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_MINIMUM_H
