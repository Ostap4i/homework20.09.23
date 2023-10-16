#pragma once
#include "Shape.h"
class Triangle : public Shape
{
public:
    Triangle(const std::string& name, double base, double height) : Shape(name), base(base), height(height) {}

    // Перевизначення віртуальної функції для обчислення площі трикутника
    double area() const override {
        return 0.5 * base * height;
    }

private:
    double base;
    double height;
};

