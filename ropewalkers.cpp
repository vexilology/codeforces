#include <iostream>
#include <algorithm>

int main() {
  int a[3], x;

  for (int i=0; i<3; ++i)
    std::cin >> a[i];

  std::cin >> x;
  std::sort(a, a+3);

  std::cout << std::max(a[0]+x-a[1], 0)+std::max(a[1]+x-a[2], 0) << std::endl;
  return 0;
}
