#include <iostream>

int main() {
  int d1, d2, d3;
  std::cin >> d1 >> d2 >> d3;
  std::cout << std::min(d1+d2+d3, std::min(2*(d1+d2), std::min(d1*2+d3*2, d2*2+d3*2))) << std::endl;
  return 0;
}
