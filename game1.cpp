#include <iostream>
#include <algorithm>

int main() {
  int n, a[1123];
  std::cin >> n;

  for (int i=0; i<n; ++i)
    std::cin >> a[i];
  std::sort(a, a+n);

  std::cout << a[(n-1)/2] << std::endl;
  return 0;
}
