#pragma once

#include "Shape.h"
#include <string>

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double width, double height);
    double getArea() const override;
    double getPerimeter() const override;
    std::string toString() const override;
    std::string getType() const override { return "Rectangle"; }
};
