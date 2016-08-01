//
// Round.h
// Archimedes
//
// Created by Matthew Remmel on 5/11/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_ROUND_H
#define ARCHIMEDES_ROUND_H

#include "UnaryExpression.h"

namespace Archimedes {

    class Round : public UnaryExpression {
    public:
        // Constructors
        Round(Expression* value);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_ROUND_H
