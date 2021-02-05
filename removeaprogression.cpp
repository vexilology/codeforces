#include <iostream>

int main() {
  int T, x, n;
  std::cin >> T;

  while (T--) {
    std::cin >> n >> x;
    std::cout << x*2 << std::endl;
  }

  return 0;
}
