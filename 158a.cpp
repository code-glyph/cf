#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
    int n = 0, k = 0, counter = 1, cutoff_score = 0, qualifiers = 0;

    std::cin >> n >> k;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    while(counter <= n) {
        int score = 0;
        std::cin >> score;

        if (counter == k) {
            cutoff_score = score;
        }
        
        if(score > 0 && (counter <= k || score == cutoff_score)) {
            qualifiers++;
        } else {
            break;
        }

        counter++;
    }
    std::cout << qualifiers << std::endl;

    return 0;
}