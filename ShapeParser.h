#pragma once
#include <vector>
#include <memory>
#include "Shape.h"

class ShapeParser {
public:
    std::vector<std::unique_ptr<Shape>> parseFile(const std::string& filename);
};
