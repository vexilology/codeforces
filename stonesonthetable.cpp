#include <iostream>

int main() {
  int n, res = 0;
  char temp, t;
  std::cin >> n >> temp;
  t = temp;

  for (int i=1; i<n; ++i) {
    std::cin >> temp;
    if (temp == t)
      ++res;
    t = temp;
  }

  std::cout << res << std::endl;
  return 0;
}
