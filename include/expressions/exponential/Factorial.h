//
// Factorial.h
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_FACTORIAL_H
#define ARCHIMEDES_FACTORIAL_H

#include "UnaryExpression.h"

namespace Archimedes {

    class Factorial : public UnaryExpression {
    public:
        // Constructors
        Factorial(Expression* value);

        // Functions
        double evaluate() override;
        ExpressionsType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_FACTORIAL_H
