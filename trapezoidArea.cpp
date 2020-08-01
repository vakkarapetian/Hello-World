#include <iostream>

int main() {
  
  double a;
  double b;
  double height;
  std::cin >> a>> b >>height;
  double area = ((a + b) / 2)*height;
  std::cout << area; 
}