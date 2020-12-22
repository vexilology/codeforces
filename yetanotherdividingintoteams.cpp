#include <iostream>
#include <algorithm>

int main() {
  int w;
  std::cin >> w;

  while (w--) {
    int n, a[100], b=1;
    std::cin >> n;

    for (int i=0; i<n; ++i)
      std::cin >> a[i];

    std::sort(a, a+n);

    for (int i=1; i<n; ++i)
      if (a[i] - a[i-1] == 1)
        b = 2;

    std::cout << b << std::endl;
  }
  return 0;
}
