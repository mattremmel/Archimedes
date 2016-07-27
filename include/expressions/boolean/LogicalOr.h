//
// LogicalOr.h
// Archimedes
//
// Created by Matthew Remmel on 5/16/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_LOGICALOR_H
#define ARCHIMEDES_LOGICALOR_H

#include "BinaryExpression.h"

namespace Archimedes {

    class LogicalOr : public BinaryExpression {
    public:
        // Constructors
        LogicalOr(Expression* lvalue, Expression* rvalue);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_LOGICALOR_H
