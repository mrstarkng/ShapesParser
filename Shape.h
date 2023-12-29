#pragma once

#include <string>

class Shape {
public:
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual std::string toString() const = 0;
    virtual std::string getType() const = 0;
    virtual ~Shape() {}
};
