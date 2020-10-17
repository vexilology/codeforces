#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> a(3);
  std::cin >> a[0] >> a[1] >> a[2];

  sort(a.begin(), a.end());

  std::cout << a[1] - a[0] + a[2] - a[1] << std::endl;
  return 0;
}
