//
// GaussianFunction.h
// Archimedes
//
// Created by Matthew Remmel on 6/30/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_GAUSSIANFUNCTION_H
#define ARCHIMEDES_GAUSSIANFUNCTION_H

#include "UnaryExpression.h"

namespace Archimedes {

    class GaussianFunction : public UnaryExpression {
    public:
        // Constructors
        GaussianFunction(Expression* value);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_GAUSSIANFUNCTION_H
