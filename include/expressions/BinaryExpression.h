//
// BinaryExpression.h
// Archimedes
//
// Created by Matthew Remmel on 5/12/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_BINARYEXPRESSION_H
#define ARCHIMEDES_BINARYEXPRESSION_H

#include "Expression.h"

namespace Archimedes {

    class BinaryExpression : public Expression {
    protected:
        Expression* lvalue;
        Expression* rvalue;

    public:
        // Destructor
        ~BinaryExpression() { delete(lvalue); delete(rvalue); }
    };
}

#endif //ARCHIMEDES_BINARYEXPRESSION_H
