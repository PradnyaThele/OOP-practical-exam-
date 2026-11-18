// Experiment No. 10
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream f("student.csv", ios::in | ios::out | ios::trunc);

    int roll, marks;
    string name;

    cout << "Enter roll, name and marks:\n";
    for (int i = 0; i < 2; i++) {
        cin >> roll >> name >> marks;
        f << roll << "," << name << "," << marks << endl;
    }

    cout << "Write pointer: " << f.tellp() << endl;

    f.seekg(0, ios::beg);
    cout << "\nStudent Records:\n";

    string line;
    while (getline(f, line))
        cout << line << endl;

    f.clear();
    f.seekp(0, ios::end);
    cout << "Position: " << f.tellp() << endl;

    f.close();
    return 0;
}
