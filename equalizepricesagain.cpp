#include <iostream>

int main() {
  int w;
  std::cin >> w;

  while (w--) {
    int n;
    std::cin >> n;
    long long x, a=0;
    for (int i=0; i<n; ++i) {
      std::cin >> x;
      a += x;
    }
    std::cout << (a+n-1)/n << std::endl;
  }

  return 0;
}
