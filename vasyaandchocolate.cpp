#include <iostream>

int main() {
  int t;
  std::cin >> t;

  while (t--) {
    int w, a, b, c;
    std::cin >> w >> a >> b >> c;
    long long ans = w/c;
    ans += ans / a * b;
    std::cout << ans << std::endl;
  }

  return 0;
}
