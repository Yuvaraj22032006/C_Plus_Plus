#include <iostream>

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    // Write your code below
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i + j == n)
            {
                std::cout << i << " " << j << std::endl;
            }
        }
    }

    return 0;
}