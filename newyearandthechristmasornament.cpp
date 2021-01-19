#include <iostream>

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;
  std::cout << std::min(a, std::min(b-1, c-2))*3+3 << std::endl;
  return 0;
}
