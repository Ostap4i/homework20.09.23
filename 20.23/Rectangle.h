#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
public:
    Rectangle(const std::string& name, double width, double height) : Shape(name), width(width), height(height) {}

    // �������������� ��������� ������� ��� ���������� ����� ������������
    double area() const override {
        return width * height;
    }

private:
    double width;
    double height;
};


