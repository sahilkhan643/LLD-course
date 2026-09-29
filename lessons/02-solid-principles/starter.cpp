#include <iostream>
#include <memory>
#include <vector>

// Lesson 2: SOLID — Open/Closed Principle
// Open for extension, closed for modification.
// Add a new Shape type without changing totalArea().
class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

class Rectangle : public Shape {
public:
    Rectangle(double width, double height)
        : width_(width), height_(height) {}

    double area() const override {
        // TODO: Return width_ * height_.
        return 0.0;
    }

private:
    double width_;
    double height_;
};

class Circle : public Shape {
public:
    explicit Circle(double radius) : radius_(radius) {}

    double area() const override {
        // TODO: Return pi * radius_ * radius_.
        constexpr double pi = 3.141592653589793;
        return 0.0; // Replace this with the circle area calculation.
    }

private:
    double radius_;
};

// This function works for any Shape; don't add type-specific conditionals here.
double totalArea(const std::vector<std::unique_ptr<Shape>>& shapes) {
    double total = 0.0;
    for (const auto& shape : shapes) {
        total += shape->area();
    }
    return total;
}

int main() {
    std::vector<std::unique_ptr<Shape>> shapes;
    shapes.push_back(std::make_unique<Rectangle>(4.0, 5.0));
    shapes.push_back(std::make_unique<Circle>(2.0));

    std::cout << "Total area: " << totalArea(shapes) << '\n';
    std::cout << "Expected after completing TODOs: "
              << 20.0 + 3.141592653589793 * 4.0 << '\n';
}
