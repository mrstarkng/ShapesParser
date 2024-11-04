#include "ShapeParser.h"
#include "ShapeFactory.h"
#include <fstream>
#include <iostream>
#include <string>

std::vector<std::unique_ptr<Shape>> ShapeParser::parseFile(const std::string& filename) {
    std::vector<std::unique_ptr<Shape>> shapes;
    std::ifstream file(filename);
    std::string line;

    if (file.is_open()) {
        std::getline(file, line); // Đọc số lượng hình dạng
        int numShapes = std::stoi(line);
        std::cout << "Reading shapes.txt...\nFound " << numShapes << " shapes\n";

        // Lấy instance của ShapeFactory
        ShapeFactory& factory = ShapeFactory::getInstance();

        while (std::getline(file, line)) {
            auto shape = factory.createShape(line); // Sử dụng instance của ShapeFactory
            if (shape) {
                shapes.push_back(std::move(shape));
            }
        }
    }
    return shapes;
}
