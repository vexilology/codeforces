#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;
  a = std::min(a, b);
  int ans = 1;

  while (a > 0) {
    ans = ans * a;
    a--;
  }

  std::cout << ans << std::endl;
  return 0;
}
