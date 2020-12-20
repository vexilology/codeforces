#include <iostream>
#include <algorithm>

int main() {
  int t;
  std::cin >> t;

  while (t--) {
    int b, p, f, h ,c;
    std::cin >> b >> p >> f >> h >> c;
    if (h<c) {
      std::swap(h, c);
      std::swap(p, f);
    }
    std::cout << std::min(b/2, p)*h + std::min((b-std::min(b, 2*p))/2, f)*c << std::endl;
  }

  return 0;
}
