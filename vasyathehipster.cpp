#include <iostream>

int main() {
  int q, w;
  std::cin >> q >> w;

  std::cout << std::min(q, w) << " " << (q-std::min(q, w)+w-std::min(q, w))/2 << std::endl;

  return 0;
}
