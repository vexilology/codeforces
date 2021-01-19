#include <iostream>

int main() {
  long long n, k;
  std::cin >> n >> k;

  if ((n/k) & 1)
    std::cout << "YES" << std::endl;
  else
    std::cout << "NO" << std::endl;

  return 0;
}
