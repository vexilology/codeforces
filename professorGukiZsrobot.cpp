#include <iostream>

int a, b, c, d;

int main() {
  std::cin >> a >> b >> c >> d;

  std::cout << std::max(abs(a-c), abs(b-d)) << std::endl;
  return 0;
}
