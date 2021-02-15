#include <iostream>

int main() {
  int a[110], n, m;
  std::cin >> n;

  for (int i=1; i<=n; ++i)
    std::cin >> a[i];

  std::cin >> m;

  for (int i=1; i<=m; ++i) {
    int x, y;
    std::cin >> x >> y;
    a[x-1] += y-1;
    a[x+1] += a[x]-y;
    a[x] = 0;
  }

  for (int i=1; i<=n; ++i)
    std::cout << a[i] << std::endl;

  return 0;
}
