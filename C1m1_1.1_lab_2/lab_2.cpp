/*
  Run code with command:
  g++ C1m1_1.1_lab_2/lab_2.cpp -o C1m1_1.1_lab_2/lab_2 && ./C1m1_1.1_lab_2/lab_2  
*/


/*
 * Personal Introduction Program
 * Created by: Mary OMI
 * Date: 28 Jan, 2026.
 * 
 * Description: This program displays personal information 
 * about myself in a formatted way on the console.
 */

/* 
 * My Learning Goals:
 * 
 * To be able to display my personal info in console
 * 
 */


#include <iostream>

int main() {
    // ASCII Art example
    std::cout << "\033[32m" << "====================================" << "\033[0m" << std::endl;
    std::cout << "\033[32m" << "           ASCII ART EXAMPLE        " << "\033[0m" << std::endl;
    std::cout << "\033[32m" << "====================================" << "\033[0m" << std::endl;

    std::cout << "\033[37m" << "\n  ¯\\_(ツ)_/¯  \n" << "\033[0m" << std::endl;

    // Display header
    std::cout << "====================================" << std::endl;
    std::cout << "       PERSONAL INTRODUCTION        " << std::endl;
    std::cout << "====================================" << std::endl;
    
    // Display greeting with name
    std::cout << "\033[31m" << "Hello, my name is Mary." << "\033[0m" << std::endl;
    
    // Display current role/occupation
    std::cout << "\033[33m" << "I am a Product Software Engineer." << "\033[0m" << std::endl;

    std::cout << "\033[32m" << "\t Gender: Female" << "\033[0m" << std::endl;
    std::cout << "\033[32m" << "\t Specialization: Framework Development" << "\033[0m" << std::endl;

    // Educational background section
    std::cout << "\nEDUCATION" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Degree: BSc Software Engineering" << std::endl;
    std::cout << "School: Yale" << std::endl;
    std::cout << "Year: 2019" << std::endl;

    // // Career goals section
    // std::cout << "\nCAREER GOALS" << std::endl;
    // std::cout << "------------------------------------" << std::endl;
    // std::cout << "Short-term: Learn new languages" << std::endl;
    // std::cout << "Long-term: Build frameworks & languages" << std::endl;

    // // Why taking this course
    // std::cout << "\nWHY I'M TAKING THIS COURSE" << std::endl;
    // std::cout << "------------------------------------" << std::endl;
    // std::cout << "To equip me for expanded job opportunities" << std::endl;

    // Favourite programming concepts
    std::cout << "\nTOPICS I'M EXCITED ABOUT" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Developer Experience (DX)" << std::endl;

    // Closing message
    std::cout << "\nThank you for reading my introduction!" << std::endl;

    // Display footer
    std::cout << "====================================" << std::endl;
    
    return 0;
}
