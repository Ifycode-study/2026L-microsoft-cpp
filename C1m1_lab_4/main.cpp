

// Run code with command:
// g++ c1m1_lab_4/*.cpp -o c1m1_lab_4/toolkit && ./c1m1_lab_4/toolkit  


#include <iostream>
#include "date/date_utils.h"
#include "random/random_utils.h"

int main() {

    // 1. Use the Date Module
    std::cout << "Current Time: " << getCurrentTimestamp() << std::endl;

    // 2. Use the Random Module
    int roll = getRandomNumber(1, 6);
    std::cout << "You rolled a die and got: " << roll << std::endl;
    
    std::cout << "Coin flip says: " << (flipCoin() ? "Heads" : "Tails") << std::endl;

    return 0;
}
