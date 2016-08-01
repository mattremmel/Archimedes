//
// Cosine.h
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_COSINE_H
#define ARCHIMEDES_COSINE_H

#include "UnaryExpression.h"

namespace Archimedes {

    class Cosine : public UnaryExpression {
    public:
        // Constructors
        Cosine(Expression* value);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_COSINE_H
