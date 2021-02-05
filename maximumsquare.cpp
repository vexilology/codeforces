#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int w;
  std::cin >> w;

  while (w--) {
    int n;
    std::cin >> n;
    std::vector<int> a(n);

    for (int i=0; i<n; ++i)
      std::cin >> a[i];

    std::sort(a.begin(), a.end());

    int i = 0;

    while (n-i > a[i]) {
      i++;
    }
    std::cout << n-i << std::endl;
  }

  return 0;
}
