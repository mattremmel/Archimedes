//
// Arctangent.h
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_ARCTANGENT_H
#define ARCHIMEDES_ARCTANGENT_H

#include "UnaryExpression.h"

namespace Archimedes {

    class Arctangent : public UnaryExpression {
    public:
        // Constructors
        Arctangent(Expression* value);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_ARCTANGENT_H
