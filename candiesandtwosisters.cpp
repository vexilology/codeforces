#include <iostream>

int main() {
  long long n, w;
  std::cin >> n;

  for (int i=0; i<n; ++i) {
    std::cin >> w;
    if (w % 2)
      ++w;
    std::cout << w/2 - 1 << std::endl;
  }

  return 0;
}
