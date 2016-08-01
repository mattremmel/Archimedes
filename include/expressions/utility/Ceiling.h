//
// Ceiling.h
// Archimedes
//
// Created by Matthew Remmel on 5/11/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_CEILING_H
#define ARCHIMEDES_CEILING_H

#include "UnaryExpression.h"

namespace Archimedes {

    class Ceiling : public UnaryExpression {
    public:
        // Constructors
        Ceiling(Expression* value);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_CEILING_H
