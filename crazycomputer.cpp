#include <iostream>

int main() {
  int n, a, b, c, d=1;
  std::cin >> n >> a;
  std::cin >> b;

  for (int i=1; i<n; ++i) {
    std::cin >> c;
    if (c-b>a) {
      d = 0;
    }
    d++;
    b = c;
  }

  std::cout << d << std::endl;
  return 0;
}
