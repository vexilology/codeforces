#include <iostream>

int main() {
  int w;
  std::cin >> w;

  while (w--) {
    int a, b;
    std::cin >> a >> b;

    std::cout << std::min(2, a-1) * b << std::endl;
  }

  return 0;
}
