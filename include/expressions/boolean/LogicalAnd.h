//
// LogicalAnd.h
// Archimedes
//
// Created by Matthew Remmel on 5/16/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_LOGICALAND_H
#define ARCHIMEDES_LOGICALAND_H

#include "BinaryExpression.h"

namespace Archimedes {

    class LogicalAnd : public BinaryExpression {
    public:
        // Constructors
        LogicalAnd(Expression* lvalue, Expression* rvalue);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_LOGICALAND_H
