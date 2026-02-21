
#include "random_utils.h"
#include <random>

int getRandomNumber(int min, int max) {
    // 'static' keeps the generator alive so it doesn't reset every time
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);
    return dis(gen);
}

bool flipCoin() {
    return getRandomNumber(0, 1) == 1;
}
