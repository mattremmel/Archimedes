//
// NRoot.h
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_NROOT_H
#define ARCHIMEDES_NROOT_H

#include "BinaryExpression.h"

namespace Archimedes {

    class NRoot : public BinaryExpression {
    public:
        // Constructors
        NRoot(Expression* lvalue, Expression* rvalue);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_NROOT_H
