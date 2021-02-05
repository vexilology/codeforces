#include <iostream>
#include <climits>
#include <iomanip>

int main() {
  int n, m;
  std::cin >> n >> m;
  double x = INT_MAX;

  for (int i=0; i<n; ++i) {
    double a, b;
    std::cin >> a >> b;
    x = std::min(x, a/b);
  }

  std::cout << std::fixed << std::setprecision(8) << m*x << std::endl;
  return 0;
}
