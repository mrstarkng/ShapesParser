#include "ShapeFactory.h"
#include <sstream>
#include <string>

std::unique_ptr<Shape> ShapeFactory::createShape(const std::string& description) {
    std::istringstream iss(description);
    std::string shapeType;
    getline(iss, shapeType, ':'); // Lấy loại hình dạng

    // Loại bỏ khoảng trắng sau dấu ':'
    iss >> std::ws;

    if (shapeType == "Square") {
        double side;
        std::string temp;
        getline(iss, temp, '=');  // Đọc đến ký tự '='
        iss >> side;
        return std::make_unique<Square>(side);
    } else if (shapeType == "Circle") {
        double radius;
        std::string temp;
        getline(iss, temp, '=');  // Đọc đến ký tự '='
        iss >> radius;
        return std::make_unique<Circle>(radius);
    } else if (shapeType == "Rectangle") {
        double width, height;
        std::string temp;
        getline(iss, temp, '=');  // Đọc đến ký tự '=' đầu tiên
        iss >> width;
        getline(iss, temp, '=');  // Đọc đến ký tự '=' thứ hai
        iss >> height;
        return std::make_unique<Rectangle>(width, height);
    }

    return nullptr; // Trả về nullptr nếu không khớp với bất kỳ loại hình nào
}
