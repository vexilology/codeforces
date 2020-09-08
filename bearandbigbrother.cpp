#include <iostream>

int main() {
  int l, b, k = 0;
  std::cin >> l >> b;

  while (l <= b) {
    ++k;
    l *= 3;
    b *= 2;
  }

  std::cout << k << std::endl;
  return 0;
}
