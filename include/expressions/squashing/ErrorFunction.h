//
// ErrorFunction.h
// Archimedes
//
// Created by Matthew Remmel on 6/30/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//
#ifndef ARCHIMEDES_ERRORFUNCTION_H
#define ARCHIMEDES_ERRORFUNCTION_H

#include "UnaryExpression.h"

namespace Archimedes {

    class ErrorFunction : public UnaryExpression {
    public:
        // Constructors
        ErrorFunction(Expression* value);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_ERRORFUNCTION_H
