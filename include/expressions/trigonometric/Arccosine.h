//
// Arccosine.h
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_ARCCOSINE_H
#define ARCHIMEDES_ARCCOSINE_H

#include "UnaryExpression.h"

namespace Archimedes {

    class Arccosine : public UnaryExpression {
    public:
        // Constructors
        Arccosine(Expression* value);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_ARCCOSINE_H
