#include <iostream>

int main() {
  int n;
  int m;
  int k;
  std::cin >> n >> m >> k;

  if (std::min(m, k) >= n) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }

  return 0;
}
