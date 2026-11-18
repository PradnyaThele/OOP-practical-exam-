// Experiment No. 6
#include <iostream>
using namespace std;

class complex {
public:
    double real;
    double imag;

    void setvalue(double r) {
        real = r;
        imag = 0.0;
    }

    void setvalue(double r, double i) {
        real = r;
        imag = i;
    }

    complex operator+(complex const &obj) {
        complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void display() {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    complex c1, c2, c3;
    c1.setvalue(3.5);
    c2.setvalue(2.0, 4.5);
    c3 = c1 + c2;

    std::cout << "Complex Number 1: ";
    c1.display();
    std::cout << "Complex Number 2: ";
    c2.display();
    std::cout << "Sum (c1 + c2): ";
    c3.display();

    return 0;
}
