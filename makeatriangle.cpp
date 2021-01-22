#include <iostream>
#include <algorithm>

int main() {
  int w[3];
  std::cin >> w[0] >> w[1] >> w[2];
  std::sort(w, w+3);
  std::cout << std::max(0, w[2]-w[1]-w[0]+1) << std::endl;
  return 0;
}
