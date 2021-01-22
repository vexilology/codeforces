#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int a[6000];

  for (int i=1; i<=n; ++i) {
    std::cin >> a[i];
  }

  for (int i=1; i<=n; ++i) {
    if (a[a[a[i]]] == i) {
      std::cout << "YES" << std::endl;
      return 0;
    }
  }

  std::cout << "NO" << std::endl;
}
