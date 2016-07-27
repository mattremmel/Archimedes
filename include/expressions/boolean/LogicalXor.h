//
// LogicalXor.h
// Archimedes
//
// Created by Matthew Remmel on 5/16/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_LOGICALXOR_H
#define ARCHIMEDES_LOGICALXOR_H

#include "LogicalXor.h"

namespace Archimedes {

    class LogicalXor : public BinaryExpression {
    public:
        // Constructors
        LogicalXor(Expression* lvalue, Expression* rvalue);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_LOGICALXOR_H
