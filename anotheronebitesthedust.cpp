#include <iostream>

int main() {
  long long a, b, c;
  std::cin >> a >> b >> c;

  std::cout << c*2 + std::min(a, b)*2 + (a!=b) << std::endl;
  return 0;
}
