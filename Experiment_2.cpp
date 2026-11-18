// Experiment No. 2
#include <iostream>
using namespace std;

class student {
public:
    string name;

    student() {
        name = "Pradnya";
        cout << "Default constructor" << endl;
    }

    student(string n) {
        name = n;
        cout << "Parameterized constructor" << endl;
    }

    student(const student &s) {
        name = s.name;
        cout << "Copy constructor" << endl;
    }

    student(student &&s) {
        name = s.name;
        cout << "Move constructor" << endl;
    }

    ~student() {
        cout << "Destructor" << endl;
    }
};

int main() {
    student s1;
    cout << "Name: " << s1.name << endl;

    student s2("Riya");
    cout << "Name: " << s2.name << endl;

    student s3(s2);
    cout << "Name: " << s3.name << endl;

    student s4(student("Priya"));
    cout << "Name: " << s4.name << endl;

    return 0;
}
