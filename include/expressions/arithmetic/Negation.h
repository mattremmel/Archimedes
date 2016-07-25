//
// Negation.h
// Archimedes
//
// Created by Matthew Remmel on 5/14/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_NEGATION_H
#define ARCHIMEDES_NEGATION_H

#include "UnaryExpression.h"

namespace Archimedes {

    class Negation : public UnaryExpression {
    public:
        // Constructors
        Negation(Expression* value);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_NEGATION_H
