#include <iostream>

int main() {
  // Add your code below 
  double mass;
  double earthWeight;
  double marsWeight;

  std::cout << "Enter the mass of the object: ";
  std::cin >> mass;

  earthWeight =  mass * 9.81;
  marsWeight = mass * 3.71;

  std::cout << "The object's Weight on Earth is: " << earthWeight << " Newtons.\n";
  std::cout << "The object's Weight on Mars is: " << marsWeight << " Newtons.\n";

  return 0;

}
