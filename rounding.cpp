#include <iostream>

int main() {
  int n;
  std::cin >> n;

  int w = n % 10;

  std::cout << (w>5 ? n+10-w: n-w) << std::endl;
  return 0;
}
