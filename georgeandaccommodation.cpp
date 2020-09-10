#include <iostream>

int main() {
  int n, q, w, k = 0;
  std::cin >> n;

  for (int i=0; i<n; ++i) {
    std::cin >> q >> w;
    if (w - q > 1)
      ++k;
  }

  std::cout << k << std::endl;
  return 0;
}
