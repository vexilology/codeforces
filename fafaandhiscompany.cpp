#include <iostream>

int main() {
  int n, w=0;
  std::cin >> n;

  for (int i=1; i<n; ++i) {
    if (n%i == 0)
      ++w;
  }

  std::cout << w << std::endl;
  return 0;
}
