#include <iostream>

int main() {
  long long n, k;
  std::cin >> n >> k;

  while (k) {
    if (n%10 == 0)
      n /= 10;
    else
      n -= 1;
    --k;
  }

  std::cout << n << std::endl;
  return 0;
}
