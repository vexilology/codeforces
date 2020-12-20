#include <iostream>

int main() {
  int a, b, c, d, e, f, n;
  std::cin >> a >> b >> c >> d >> e >> f >> n;
  a += b + c + 4;
  d += e + f + 9;
  std::cout << (a/5 + d/10 > n ? "NO" : "YES") << std::endl;
  return 0;
}
