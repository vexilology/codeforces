#include <iostream>

int main() {
  long long n, a, b;
  int q;
  std::cin >> q;

  while (q--) {
    std::cin >> n >> a >> b;
    std::cout << std::min(a*n, n/2*b+(n%2)*a) << std::endl;
  }

  return 0;
}
