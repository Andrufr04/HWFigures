#include <iostream> 
#include "Trapezoid.h"
using namespace std;

void Trapezoid::SetDimension(const double value1, const double value2, const double h1)
{
	Figure::SetDimension(value1, value2);
	h = h1;
}

void Trapezoid::ShowArea() const
{
	cout << "Area of Trapezoid: " << (m_value1 + m_value2) * h / 2 << endl;
}
