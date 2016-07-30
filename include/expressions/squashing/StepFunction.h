//
// StepFunction.h
// Archimedes
//
// Created by Matthew Remmel on 6/30/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_STEPFUNCTION_H
#define ARCHIMEDES_STEPFUNCTION_H

#include "UnaryExpression.h"

namespace Archimedes {

    class StepFunction : public UnaryExpression {
    public:
        // Constructors
        StepFunction(Expression* value);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_STEPFUNCTION_H
