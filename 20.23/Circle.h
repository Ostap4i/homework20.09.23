#pragma once
#include "Shape.h"
class Circle : public Shape
{
    Circle(const std::string& name, double radius) : Shape(name), radius(radius) {}

    // Перевизначення віртуальної функції для обчислення площі кола
    double area() const override {
        return 3.14159 * radius * radius;
    }

private:
    double radius;
};

