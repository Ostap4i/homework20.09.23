#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
public:
    Rectangle(const std::string& name, double width, double height) : Shape(name), width(width), height(height) {}

    // Перевизначення віртуальної функції для обчислення площі прямокутника
    double area() const override {
        return width * height;
    }

private:
    double width;
    double height;
};


