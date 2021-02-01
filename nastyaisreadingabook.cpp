#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int l[n+1], r[n+1];

  for (int i=1; i<=n; ++i) {
    std::cin >> l[i] >> r[i];
  }

  int k;
  std::cin >> k;
  int w = 0;

  for (int i=1; i<=n; ++i) {
    if (k <= r[i]) {
      w++;
    }
  }

  std::cout << w << std::endl;
  return 0;
}
