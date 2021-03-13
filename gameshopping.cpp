#include <iostream>
#include <vector>

int main() {
  int n, m;
  int k = 0;
  int j = 0;
  std::cin >> n >> m;
  std::vector<int> a(n);
  std::vector<int> b(m);

  for (int i=0; i<n; ++i) {
    std::cin >> a[i];
  }

  for (int i=0; i<m; ++i) {
    std::cin >> b[i];
  }

  for (int i=0; i<n; ++i) {
    if (b[j] >= a[i] && j<m) {
      ++k;
      ++j;
    }
  }

  std::cout << k << std::endl;
  return 0;
}
