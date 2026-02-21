/*
  Run code with command:
  g++ c1m1_2_hello/hello.cpp -o c1m1_2_hello/hello && ./c1m1_2_hello/hello  
*/

#include <iostream>
using namespace std;

// Function example
int greetUser(int zero, string name) {
    cout << "Greetings, " << name << "!" << endl;
    return zero;
}

int main() {
    int zero = 0;
    double radius = 5.0;
    double area = 3.14159 * radius * radius;

    cout << "Hello, World!" << endl;

    int result = greetUser(zero + 1, "Mary");
    cout << "Function returned: " << result << endl;

    return zero;
}
