#pragma once
#include "DisplayStrategy.h"

class TextDisplayStrategy : public DisplayStrategy {
public:
    void display(const std::vector<std::unique_ptr<Shape>>& shapes) override {
        int number = 1;
        for (const auto& shape : shapes) {
            std::cout << "| " << std::left << std::setw(10) << number
                      << "| " << std::left << std::setw(10) << shape->getType()
                      << "| " << std::right << std::fixed << std::setprecision(1) << std::setw(19) << shape->getPerimeter()
                      << " | " << std::right << std::fixed << std::setprecision(2) << std::setw(6) << shape->getArea()
                      << " |" << std::endl;
            number++;
        }
    }
};
