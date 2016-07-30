//
// SignFunction.h
// Archimedes
//
// Created by Matthew Remmel on 6/30/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_SIGNFUNCTION_H
#define ARCHIMEDES_SIGNFUNCTION_H

#include "UnaryExpression.h"

namespace Archimedes {

    class SignFunction : public UnaryExpression {
    public:
        // Constructors
        SignFunction(Expression* value);

        // Functions
        double evaluate() override;
        ExpressionsType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_SIGNFUNCTION_H
