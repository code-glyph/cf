#include<iostream>
#include<string>

int main() {
    int n = 0;
    int x = 0;
    std::cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    for(int i = 0; i < n; i++) {
        std::string operation;
        std::getline(std::cin, operation);
        if(operation.find("++") != std::string::npos) {
            x++;
        } else {
            x--;
        }
    }
    std::cout << x << std::endl;
    
    return 0;
}