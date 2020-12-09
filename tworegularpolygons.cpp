#include <iostream>

int main() {
  int t;
  std::cin >> t;

  for (int i=0; i<t; ++i) {
    int n, m;
    std::cin >> n >> m;
    if (n%m == 0 || m%n == 0)
      std::cout << "YES" << std::endl;
    else
      std::cout << "NO" << std::endl;
  }

  return 0;
}
