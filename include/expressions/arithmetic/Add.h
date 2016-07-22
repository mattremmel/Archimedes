//
// Add.h
// Archimedes
//
// Created by Matthew Remmel on 5/11/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_ADD_H
#define ARCHIMEDES_ADD_H

#include "BinaryExpression.h"

namespace Archimedes {

    class Add : public BinaryExpression {
    public:
        // Constructors
        Add(Expression* lvalue, Expression* rvalue);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_ADD_H
