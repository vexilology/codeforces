#include <iostream>
#include <algorithm>

int main() {
  int n, m;
  std::cin >> n >> m;
  int a[n];

  for (int i=0; i<n; ++i) {
    std::cin >> a[i];
  }

  std::sort(a, a+n);
  int w=0, q=0;

  for (int i=n-1; i>=0; --i) {
    q += 1;
    w += a[i];
    if (w>=m) {
      break;
    }
  }

  std::cout << q << std::endl;
  return 0;
}
