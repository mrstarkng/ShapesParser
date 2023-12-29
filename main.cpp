#include "Shape.h"
#include "ShapeParser.h"
#include "TextDisplayStrategy.h"
#include <memory>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <sstream>

int main() {
    ShapeParser parser;
    std::vector<std::unique_ptr<Shape>> shapes;
    try {
        shapes = parser.parseFile("shapes.txt");
        int index = 1;
        for (const auto& shape : shapes) {
            std::cout << index++ << ". " << shape->toString() << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    // Sắp xếp các hình dạng
    std::sort(shapes.begin(), shapes.end(), [](const std::unique_ptr<Shape>& a, const std::unique_ptr<Shape>& b) {
        return a->getArea() < b->getArea();
    });

    // Tạo TextDisplayStrategy và hiển thị các hình dạng
    TextDisplayStrategy textDisplay;
    textDisplay.display(shapes);

    return 0;
}
