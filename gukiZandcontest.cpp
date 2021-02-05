#include <iostream>

int main() {
  int n, i, q, w, a[10000];
  std::cin >> n;

  for (int i=1; i<=n; ++i)
    std::cin >> a[i];

  for (int i=1; i<=n; ++i) {
    w = 1;
    for (int q=1; q<=n; ++q)
      if (a[i] < a[q])
        w++;
    std::cout << w << " ";
  }

  std::cout << std::endl;
  return 0;
}
