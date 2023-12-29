#pragma once
#include "Shape.h"
#include <vector>
#include <memory>
#include <iostream>
#include <iomanip>
class DisplayStrategy {
public:
    virtual void display(const std::vector<std::unique_ptr<Shape>>& shapes) = 0;
    virtual ~DisplayStrategy() {}
};
