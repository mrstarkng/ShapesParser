// Square.h
#pragma once

#include "Shape.h"

class Square : public Shape {
private:
    double side;

public:
    Square(double side);
    double getArea() const override;
    double getPerimeter() const override;
    std::string toString() const override;
    std::string getType() const override { return "Square"; }
};
