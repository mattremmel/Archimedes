//
// Divide.h
// Archimedes
//
// Created by Matthew Remmel on 5/12/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_DIVIDE_H
#define ARCHIMEDES_DIVIDE_H

#import "BinaryExpression.h"

namespace Archimedes {

    class Divide : public BinaryExpression {
    public:
        // Constructors
        Divide(Expression* lvalue, Expression* rvalue);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_DIVIDE_H
