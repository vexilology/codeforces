#include <iostream>

int main() {
  int a, b, c, d;
  std::cin >> a >> b >> c >> d;

  int x = std::min(a, std::min(c, d));
  a -= x;
  int y = std::min(a, b);

  std::cout << x*256+y*32 << std::endl;
  return 0;
}
