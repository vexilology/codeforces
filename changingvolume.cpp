#include <iostream>

int main() {
  int x;
  std::cin >> x;

  while (x--) {
    int a, b;
    std::cin >> a >> b;
    int w = std::abs(a-b);
    w = w/5 + (w%5)/2 + (w%5)%2;
    std::cout << w << std::endl;
  }

  return 0;
}
