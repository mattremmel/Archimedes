//
// Floor.h
// Archimedes
//
// Created by Matthew Remmel on 5/11/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_FLOOR_H
#define ARCHIMEDES_FLOOR_H

#include "UnaryExpression.h"

namespace Archimedes {

    class Floor : public UnaryExpression {
    public:
        // Constructors
        Floor(Expression* value);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_FLOOR_H
