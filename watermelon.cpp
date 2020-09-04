#include <iostream>
#include <vector>
#include <math.h>

bool func(int m) {
  for (int i=2; i<=sqrt(m); ++i)
    if (!(m % i))
      return 0;

  return 1;
}

int main() {
  int n;
  std::cin >> n;
  std::vector<int> a;
  if (func(n) || n % 2)
    std::cout << "NO" << std::endl;
  else
    std::cout << "YES" << std::endl;

  return 0;
}
