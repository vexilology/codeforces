#include <iostream>

int main() {
  long n, k;
  std::cin >> n >> k;

  std::cout << (2*n+k-1)/k+(5*n+k-1)/k+(8*n+k-1)/k << std::endl;
  return 0;
}
