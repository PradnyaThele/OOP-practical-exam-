// Experiment No. 4
#include <iostream>
using namespace std;

class person {
public:
    std::string name = "Alice";
    void showperson() {
        std::cout << "Name: " << name << std::endl;
    }
};

class student : public person {
public:
    int studentId = 101;
    void showstudent() {
        showperson();
        std::cout << "ID: " << studentId << std::endl;
    }
};

class GraduateStudent : public student {
public:
    std::string topic = "AI Research";
    void showgraduate() {
        showstudent();
        std::cout << "Research: " << topic << std::endl;
    }
};

int main() {
    std::cout << "Single inheritance" << std::endl;
    student s;
    s.showstudent();

    std::cout << "\nMultilevel Inheritance" << std::endl;
    GraduateStudent g;
    g.showgraduate();

    return 0;
}
