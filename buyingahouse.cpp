#include <iostream>

int main() {
  int n, m, k;
  int ans = 1000;
  std::cin >> n >> m >> k;
  m--;

  for (int i=0; i<n; ++i) {
    int a;
    std::cin >> a;
    if (a != 0 && a <= k) {
      ans = std::min(ans, abs(m-i));
    }
  }

  std::cout << ans * 10 << std::endl;
  return 0;
}
