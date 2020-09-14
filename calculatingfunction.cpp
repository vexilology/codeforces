#include <iostream>

int main() {
  long long n;
  std::cin >> n;

  if (n%2)
    std::cout << n/2 * (-1) - 1 << std::endl;
  else
    std::cout << n/2 << std::endl;

  return 0;
}
