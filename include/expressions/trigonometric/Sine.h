//
// Sine.h
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_SINE_H
#define ARCHIMEDES_SINE_H

#include "UnaryExpression.h"

namespace Archimedes {

    class Sine : public UnaryExpression {
    public:
        // Constructors
        Sine(Expression* value);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_SINE_H
