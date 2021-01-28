#include <iostream>

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;

  std::cout << std::min(a, std::min(b/2, c/4))*7 << std::endl;
  return 0;
}
