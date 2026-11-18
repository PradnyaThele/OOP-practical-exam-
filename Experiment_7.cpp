// Experiment No. 7
#include <iostream>
using namespace std;

template <typename T>
class stack {
public:
    T arr[10];
    int top = -1;

    void push(T val) {
        arr[++top] = val;
    }

    T pop() {
        return arr[top--];
    }
};

int main() {
    stack<int> s1;
    s1.push(10);
    std::cout << "Int: " << s1.pop() << std::endl;

    stack<float> s2;
    s2.push(5.5f);
    std::cout << "Float: " << s2.pop() << std::endl;

    stack<std::string> s3;
    s3.push("Hello");
    std::cout << "String: " << s3.pop() << std::endl;

    return 0;
}
