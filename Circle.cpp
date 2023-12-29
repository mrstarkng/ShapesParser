#include <sstream>
#include <iomanip>
#include "Circle.h"
#include <cmath>  // Để sử dụng M_PI cho giá trị pi chính xác

Circle::Circle(double radius) : radius(radius) {}

double Circle::getArea() const {
    return M_PI * radius * radius;  // Sử dụng M_PI thay vì 3.14 để có giá trị chính xác của pi
}

double Circle::getPerimeter() const {
    return 2 * M_PI * radius;  // Sử dụng M_PI thay vì 3.14
}

std::string Circle::toString() const {
    std::ostringstream stream;
    stream << "Circle: Radius=" << std::fixed << std::setprecision(0) << radius;
    return stream.str();
}
