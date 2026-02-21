
/*
  Run code with command:
  g++ c1m1_3_header/header.cpp c1m1_3_header/main.cpp -o c1m1_3_header/.gen && ./c1m1_3_header/.gen  
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
