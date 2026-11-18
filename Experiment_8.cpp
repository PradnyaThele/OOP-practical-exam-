// Experiment No. 8
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    vector<int> marks = {75, 90, 65, 85};
    map<string, int> m = {{"Amit", 75}, {"Raj", 90}};
    unordered_map<string, int> u(m.begin(), m.end());

    sort(marks.begin(), marks.end());

    transform(marks.begin(), marks.end(), marks.begin(), [](int x) { return x + 5; });

    auto it = find_if(marks.begin(), marks.end(), [](int x) { return x > 80; });

    cout << "Updated Marks: ";
    for (int x : marks)
        cout << x << " ";

    if (it != marks.end())
        cout << "\nFirst mark above 80: " << *it << endl;

    return 0;
}
