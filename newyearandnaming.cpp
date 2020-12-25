#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;
  std::string a[n], b[m];

  for (int i=0; i<n; ++i)
    std::cin >> a[i];

  for (int i=0; i<m; ++i)
    std::cin >> b[i];

  int q, t;
  std::cin >> q;

  while (q--) {
    std::cin >> t;
    t--;
    std::cout << a[t%n]+b[t%m] << std::endl;
  }

  return 0;
}
