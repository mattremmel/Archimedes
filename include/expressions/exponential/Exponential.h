//
// Exponential.h
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_EXPONENTIAL_H
#define ARCHIMEDES_EXPONENTIAL_H

#include "UnaryExpression.h"

namespace Archimedes {

    class Exponential : public UnaryExpression {
    public:
        // Constructors
        Exponential(Expression* value);

        // Functions

        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_EXPONENTIAL_H
