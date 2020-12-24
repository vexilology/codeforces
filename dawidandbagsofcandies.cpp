#include <iostream>
#include <algorithm>

int main() {
  int m[200];
  std::cin >> m[0] >> m[1] >> m[2] >> m[3];
  std::sort(m, m+4);

  if (abs(m[1]+m[2]-m[3]) == m[0])
    std::cout << "YES" << std::endl;
  else
    std::cout << "NO" << std::endl;

  return 0;
}
