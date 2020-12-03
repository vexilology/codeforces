#include <iostream>

int main() {
  long long w, a, b, c;
  std::cin >> w;

  while (w--) {
    std::cin >> a >> b >> c;
    std::cout << (a+b+c)/2 << std::endl;
  }

  return 0;
}
