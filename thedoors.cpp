#include <iostream>

int main() {
  int n, a, b[2];
  std::cin >> n;

  for (int i=1; i<=n; ++i) {
    std::cin >> a;
    b[a] = i;
  }

  std::cout << std::min(b[0], b[1]) << std::endl;
  return 0;
}
