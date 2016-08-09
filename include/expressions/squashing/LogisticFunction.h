//
// LogisticFunction.h
// Archimedes
//
// Created by Matthew Remmel on 6/30/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_LOGISTICFUNCTION_H
#define ARCHIMEDES_LOGISTICFUNCTION_H

#include "UnaryExpression.h"

namespace Archimedes {

    class LogisticFunction : public UnaryExpression {
    public:
        // Constructors
        LogisticFunction(Expression* value);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_LOGISTICFUNCTION_H
