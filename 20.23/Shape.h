#pragma once
#include <iostream>
#include <string>

class Shape
{
public:
    Shape(const std::string& name) : name(name) {}

    // Віртуальна функція для обчислення площі фігури
    virtual double area() const {
        return 0.0; // Повертаємо 0 за замовчуванням
    }

    const std::string& getName() const {
        return name;
    }

private:
    std::string name;
};

