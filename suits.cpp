#include <iostream>

int main() {
  int a, b, c, d, e, f, ans=0;
  std::cin >> a >> b >> c >> d >> e >> f;

  for (int i=0; i<=std::min(a, d); ++i) {
    ans = std::max(ans, i*e + std::min(std::min(d-i, b), c)*f);
  }

  std::cout << ans << std::endl;
  return 0;
}
