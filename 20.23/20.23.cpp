
#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

int main()
{
    Circle circle("colo", 5.0);
    Rectangle rectangle("pramocutnuc", 4.0, 6.0);
    Triangle triangle("tricutnuc", 3.0, 4.0);

    Shape* shapes[] = { &circle, &rectangle, &triangle };

    for (const auto& shape : shapes) {
        std::cout << "figure: " << shape->getName() << ", S: " << shape->area() << std::endl;
    }

    return 0;
}
