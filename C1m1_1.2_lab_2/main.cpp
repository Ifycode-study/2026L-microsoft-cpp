

// Run code with command:
// g++ C1m1_1.2_lab_2/*.cpp -o C1m1_1.2_lab_2/toolkit && ./C1m1_1.2_lab_2/toolkit  


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
