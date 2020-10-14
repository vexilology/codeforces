#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int w, n;
  std::cin >> w;

  for (int i=0; i<w; ++i) {
    std::cin >> n;
    std::vector<int> a(n);

    for (int j=0; j<n; ++j)
      std::cin >> a[j];

    sort(a.begin(), a.end());
    bool b = true;

    for (int j=1; j<a.size(); ++j)
      if (abs(a[j]-a[j-1])>1) {
        b = false;
        break;
      }

    if (b)
      std::cout << "YES" << std::endl;
    else
      std::cout << "NO" << std::endl;
  }

  return 0;
}
