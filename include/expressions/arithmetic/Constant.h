//
// Constant.h
// Archimedes
//
// Created by Matthew Remmel on 6/5/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_CONSTANT_H
#define ARCHIMEDES_CONSTANT_H

#include "Expression.h"

namespace Archimedes {

    class Constant : public Expression {
    private:
        double value;

    public:
        // Constructors
        Constant(double value);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_CONSTANT_H
