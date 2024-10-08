#pragma once

#include "Figure.h"

class Trapezoid : public Figure
{
    double h;
public:
    void SetDimension(const double value1, const double value2, const double h);
    void ShowArea() const;
};