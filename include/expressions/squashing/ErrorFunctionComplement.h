//
// ErrorFunctionComplement.h
// Archimedes
//
// Created by Matthew Remmel on 6/30/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_ERRORFUNCTIONCOMPLEMENT_H
#define ARCHIMEDES_ERRORFUNCTIONCOMPLEMENT_H

#include "UnaryExpression.h"

namespace Archimedes {

    class ErrorFunctionComplement : public UnaryExpression {
    public:
        // Constructors
        ErrorFunctionComplement(Expression* value);

        // Functions

        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_ERRORFUNCTIONCOMPLEMENT_H
