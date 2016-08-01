//
// Tangent.h
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_TANGENT_H
#define ARCHIMEDES_TANGENT_H

#include "UnaryExpression.h"

namespace Archimedes {

    class Tangent : public UnaryExpression {
    public:
        // Constructors
        Tangent(Expression* value);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_TANGENT_H
