#include <iostream>
#include <string>


int main() {
    int n;
    int index;
    std::string newElement;
    
    std::cin >> n;
    std::cin >> index;
    std::cin.ignore();
    std::getline(std::cin, newElement);
    std::string arr[n];

    // Use n, index, arr and newElement to solve the problem
    
    for (int i = 0; i < n; i++) {
        // Populate arr
        // Read a string value and store it in arr[i]
        std::string val;
        std::cin >> val;
        arr[i] = val;
    }
    
    // Modify arr
    // Set the element at position 'index' to 'newElement'
    arr[index] = newElement;

    
    // print arr
    // Loop through the array and print each element
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << std::endl;
    }


    return 0;
}
