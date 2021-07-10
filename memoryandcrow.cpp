#include <iostream>

int n;
int a[200000], b[200000];

int main() {
  std::cin >> n;

  for (int i=0; i<n; ++i)
    std::cin >> a[i];

  for (int i=n; i>0; --i)
    b[i] = a[i] + a[i-1];

  for (int i=1; i<=n; ++i)
    std::cout << b[i] << ' ';

  std::cout << std::endl;
  return 0;
}
