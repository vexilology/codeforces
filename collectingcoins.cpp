#include <algorithm>
#include <iostream>

int main() {
  int w;
  std::cin >> w;

  for (int i=0; i<w; ++i) {
    int a[3], n;
    std::cin >> a[0] >> a[1] >> a[2] >> n;

    std::sort(a, a+3);
    n -= 2*a[2]-a[1]-a[0];

    if (n<0 || n%3 != 0)
      std::cout << "NO" << std::endl;
    else
      std::cout << "YES" << std::endl;
  }

  return 0;
}
