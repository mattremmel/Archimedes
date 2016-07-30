//
// Logarithm.h
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_LOGARITHM_H
#define ARCHIMEDES_LOGARITHM_H

#include "UnaryExpression.h"

namespace Archimedes {

    class Logarithm : public UnaryExpression {
    public:
        // Constructors
        Logarithm(Expression* value);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_LOGARITHM_H
