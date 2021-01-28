#include <iostream>

int main() {
  int n, a, b, c, d, sum, w, q=0;
  std::cin >> n;
  std::cin >> a >> b >> c >> d;
  w = a + b + c + d;

  for (int i=2; i<=n; ++i) {
    std::cin >> a >> b >> c >> d;
    sum = a + b + c + d;
    if (sum > w)
      q++;
  }

  std::cout << q+1 << std::endl;
  return 0;
}
