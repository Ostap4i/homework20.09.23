#pragma once
#include <iostream>
#include <string>

class Shape
{
public:
    Shape(const std::string& name) : name(name) {}

    // ³�������� ������� ��� ���������� ����� ������
    virtual double area() const {
        return 0.0; // ��������� 0 �� �������������
    }

    const std::string& getName() const {
        return name;
    }

private:
    std::string name;
};

