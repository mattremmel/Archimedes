//
// SquareRoot.h
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_SQUAREROOT_H
#define ARCHIMEDES_SQUAREROOT_H

#include "UnaryExpression.h"

namespace Archimedes {

    class SquareRoot : public UnaryExpression {
    public:
        // Constructors
        SquareRoot(Expression* value);

        // Functions
        double evaluate() override;
        ExpressionsType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_SQUAREROOT_H
