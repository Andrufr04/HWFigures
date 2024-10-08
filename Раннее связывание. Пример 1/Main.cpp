#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"
#include "Trapezoid.h"
#include "Rhombus.h"

int main()
{
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;   
    Square square;
    Rhombus r;
    Trapezoid t;

    circle.SetDimension(10.0);
    circle.ShowArea();
    
    rectangle.SetDimension(5.5, 10.0);
    rectangle.ShowArea();

    triangle.SetDimension(5.5, 10.0);
    triangle.ShowArea();

    square.SetDimension(5);
    square.ShowArea();

    r.SetDimension(5,4);
    r.ShowArea();

    t.SetDimension(10,6,4);
    t.ShowArea();

    return 0;
}