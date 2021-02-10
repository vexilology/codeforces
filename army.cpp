#include <iostream>

int main() {
  int n, a, b, d[200];
  std::cin >> n;

  for (int i=1; i<n; ++i) {
    std::cin >> d[i];
    d[i] += d[i-1];
  }

  std::cin >> a >> b;
  std::cout << d[b-1]-d[a-1] << std::endl;
  return 0;
}
