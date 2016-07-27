//
// Equal.h
// Archimedes
//
// Created by Matthew Remmel on 5/16/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_EQUAL_H
#define ARCHIMEDES_EQUAL_H

#include "BinaryExpression.h"

namespace Archimedes {

    class Equal : public BinaryExpression {
    public:
        // Constructors
        Equal(Expression* lvalue, Expression* rvalue);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_EQUAL_H
