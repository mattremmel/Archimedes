//
// LogicalNot.h
// Archimedes
//
// Created by Matthew Remmel on 5/16/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_LOGICALNOT_H
#define ARCHIMEDES_LOGICALNOT_H

#include "UnaryExpression.h"

namespace Archimedes {

    class LogicalNot : public UnaryExpression {
    public:
        // Constructors
        LogicalNot(Expression* value);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_LOGICALNOT_H
