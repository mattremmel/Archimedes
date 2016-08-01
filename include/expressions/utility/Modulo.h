//
// Modulo.h
// Archimedes
//
// Created by Matthew Remmel on 5/11/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_MODULO_H
#define ARCHIMEDES_MODULO_H

#include "BinaryExpression.h"

namespace Archimedes {

    class Modulo : public BinaryExpression {
    public:
        // Constructors
        Modulo(Expression* lvalue, Expression* rvalue);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_MODULO_H
