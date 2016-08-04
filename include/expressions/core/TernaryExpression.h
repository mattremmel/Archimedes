//
// TernaryExpression.h
// Archimedes
//
// Created by Matthew Remmel on 7/27/16.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_TERNARYEXPRESSION_H
#define ARCHIMEDES_TERNARYEXPRESSION_H

#include "Expression.h"

namespace Archimedes {

    class TernaryExpression : public Expression {
    protected:
        Expression* value1;
        Expression* value2;
        Expression* value3;

    public:
        // Destructor
        ~TernaryExpression() { delete(value1); delete(value2); delete(value3); }
    };
}

#endif //ARCHIMEDES_TERNARYEXPRESSION_H
