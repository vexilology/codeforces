#include <iostream>

int main() {
  int n, a;
  std::cin >> n;

  while (n--) {
    std::cin >> a;
    if (a%2 == 0)
      a--;
    std::cout << a << " ";
  }

  std::cout << std::endl;
  return 0;
}
