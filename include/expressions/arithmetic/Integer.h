//
// Integer.h
// Archimedes
//
// Created by Matthew Remmel on 6/5/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_INTEGER_H
#define ARCHIMEDES_INTEGER_H

#include "Expression.h"

namespace Archimedes {

    class Integer : public Expression {
    private:
        int value;

    public:
        // Constructors
        Integer(int value);

        // Functions
        double evaluate() override;
        ExpressionType getType() override;
        std::string toString() override;
    };
}

#endif //ARCHIMEDES_INTEGER_H
