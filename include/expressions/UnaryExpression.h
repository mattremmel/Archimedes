//
// UnaryExpression.h
// Archimedes
//
// Created by Matthew Remmel on 5/14/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_UNARYEXPRESSION_H
#define ARCHIMEDES_UNARYEXPRESSION_H

#include "Expression.h"

namespace Archimedes {

    class UnaryExpression : public Expression {
    protected:
        Expression* value;

    public:
        // Destructor
        ~UnaryExpression() { delete(value); }
    };
}

#endif //ARCHIMEDES_UNARYEXPRESSION_H
