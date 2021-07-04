#include <iostream>

int main() {
  int t, a, b, x, y;

  for (std::cin >> t; t; --t) {
    std::cin >> a >> b >> x >> y;
    std::cout << std::max(std::max(x, a-x-1)*b, std::max(y, b-y-1)*a) << std::endl;
  }

  return 0;
}
