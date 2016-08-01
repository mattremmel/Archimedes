//
// Arcsine.h
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_ARCSINE_H
#define ARCHIMEDES_ARCSINE_H

#include "UnaryExpression.h"

namespace Archimedes {

    class Arcsine : public UnaryExpression {
    public:
        // Constructors
        Arcsine(Expression* value);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_ARCSINE_H
