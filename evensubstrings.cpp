#include <iostream>

int main() {
  int n, w=0;
  char c;
  std::cin >> n;

  for (int i=1; i<=n; ++i) {
    std::cin >> c;
    if (c%2 == 0)
      w += i;
  }

  std::cout << w << std::endl;
  return 0;
}
