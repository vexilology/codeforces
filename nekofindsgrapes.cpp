#include <iostream>

int main() {
  int n, m;
  int q{};
  int w{};
  std::cin >> n >> m;

  for (int i=0; i<n; ++i) {
    int a;
    std::cin >> a;
    if (a & 1)
      q++;
  }

  for (int i=0; i<m; ++i) {
    int b;
    std::cin >> b;
    if (b & 1)
      w++;
  }

  std::cout << (std::min(w, n-q) + std::min(q, m-w)) << std::endl;
  return 0;
}
