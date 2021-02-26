#include <iostream>

int main() {
  int n, a, b[200];
  std::cin >> n;

  for (int i=1; i<=n; ++i) {
    std::cin >> a;
    b[a] = i;
  }

  std::cout << std::max(std::max(b[1]-1, n-b[1]), std::max(b[n]-1, n-b[n])) << std::endl;
  return 0;
}
