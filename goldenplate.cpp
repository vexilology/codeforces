#include <iostream>

int main() {
  int w, h, k;
  std::cin >> w >> h >> k;

  std::cout << 2*(w+h+2-4*k)*k << std::endl;
  return 0;
}
