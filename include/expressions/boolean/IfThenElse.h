//
// IfThenElse.h
// Archimedes
//
// Created by Matthew Remmel on 5/16/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_IFTHENELSE_H
#define ARCHIMEDES_IFTHENELSE_H

#include "TernaryExpression.h"

namespace Archimedes {

    class IfThenElse : public TernaryExpression {
    public:
        // Constructor
        IfThenElse(Expression* condition, Expression* lvalue, Expression* rvalue);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_IFTHENELSE_H
