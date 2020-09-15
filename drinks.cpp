#include <iostream>
#include <iomanip>

int main() {
  int n, w;
  double x = 0;
  std::cin >> n;

  for (int i=0; i<n; ++i) {
    std::cin >> w;
    x += w;
  }

  std::cout << std::fixed << std::setprecision(12) << (x/n) << std::endl;
  return 0;
}
