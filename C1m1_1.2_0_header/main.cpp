
/*
  Run code with command:
  g++ C1m1_1.2_0_header/header.cpp C1m1_1.2_0_header/main.cpp -o C1m1_1.2_0_header/.gen && ./C1m1_1.2_0_header/.gen  
*/

#include <iostream>
#include "header.h"

using namespace std;

namespace MyApp { // My own created namespace
    void display() {
        cout << "Displaying from MyApp namespace" << endl;
    }
}

int main() {
    greet(); // Calling the function you defined in header.cpp
    MyApp::display(); // Calling the function in MyApp namespace
    return 0;
}
