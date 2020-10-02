#include <iostream>

int main() {
  int n, q, w;
  std::cin >> n;

  for (int i=0; i<n; ++i) {
    std::cin >> q >> w;
    if (q <= w)
      std::cout << w - q;
    else if (q % w)
      std::cout << w * (q/w + 1) - q;
    else
      std::cout << 0;
    std::cout << std::endl;
  }

  return 0;
}
