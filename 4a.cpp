#include<iostream>
bool returnWatermelon(int weight) {
    if (weight % 2 == 0 && weight > 2) {
        return true;
    }
    return false;
}

int main() {
    int weight = 0;
    std::cin >> weight;
    if(returnWatermelon(weight)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}