#include <sstream>
#include <iomanip>
// Square.cpp
#include "Square.h"

Square::Square(double side) : side(side) {}

double Square::getArea() const {
    return side * side;
}

double Square::getPerimeter() const {
    return 4 * side;
}

std::string Square::toString() const {
    std::ostringstream stream;
    stream << "Square: Side=" << std::fixed << std::setprecision(0) << side;
    return stream.str();
}
