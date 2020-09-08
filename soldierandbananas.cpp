#include <iostream>

int main() {
  long long k, n, w, sum = 0;
  std::cin >> k >> n >> w;

  for (long long i=1; i<=w; ++i) {
    sum += i * k;
  }

  if (sum > n)
    std::cout << sum - n << std::endl;
  else
    std::cout << 0 << std::endl;

  return 0;
}
