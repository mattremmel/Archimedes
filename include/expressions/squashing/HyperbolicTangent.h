//
// HyperbolicTangent.h
// Archimedes
//
// Created by Matthew Remmel on 6/30/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_HYPERBOLICTANGENT_H
#define ARCHIMEDES_HYPERBOLICTANGENT_H

#include "UnaryExpression.h"

namespace Archimedes {

    class HyperbolicTangent : public UnaryExpression {
    public:
        // Constructors
        HyperbolicTangent(Expression* value);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_HYPERBOLICTANGENT_H
