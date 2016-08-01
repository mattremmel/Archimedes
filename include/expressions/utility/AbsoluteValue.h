//
// AbsoluteValue.h
// Archimedes
//
// Created by Matthew Remmel on 5/11/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_ABSOLUTEVALUE_H
#define ARCHIMEDES_ABSOLUTEVALUE_H

#include "UnaryExpression.h"

namespace Archimedes {

    class AbsoluteValue : public UnaryExpression {
    public:
        // Constructors
        AbsoluteValue(Expression* value);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_ABSOLUTEVALUE_H
