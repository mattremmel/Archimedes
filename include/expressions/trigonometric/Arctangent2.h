//
// Arctangent2.h
// Archimedes
//
// Created by Matthew Remmel on 6/29/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_ARCTANGENT2_H
#define ARCHIMEDES_ARCTANGENT2_H

#include "BinaryExpression.h"

namespace Archimedes {

    class Arctangent2  : public BinaryExpression {
    public:
        // Constructors
        Arctangent2(Expression* lvalue, Expression* rvalue);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_ARCTANGENT2_H
