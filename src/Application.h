#pragma once
#include "DisplayStrategy.h"
#include <vector>
#include <memory>

class Application {
private:
    DisplayStrategy* displayStrategy;

public:
    Application() : displayStrategy(nullptr) {}

    void setDisplayStrategy(DisplayStrategy* strategy) {
        displayStrategy = strategy;
    }

    void displayShapes(const std::vector<std::unique_ptr<Shape>>& shapes) {
        if (displayStrategy) {
            displayStrategy->display(shapes);
        }
    }

    ~Application() {
        if (displayStrategy) {
            delete displayStrategy;
        }
    }
};
