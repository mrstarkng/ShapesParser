#pragma once

#include <memory>
#include "Shape.h"
#include "Square.h"
#include "Circle.h"
#include "Rectangle.h"

class ShapeFactory {
public:
    // Xóa constructor copy và operator=
    ShapeFactory(const ShapeFactory&) = delete;
    ShapeFactory& operator=(const ShapeFactory&) = delete;

    // Phương thức static để truy cập instance singleton
    static ShapeFactory& getInstance() {
        static ShapeFactory instance;
        return instance;
    }

    std::unique_ptr<Shape> createShape(const std::string& description);

private:
    ShapeFactory() {} // Constructor private
};
