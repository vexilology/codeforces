#include <iostream>
#include <algorithm>

int main() {
  int a, b;
  std::cin >> a >> b;
  a = 6 - std::max(a, b) + 1;
  b = std::__gcd(6, a);
  std::cout << (a/b) << "/" << (6/b) << std::endl;
  return 0;
}
