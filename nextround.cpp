#include <iostream>
#include <vector>

int main() {
  int n, k, m;
  std::cin >> n >> k;
  std::vector<int> a;

  for (int i=0; i<n; ++i) {
    std::cin >> m;
    a.push_back(m);
  }

  int t = a[k-1], res = 0;

  for (int i=0; i<a.size(); ++i)
    if (a[i] > 0 && a[i] >= t)
      ++res;
  std::cout << res << std::endl;

  return 0;
}
