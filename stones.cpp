#include <iostream>

int main() {
  int n;
  int a, b, c;
  std::cin >> n;

  while (n--) {
    std::cin >> a >> b >> c;
    std::cout << (std::min(b, c/2) + std::min(a, (b-std::min(b, c/2))/2))*3 << std::endl;
  }

  return 0;
}
