// Experiment No. 5
#include <iostream>
using namespace std;

class shape {
public:
    virtual double area() = 0;
};

class circle : public shape {
public:
    double radius = 5.0;
    double area() override {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public shape {
public:
    double width = 4.0, height = 6.0;
    double area() override {
        return width * height;
    }
};

class triangle : public shape {
public:
    double base = 4.0, height = 5.0;
    double area() override {
        return 0.5 * base * height;
    }
};

int main() {
    circle c;
    Rectangle r;
    triangle t;

    shape *s1 = &c;
    shape *s2 = &r;
    shape *s3 = &t;

    std::cout << "Circle Area: " << s1->area() << std::endl;
    std::cout << "Rectangle Area: " << s2->area() << std::endl;
    std::cout << "Triangle Area: " << s3->area() << std::endl;

    return 0;
}
