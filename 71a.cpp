#include<iostream>
#include<string>

int main() {
    int n = 0;
    std::cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    for(int i = 0; i < n; i++) {
        std::string word;
        std::getline(std::cin, word);
        int size = word.length();
        if (size <= 10) {
            std::cout << word << std::endl;
        } else {
            std::cout << word[0] << std::to_string(size-2) << word[size-1] << std::endl;
        }
    }

    return 0;
}