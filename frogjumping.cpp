#include <iostream>

int main() {
  long long a, b, c, t;
  std::cin >> t;

  while (t > 0) {
    std::cin >> a >> b >> c;
    std::cout << c/2*(a-b)+c%2*a << std::endl;
    t--;
  }

  return 0;
}
