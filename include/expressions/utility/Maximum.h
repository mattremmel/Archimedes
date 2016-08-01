//
// Maximum.h
// Archimedes
//
// Created by Matthew Remmel on 5/11/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_MAXIMUM_H
#define ARCHIMEDES_MAXIMUM_H

#include "BinaryExpression.h"

namespace Archimedes {

    class Maximum : public BinaryExpression {
    public:
        // Constructors
        Maximum(Expression* lvalue, Expression* rvalue);

        // Functions
        ExpressionType getType() override;
        double evaluate() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_MAXIMUM_H
