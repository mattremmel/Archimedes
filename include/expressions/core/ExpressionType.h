//
// ExpressionType.h
// Archimedes
//
// Created by Matthew Remmel on 6/1/15.
// Copyright (c) 2015 Matthew Remmel. All rights reserved.
//

#ifndef ARCHIMEDES_EXPRESSIONTYPE_H
#define ARCHIMEDES_EXPRESSIONTYPE_H

namespace Archimedes {

    enum ExpressionType {
        // Arithmetic
                Add_, Divide_, Multiply_, Negation_, Integer_, Constant_, Subtract_,

        // Boolean
                Equal_, GreaterThan_, GreaterThanOrEqual_, IfThenElse_, LessThan_, LessThanOrEqual_, LogicalAnd_, LogicalNot_, LogicalOr_, LogicalXor_,

        // Exponential
                Exponential_, Logarithm_, Factorial_, Power_, SquareRoot_, NRoot_,

        // Squashing
                ErrorFunction_, ErrorFunctionComplement_, HyperbolicTangent_, GaussianFunction_, LogisticFunction_, SignFunction_, StepFunction_,

        // Trigonometric
                Sine_, Cosine_, Tangent_, Arcsine_, Arccosine_, Arctangent_, Arctangent2_,

        // Utility
                AbsoluteValue_, Ceiling_, Floor_, Maximum_, Minimum_, Modulo_, Round_,

        // Variable
                Variable_
    };
}

#endif //ARCHIMEDES_EXPRESSIONTYPE_H
