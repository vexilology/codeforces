#include <iostream>

int main() {
  int n;
  std::cin >> n;

  for (int i=0; i<n; ++i) {
    for (int j=0; j<n; ++j) {
      if (abs(n/2-j) <= std::min(i, n-i-1))
        std::cout << 'D';
      else
        std::cout << '*';
    }
    std::cout << std::endl;
  }

  return 0;
}
