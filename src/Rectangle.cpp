#include <sstream>
#include <iomanip>
#include "Rectangle.h"

Rectangle::Rectangle(double width, double height) : width(width), height(height) {}

double Rectangle::getArea() const {
    return width * height;
}

double Rectangle::getPerimeter() const {
    return 2 * (width + height);
}

std::string Rectangle::toString() const {
    std::ostringstream stream;
    stream << "Rectangle: Width=" << std::fixed << std::setprecision(0) << width
           << ", Height=" << std::fixed << std::setprecision(0) << height;
    return stream.str();
}
