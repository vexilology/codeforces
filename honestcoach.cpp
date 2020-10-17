#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int w;
  std::cin >> w;

  for (int i=0; i<w; ++i) {
    int n;
    std::cin >> n;
    std::vector<int> a(n);

    for (int &x : a) {
      std::cin >> x;
    }

    sort(a.begin(), a.end());

    int res = a[n-1] - a[0];

    for (int i=0; i<n; ++i) {
      for (int j=i+1; j<n; ++j) {
        res = std::min(res, a[j]-a[i]);
      }
    }

    std::cout << res << std::endl;
  }

  return 0;
}
