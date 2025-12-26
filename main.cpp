#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    // Write your code below
    int rows = n / 2 + 1;
    for (int i = 0; i < rows; i++){
        std::string str(2 * (i + 1) - 1, '*');
        std::cout << str << std::endl;
    }
    
    return 0;
}