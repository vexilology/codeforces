#include <iostream>
#include <vector>

int main() {
  int t, n;
  std::cin >> t;

  for (int i=0; i<t; ++i) {
    std::cin >> n;
    std::vector<int> a(n);
    int w = -1;
    for (int j=0; j<n; ++j) {
      std::cin >> a[j];
      if (a[j]%2 == 0)
        w = j;
    }
    if (w >= 0) {
      std::cout << 1 << std::endl << w+1 << std::endl;
      continue;
    }
    else {
      bool b = true;
      for (int j=0; j<a.size()-1; ++j)
        if ((a[j]+a[j+1])%2 == 0) {
          std::cout << 2 << std::endl << j+1 << " " << j+2 << std::endl;
          b = false;
          break;
        }
      if (b)
        std::cout << -1 << std::endl;
    }
  }

  return 0;
}
