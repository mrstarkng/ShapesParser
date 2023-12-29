#pragma once

#include "Shape.h"
#include <string>

class Circle : public Shape {
private:
    double radius;  // Đây phải là radius, không phải side.

public:
    Circle(double radius);  // Constructor chỉ nhận radius.
    double getArea() const override;
    double getPerimeter() const override;
    std::string toString() const override;
    std::string getType() const override { return "Circle"; }
};
