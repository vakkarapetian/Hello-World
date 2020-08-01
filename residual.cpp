#include <iostream>

int main() {
  
  int num1;
  int num2;
  std::cin >> num1>> num2;
  int residual = num1 % num2;
  std::cout << residual; 
}