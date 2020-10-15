#include <iostream>

int main() {
  int w, q, i=1;
  std::cin >> w >> q;
  int temp = w;

  while (w%10 != 0 && w%10 != q) {
    ++i;
    w = temp*i;
  }

  std::cout << i << std::endl;
  return 0;
}
