// Experiment No. 3
#include <iostream>
using namespace std;

class student {
private:
    string Name;
    int marks;

protected:
    int DOB;

public:
    student(string name, int dob, int m) : Name(name), DOB(dob), marks(m) {}

    void display() {
        cout << "Name: " << Name << " DOB: " << DOB << endl;
    }

    friend void showGrade(student s);
};

void showGrade(student s) {
    s.display();
    cout << "Marks: " << s.marks << endl;
    cout << "DOB (protected access): " << s.DOB << endl;
}

int main() {
    student myDetails("Pradnya", 2007, 24);
    showGrade(myDetails);
    return 0;
}
