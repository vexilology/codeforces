#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int n, w;
  std::cin >> n >> w;
  std::vector<int> a(n);

  for (int i=0; i<n; ++i) {
    std::cin >> a[i];
  }

  sort(a.begin(), a.end());

  for (int i=a.size()-1; i>=0; --i) {
    if (a[i]<=5-w) {
      std::cout << ++i/3 << std::endl;
      return 0;
    }
  }

  std::cout << 0 << std::endl;
  return 0;
}
